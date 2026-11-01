// SystemC testbench for the Verilator-generated spi_master model (Vspi_master).
//
// Verilator converts rtl/spi_master.v into a SystemC module. This testbench drives
// the clock, reset, start and tx_data inputs, and plays the SPI slave on
// SCLK/MOSI/MISO/CS_N. For every transfer it checks:
//   - the master received the byte the slave returned,
//   - the slave received the byte the master sent,
//   - exactly 8 SCLK rising edges occurred,
//   - SCLK rising edges are spaced 2*CLK_DIV system clocks apart,
//   - busy/cs_n/done behave as specified.

#include <systemc.h>

#include <cstdint>
#include <cstdio>
#include <random>

#include "Vspi_master.h"
#include "verilated.h"

static const int CLK_DIV = 4;  // must match the RTL parameter the model was converted with

SC_MODULE(spi_tb) {
    sc_clock clk{"clk", 10, SC_NS};

    sc_signal<bool>     rst_n{"rst_n"};
    sc_signal<bool>     start{"start"};
    sc_signal<uint32_t> tx_data{"tx_data"};
    sc_signal<uint32_t> rx_data{"rx_data"};
    sc_signal<bool>     busy{"busy"};
    sc_signal<bool>     done{"done"};
    sc_signal<bool>     sclk{"sclk"};
    sc_signal<bool>     mosi{"mosi"};
    sc_signal<bool>     miso{"miso"};
    sc_signal<bool>     cs_n{"cs_n"};

    Vspi_master dut{"dut"};

    int     errors     = 0;
    int     sclk_rises = 0;   // SCLK rising edges the slave saw in the current transfer
    uint8_t slave_tx   = 0;   // byte the slave returns to the master
    uint8_t slave_rx   = 0;   // byte the slave received from the master

    SC_CTOR(spi_tb) {
        dut.clk(clk);
        dut.rst_n(rst_n);
        dut.start(start);
        dut.tx_data(tx_data);
        dut.rx_data(rx_data);
        dut.busy(busy);
        dut.done(done);
        dut.sclk(sclk);
        dut.mosi(mosi);
        dut.miso(miso);
        dut.cs_n(cs_n);

        SC_THREAD(stimulus);
        SC_THREAD(slave);
    }

    template <typename... Args>
    void fail(const char* fmt, Args... args) {
        errors++;
        std::printf("ERROR @ %s: ", sc_time_stamp().to_string().c_str());
        std::printf(fmt, args...);
        std::printf("\n");
    }

    // One full transfer from the master's point of view.
    void xfer(uint8_t tx, uint8_t stx) {
        slave_tx = stx;

        wait(clk.negedge_event());
        tx_data.write(tx);
        start.write(true);
        wait(clk.negedge_event());
        start.write(false);

        if (!busy.read())
            fail("busy not asserted after start");

        int waited = 0;
        while (!done.read()) {
            wait(clk.negedge_event());
            if (++waited > 1000) {
                fail("timeout waiting for done");
                return;
            }
        }

        // done and rx_data are updated on the same rising edge; sampled here at a falling edge.
        if (rx_data.read() != stx)
            fail("master rx 0x%02x, expected 0x%02x", (unsigned)rx_data.read(), (unsigned)stx);
        if (slave_rx != tx)
            fail("slave rx 0x%02x, expected 0x%02x", (unsigned)slave_rx, (unsigned)tx);
        if (sclk_rises != 8)
            fail("%d SCLK rising edges, expected 8", sclk_rises);
        if (cs_n.read() != true || busy.read() != false)
            fail("cs_n/busy not released after done");

        std::printf("%s xfer tx=0x%02x slave_tx=0x%02x -> master rx=0x%02x slave rx=0x%02x\n",
                    sc_time_stamp().to_string().c_str(), (unsigned)tx, (unsigned)stx,
                    (unsigned)rx_data.read(), (unsigned)slave_rx);
    }

    void stimulus() {
        rst_n.write(false);
        start.write(false);
        tx_data.write(0);
        for (int i = 0; i < 3; i++)
            wait(clk.negedge_event());
        rst_n.write(true);
        wait(clk.negedge_event());

        static const uint8_t directed[][2] = {
            {0xA5, 0x5A}, {0x3C, 0xC3}, {0xFF, 0x00}, {0x00, 0xFF}, {0x01, 0x80},
        };
        for (const auto& v : directed)
            xfer(v[0], v[1]);

        std::mt19937 rng(12345);
        for (int i = 0; i < 20; i++)
            xfer(static_cast<uint8_t>(rng()), static_cast<uint8_t>(rng()));

        for (int i = 0; i < 5; i++)
            wait(clk.negedge_event());

        sc_stop();
    }

    // Slave model, SPI mode 0: samples MOSI on SCLK rising edges, drives MISO on falling edges.
    void slave() {
        while (true) {
            wait(cs_n.negedge_event());  // transfer begins

            sclk_rises = 0;
            uint8_t tx = slave_tx;
            uint8_t rx = 0;
            sc_time last_rise;
            miso.write((tx >> 7) & 1);   // MSB must be stable before the first rising edge

            for (int bit = 0; bit < 8; bit++) {
                wait(sclk.posedge_event());
                sc_time now = sc_time_stamp();
                if (bit > 0 && (now - last_rise) != sc_time(2 * CLK_DIV * 10, SC_NS))
                    fail("SCLK period mismatch: %s between rising edges", (now - last_rise).to_string().c_str());
                last_rise = now;

                rx = static_cast<uint8_t>((rx << 1) | (mosi.read() ? 1 : 0));
                sclk_rises++;

                if (bit < 7) {
                    wait(sclk.negedge_event());
                    miso.write((tx >> (6 - bit)) & 1);
                }
            }
            slave_rx = rx;

            wait(cs_n.posedge_event());  // transfer ends
        }
    }

    void trace(sc_trace_file* tf) {
        sc_trace(tf, clk, "clk");
        sc_trace(tf, rst_n, "rst_n");
        sc_trace(tf, start, "start");
        sc_trace(tf, tx_data, "tx_data");
        sc_trace(tf, rx_data, "rx_data");
        sc_trace(tf, busy, "busy");
        sc_trace(tf, done, "done");
        sc_trace(tf, sclk, "sclk");
        sc_trace(tf, mosi, "mosi");
        sc_trace(tf, miso, "miso");
        sc_trace(tf, cs_n, "cs_n");
    }
};

int sc_main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);

    spi_tb tb("tb");
    sc_trace_file* tf = sc_create_vcd_trace_file("spi_sc");
    tb.trace(tf);

    sc_start();
    sc_close_vcd_trace_file(tf);

    if (tb.errors == 0) {
        std::printf("PASS: all SPI transfers correct (SystemC model)\n");
        return 0;
    }
    std::printf("FAIL: %d errors\n", tb.errors);
    return 1;
}
