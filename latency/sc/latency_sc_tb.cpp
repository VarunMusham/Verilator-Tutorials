// SystemC latency test for the Verilator-generated latency_unit model (Vlatency_unit).
//
// Same checks as the Verilog testbench (tb/tb_latency_unit.v):
//   - each response matches the oldest outstanding request of its datatype (in order per type),
//   - the data is in+1, truncated to the datatype width,
//   - the response arrives exactly LAT[datatype] clock cycles after the request.
// Latency is counted in clock cycles: a request driven at negedge c must be observed
// at negedge c+LAT.

#include <systemc.h>

#include <cstdint>
#include <cstdio>
#include <deque>
#include <random>

#include "Vlatency_unit.h"
#include "verilated.h"

static const int NTYPES = 3;
static const int NCYC   = 800;
static const int LAT[NTYPES]       = {2, 5, 9};          // must match the DUT parameters
static const uint32_t MASK[NTYPES] = {0xFFu, 0xFFFFu, 0xFFFFFFFFu};
static const char* NAME[NTYPES]    = {"INT8 ", "INT16", "INT32"};

struct Req {
    int      issue_cyc;
    uint32_t expect;
};

SC_MODULE(latency_tb) {
    sc_clock clk{"clk", 10, SC_NS};

    sc_signal<bool>     rst_n{"rst_n"};
    sc_signal<bool>     in_valid{"in_valid"};
    sc_signal<uint32_t> in_dtype{"in_dtype"};
    sc_signal<uint32_t> in_data{"in_data"};
    sc_signal<bool>     ov[NTYPES];
    sc_signal<uint32_t> od[NTYPES];

    Vlatency_unit dut{"dut"};

    // request schedule
    bool     s_valid[NCYC];
    int      s_dtype[NCYC];
    uint32_t s_data[NCYC];

    // scoreboard: one FIFO of outstanding requests per datatype
    std::deque<Req> pend[NTYPES];

    int errors = 0;
    int lat_cnt[NTYPES] = {0, 0, 0};
    int lat_min[NTYPES] = {1000000, 1000000, 1000000};
    int lat_max[NTYPES] = {0, 0, 0};
    long lat_sum[NTYPES] = {0, 0, 0};

    SC_CTOR(latency_tb) {
        dut.clk(clk);
        dut.rst_n(rst_n);
        dut.in_valid(in_valid);
        dut.in_dtype(in_dtype);
        dut.in_data(in_data);
        dut.out8_valid(ov[0]);
        dut.out16_valid(ov[1]);
        dut.out32_valid(ov[2]);
        dut.out8_data(od[0]);
        dut.out16_data(od[1]);
        dut.out32_data(od[2]);

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
        auto set = [&](int c, int dt, uint32_t d) {
            s_valid[c] = true;
            s_dtype[c] = dt;
            s_data[c]  = d;
        };

        // Scenario 1: one request per datatype, no contention
        set(10, 0, 0x0000007F);
        set(30, 1, 0x00001234);
        set(50, 2, 0xDEADBEEF);

        // Scenario 2: back-to-back INT32 requests (pipelined, one per cycle)
        for (int i = 0; i < 8; i++)
            set(70 + i, 2, 0x00000100u + i);

        // Scenario 3: mixed datatypes on consecutive cycles
        //   INT8 (101) completes at 103, INT16 (102) at 107, INT32 (100) at 109
        set(100, 2, 0x000000A0);
        set(101, 0, 0x0000007F);
        set(102, 1, 0x0000FFFE);

        // Scenario 4: random mix, ~60% of cycles carry a request
        std::mt19937 rng(2024);
        for (int c = 200; c < 700; c++)
            if (rng() % 100 < 60)
                set(c, static_cast<int>(rng() % 3), rng());
    }

    uint32_t expected(int t, uint32_t d) const {
        return (d + 1) & MASK[t];
    }

    void observe(int t, uint32_t got, int now) {
        if (pend[t].empty()) {
            fail("spurious %s response at cycle %d", NAME[t], now);
            return;
        }
        Req r = pend[t].front();
        pend[t].pop_front();
        int lat = now - r.issue_cyc;

        if (got != r.expect)
            fail("%s data 0x%08x, expected 0x%08x (issued cycle %d)", NAME[t], got, r.expect, r.issue_cyc);
        if (lat != LAT[t])
            fail("%s latency %d cycles, expected %d", NAME[t], lat, LAT[t]);

        if (r.issue_cyc < 200)
            std::printf("  %s issued cycle %d -> response cycle %d  latency %d  data 0x%08x\n",
                        NAME[t], r.issue_cyc, now, lat, got);

        lat_cnt[t]++;
        lat_sum[t] += lat;
        if (lat < lat_min[t]) lat_min[t] = lat;
        if (lat > lat_max[t]) lat_max[t] = lat;
    }

    void run() {
        build_schedule();

        rst_n.write(false);
        in_valid.write(false);
        in_dtype.write(0);
        in_data.write(0);
        for (int i = 0; i < 3; i++)
            wait(clk.negedge_event());
        rst_n.write(true);

        for (int cyc = 0; cyc < NCYC + LAT[NTYPES - 1] + 2; cyc++) {
            wait(clk.negedge_event());

            // observe responses valid in this cycle
            for (int t = 0; t < NTYPES; t++)
                if (ov[t].read())
                    observe(t, od[t].read(), cyc);

            // drive this cycle's request (sampled by the next rising edge)
            if (cyc < NCYC && s_valid[cyc]) {
                in_valid.write(true);
                in_dtype.write(static_cast<uint32_t>(s_dtype[cyc]));
                in_data.write(s_data[cyc]);
                pend[s_dtype[cyc]].push_back({cyc, expected(s_dtype[cyc], s_data[cyc])});
            } else {
                in_valid.write(false);
            }
        }

        for (int t = 0; t < NTYPES; t++)
            if (!pend[t].empty())
                fail("%zu responses missing on %s", pend[t].size(), NAME[t]);

        std::printf("\nLatency summary (cycles): type   count  min  avg  max  spec\n");
        for (int t = 0; t < NTYPES; t++)
            std::printf("  %s  %6d  %3d  %3ld  %3d  %3d\n", NAME[t], lat_cnt[t], lat_min[t],
                        lat_cnt[t] ? lat_sum[t] / lat_cnt[t] : 0L, lat_max[t], LAT[t]);

        sc_stop();
    }
};

int sc_main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);

    latency_tb tb("tb");
    sc_start();

    if (tb.errors == 0) {
        std::printf("PASS: all responses correct and at the specified latency (SystemC model)\n");
        return 0;
    }
    std::printf("FAIL: %d errors\n", tb.errors);
    return 1;
}
