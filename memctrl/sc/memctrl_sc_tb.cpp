// SystemC transaction-latency test for the Verilator-generated mem_ctrl model (Vmem_ctrl).
//
// Same checks as the Verilog testbench (tb/tb_mem_ctrl.v):
//   - a golden memory model is updated in issue order; each request's expected response is
//     recorded when it is issued,
//   - each response matches the oldest outstanding request on its channel (in order per type),
//   - READ returns mem[addr] at issue, WRITE acks the address, RMW_ADD returns the old value,
//   - every response arrives exactly LAT cycles after the request (negedge c -> negedge c+LAT).

#include <systemc.h>

#include <cstdint>
#include <cstdio>
#include <deque>
#include <random>

#include "Vmem_ctrl.h"
#include "verilated.h"

static const int NCYC  = 800;
static const int AW    = 8;
static const int NADDR = 1 << AW;

enum { T_RD = 0, T_WR = 1, T_RMW = 2, NTYPES = 3 };
static const int LAT[NTYPES]     = {4, 2, 6};        // must match the DUT parameters
static const char* NAME[NTYPES]  = {"READ ", "WRITE", "RMW  "};

struct Exp {
    int      issue_cyc;
    uint32_t value;   // READ: data, WRITE: acked address, RMW: old value
};

SC_MODULE(memctrl_tb) {
    sc_clock clk{"clk", 10, SC_NS};

    sc_signal<bool>     rst_n{"rst_n"};
    sc_signal<bool>     req_valid{"req_valid"};
    sc_signal<uint32_t> req_type{"req_type"};
    sc_signal<uint32_t> req_addr{"req_addr"};
    sc_signal<uint32_t> req_wdata{"req_wdata"};
    sc_signal<bool>     rd_valid{"rd_valid"};
    sc_signal<uint32_t> rd_data{"rd_data"};
    sc_signal<bool>     wr_valid{"wr_valid"};
    sc_signal<uint32_t> wr_addr{"wr_addr"};
    sc_signal<bool>     rmw_valid{"rmw_valid"};
    sc_signal<uint32_t> rmw_old{"rmw_old"};

    Vmem_ctrl dut{"dut"};

    // request schedule
    bool     s_valid[NCYC];
    int      s_type[NCYC];
    int      s_addr[NCYC];
    uint32_t s_wdata[NCYC];

    uint32_t gold[NADDR];                 // golden memory
    std::deque<Exp> pend[NTYPES];         // expected responses, one FIFO per channel

    int       errors = 0;
    int       lat_cnt[NTYPES] = {0, 0, 0};
    int       lat_min[NTYPES] = {1000000, 1000000, 1000000};
    int       lat_max[NTYPES] = {0, 0, 0};
    long      lat_sum[NTYPES] = {0, 0, 0};

    SC_CTOR(memctrl_tb) {
        dut.clk(clk);
        dut.rst_n(rst_n);
        dut.req_valid(req_valid);
        dut.req_type(req_type);
        dut.req_addr(req_addr);
        dut.req_wdata(req_wdata);
        dut.rd_valid(rd_valid);
        dut.rd_data(rd_data);
        dut.wr_valid(wr_valid);
        dut.wr_addr(wr_addr);
        dut.rmw_valid(rmw_valid);
        dut.rmw_old(rmw_old);

        SC_THREAD(run);
    }

    template <typename... Args>
    void fail(const char* fmt, Args... args) {
        errors++;
        std::printf("ERROR: ");
        std::printf(fmt, args...);
        std::printf("\n");
    }

    void build_schedule() {
        for (int c = 0; c < NCYC; c++)
            s_valid[c] = false;
        auto set = [&](int c, int ty, int a, uint32_t d) {
            s_valid[c] = true;
            s_type[c]  = ty;
            s_addr[c]  = a;
            s_wdata[c] = d;
        };

        // Scenario 1: isolated transactions on one address
        set(10, T_WR,  5, 0x0000CAFE);
        set(20, T_RD,  5, 0);
        set(30, T_RMW, 5, 0x00000010);
        set(40, T_RD,  5, 0);

        // Scenario 2: read-after-write while the write ack is still pending
        set(60, T_WR, 7, 0x00001111);
        set(61, T_RD, 7, 0);
        set(62, T_WR, 7, 0x00002222);
        set(63, T_RD, 7, 0);

        // Scenario 3: mixed transactions on consecutive cycles -> out-of-order responses
        set(80, T_RMW, 9,  5);
        set(81, T_RD,  9,  0);
        set(82, T_WR,  10, 0x0000ABCD);

        // Scenario 4: back-to-back writes, then back-to-back reads
        for (int i = 0; i < 8; i++)
            set(100 + i, T_WR, i, 0x100u + i);
        for (int i = 0; i < 8; i++)
            set(110 + i, T_RD, i, 0);

        // Scenario 5: random mix over 16 addresses, ~60% of cycles carry a request
        //   READ 40%, WRITE 35%, RMW 25%
        std::mt19937 rng(2024);
        for (int c = 200; c < 700; c++) {
            if (rng() % 100 < 60) {
                unsigned pick = rng() % 100;
                int ty = (pick < 40) ? T_RD : (pick < 75) ? T_WR : T_RMW;
                set(c, ty, static_cast<int>(rng() % 16), rng());
            }
        }
    }

    // Issue a request: update the golden model and queue the expected response.
    void issue(int ty, int a, uint32_t d, int now) {
        if (ty == T_RD) {
            pend[T_RD].push_back({now, gold[a]});
        } else if (ty == T_WR) {
            gold[a] = d;
            pend[T_WR].push_back({now, static_cast<uint32_t>(a)});
        } else {
            pend[T_RMW].push_back({now, gold[a]});   // expected: old value
            gold[a] = gold[a] + d;
        }
    }

    void observe(int tt, uint32_t got, int now) {
        if (pend[tt].empty()) {
            fail("spurious response on %s at cycle %d", NAME[tt], now);
            return;
        }
        Exp e = pend[tt].front();
        pend[tt].pop_front();
        int lat = now - e.issue_cyc;

        if (got != e.value)
            fail("%s got 0x%08x, expected 0x%08x (issued cycle %d)", NAME[tt], got, e.value, e.issue_cyc);
        if (lat != LAT[tt])
            fail("%s latency %d cycles, expected %d", NAME[tt], lat, LAT[tt]);

        if (e.issue_cyc < 200)
            std::printf("  %s issued %d -> response %d  latency %d  value 0x%08x\n",
                        NAME[tt], e.issue_cyc, now, lat, got);

        lat_cnt[tt]++;
        lat_sum[tt] += lat;
        if (lat < lat_min[tt]) lat_min[tt] = lat;
        if (lat > lat_max[tt]) lat_max[tt] = lat;
    }

    void run() {
        build_schedule();
        for (int a = 0; a < NADDR; a++)
            gold[a] = 0;

        rst_n.write(false);
        req_valid.write(false);
        req_type.write(0);
        req_addr.write(0);
        req_wdata.write(0);
        for (int i = 0; i < 3; i++)
            wait(clk.negedge_event());
        rst_n.write(true);

        std::printf("Directed transactions (issue cycle < 200):\n");
        for (int cyc = 0; cyc < NCYC + LAT[T_RMW] + 2; cyc++) {
            wait(clk.negedge_event());

            // observe responses valid in this cycle
            if (rd_valid.read())  observe(T_RD,  rd_data.read(),  cyc);
            if (wr_valid.read())  observe(T_WR,  wr_addr.read(),  cyc);
            if (rmw_valid.read()) observe(T_RMW, rmw_old.read(),  cyc);

            // drive this cycle's request (sampled by the next rising edge)
            if (cyc < NCYC && s_valid[cyc]) {
                req_valid.write(true);
                req_type.write(static_cast<uint32_t>(s_type[cyc]));
                req_addr.write(static_cast<uint32_t>(s_addr[cyc]));
                req_wdata.write(s_wdata[cyc]);
                issue(s_type[cyc], s_addr[cyc], s_wdata[cyc], cyc);
            } else {
                req_valid.write(false);
            }
        }

        for (int t = 0; t < NTYPES; t++)
            if (!pend[t].empty())
                fail("%zu responses missing on %s", pend[t].size(), NAME[t]);

        std::printf("\nLatency summary (cycles): txn    count  min  avg  max  spec\n");
        for (int t = 0; t < NTYPES; t++)
            std::printf("  %s  %6d  %3d  %3ld  %3d  %3d\n", NAME[t], lat_cnt[t], lat_min[t],
                        lat_cnt[t] ? lat_sum[t] / lat_cnt[t] : 0L, lat_max[t], LAT[t]);

        sc_stop();
    }
};

int sc_main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);

    memctrl_tb tb("tb");
    sc_start();

    if (tb.errors == 0) {
        std::printf("PASS: all transactions correct and at the specified latency (SystemC model)\n");
        return 0;
    }
    std::printf("FAIL: %d errors\n", tb.errors);
    return 1;
}
