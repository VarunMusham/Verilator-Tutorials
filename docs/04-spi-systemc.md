# 04. Example: SPI master

This example adds two things to the counter: a design with real protocol timing, and a conversion
of that design to a **SystemC model** driven from C++. It runs in two stages:

1. **RTL self-test.** A Verilog testbench with a behavioural SPI slave checks the RTL directly.
2. **SystemC conversion.** Verilator turns the same RTL into a SystemC module. A SystemC testbench,
   which also acts as the SPI slave, runs the same checks on the converted model.

Folder: [`spi/`](../spi/). The detailed design notes are in [`spi/README.md`](../spi/README.md).
This chapter explains the concepts and the build steps.

## The protocol

SPI is a synchronous serial bus. The master generates a clock and chip-select. Data moves one bit
per clock in each direction at the same time.

This master uses **mode 0** (CPOL = 0, CPHA = 0) and sends **MSB first**. In mode 0:

- SCLK idles low.
- The master changes MOSI on the **falling** edge of SCLK.
- The slave samples MOSI on the **rising** edge, and drives MISO on the **falling** edge.
- The master samples MISO on the **rising** edge.

A transfer of one byte happens in this order:

1. `start` is pulsed. `cs_n` goes low, and the first bit (`tx_data[7]`) is placed on MOSI.
2. SCLK toggles 16 times, giving 8 rising edges. Each rising edge samples one MISO bit. Each
   falling edge (except the last) places the next MOSI bit.
3. After the eighth rising edge, the next falling edge ends the transfer. `cs_n` goes high, and
   `done` pulses for one cycle.

Each SCLK half-period lasts `CLK_DIV` system clocks (default 4), so one SPI bit lasts
`2*CLK_DIV` system clocks. The exact sequence is in the RTL comments in
[`spi/rtl/spi_master.v`](../spi/rtl/spi_master.v).

## The RTL

[`spi/rtl/spi_master.v`](../spi/rtl/spi_master.v) is one `always` block with a small state
machine. These are the parts worth reading first:

- **Parameter `CLK_DIV`** (default 4). It sets the SCLK half-period in system clocks. The counter
  width is computed from it with `$clog2`.
- **`start` is a one-cycle pulse.** It is ignored while `busy` is high. On `start` the master drops
  `cs_n`, puts the first bit (`tx_data[7]`) on MOSI, and latches the rest of the byte.
- **`half_tick`** marks the end of one SCLK half-period. On each `half_tick`, SCLK toggles.
  - On a **rising** edge (SCLK going 0→1), MISO is sampled into `rx_shift`, and `edge_cnt`
    counts the rising edges.
  - On a **falling** edge, the next MOSI bit is put on the line. After the eighth rising edge, the
    falling edge ends the transfer: `busy` clears, `done` pulses for one cycle, `cs_n` goes high,
    and `rx_data` is latched.
- **Asynchronous active-low reset** (`negedge rst_n`), the same style as the counter.

The module's ports are listed in the table in [`spi/README.md`](../spi/README.md#design).

## Stage 1: the Verilog self-test

[`spi/tb/tb_spi_master.v`](../spi/tb/tb_spi_master.v) runs the RTL with a behavioural slave.
Three things are new here:

- **The slave.** Three `always` blocks model an SPI slave: one captures MOSI on SCLK rising edges
  and shifts MISO on falling edges. They use **blocking** assignments, which is normally a warning
  in synthesizable code. The testbench wraps them in
  `/* verilator lint_off BLKSEQ */` ... `/* verilator lint_on BLKSEQ */`. The pragma is there
  because this is a model of a slave, not RTL. See [07](07-testbench-patterns.md).
- **The `xfer` task.** It runs one transfer. It sets the slave's reply byte, pulses `start`, waits
  for `done` with a timeout of 1000 cycles, then checks:
  - the master's `rx_data` equals the slave's reply,
  - the slave's `slave_rx` equals the master's `tx`,
  - exactly 8 SCLK rising edges occurred,
  - `cs_n` and `busy` are released after `done`.
- **25 transfers.** Five directed bytes (`A5/5A`, `3C/C3`, `FF/00`, `00/FF`, `01/80`) and 20 with
  `$urandom` data.

Verilator's `$urandom` is used with no explicit seed in this testbench. The SystemC testbench below
seeds its own generator.

Run it through the script described in [02](02-environment-setup.md). The first stage of
`run_all.sh` is:

```sh
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb_spi_master rtl/spi_master.v tb/tb_spi_master.v \
  -Mdir obj_rtl -o tb_rtl > obj_rtl.log 2>&1 || { cat obj_rtl.log; exit 1; }
./obj_rtl/tb_rtl
```

This is the same `--binary` flow as [03](03-example-counter.md). The one difference is that the
design is a separate file, so both sources are listed.

## Stage 2: convert the RTL to SystemC

The second stage is the one that introduces the SystemC flow. The command is:

```sh
verilator --sc -Wall --top-module spi_master rtl/spi_master.v \
  --exe sc/spi_sc_tb.cpp -Mdir obj_sc -o spi_sc \
  -CFLAGS "-std=gnu++20 -O2" --build
```

Each part does something different:

| Part | Meaning |
|------|---------|
| `--sc` | Generate a SystemC model. The output is an `sc_module` class rather than a plain C++ class. |
| `--top-module spi_master` | The design is the root. There is no SystemVerilog testbench in this stage. |
| `--exe sc/spi_sc_tb.cpp` | Add your own C++ file, the SystemC testbench, to the build. |
| `--build` | Run the generated makefile after generating the code. No separate `make` step. |
| `-CFLAGS "-std=gnu++20 -O2"` | Compile with C++20 and `-O2`. See the note below. |

The model class is `Vspi_master`, generated into `obj_sc/`. The testbench includes `Vspi_master.h`.

### What the conversion does

[`spi/sc/spi_sc_tb.cpp`](../spi/sc/spi_sc_tb.cpp) shows the main differences from the Verilog
testbench:

- **Ports become SystemC objects.** The testbench declares `sc_clock clk`, and an `sc_signal`
  for each port. It then binds them to the model:

  ```cpp
  Vspi_master dut{"dut"};
  ...
  dut.clk(clk);
  dut.rst_n(rst_n);
  dut.tx_data(tx_data);
  ```

- **Widths change.** An 8-bit bus becomes `uint32_t`. Verilator uses the smallest of
  `uint32_t`, `uint64_t`, or `sc_bv` that holds the signal. So the testbench uses
  `sc_signal<uint32_t>` for `tx_data` and `rx_data`, and `sc_signal<bool>` for one-bit ports.
- **Parameters are fixed at conversion time.** `CLK_DIV` is baked into the generated model. The
  testbench has its own `static const int CLK_DIV = 4;` for the SCLK period check. If you change
  the RTL default, you must change the testbench too. See [09](09-troubleshooting-and-next-steps.md).
- **Threads replace `always` blocks.** The testbench has two `SC_THREAD`s: `stimulus` drives the
  transfers, and `slave` acts as the SPI slave. Both wait on clock or signal events, the way
  `@(negedge clk)` works in Verilog.
- **Checks are the same.** The SystemC testbench runs the same five directed and 20 random
  transfers, and checks the same data, edge count, and `cs_n`/`busy` release. It also checks that
  SCLK rising edges are `2*CLK_DIV` system clocks apart, which the Verilog version does not.
- **Random data is seeded.** It uses `std::mt19937 rng(12345)`, so every run has the same data.
- **A waveform is written.** `sc_create_vcd_trace_file("spi_sc")` opens `spi_sc.vcd` in the working
  directory. The testbench traces its own top-level signals with `sc_trace`. These are the
  testbench's signals, not Verilator's internal signals.
- **The exit code reports the result.** `sc_main` returns 0 when `errors == 0` and 1 otherwise,
  and the script stops on a non-zero exit (`set -e`).

The SystemC testbench is one `SC_MODULE` (`spi_tb`) plus `sc_main`. `Verilated::commandArgs`
passes command-line arguments (such as `+verilator+seed`) to the model.

### Why `-O2`

`run_all.sh` passes `-O2` in `-CFLAGS`. Verilator's default optimisation for the runtime library
is `-Os`. With this MSYS2 GCC 16, the `-Os` build fails to link with
`undefined reference to basic_string(basic_string&&)`. Passing `-O2` overrides the default and the
link succeeds. The note is in [`spi/README.md`](../spi/README.md#toolchain-note), and the same
workaround is used in all three SystemC builds.

## Running and expected output

From the MSYS2 login shell:

```sh
cd /d/verilator/spi
./run_all.sh
```

The script runs both stages. Successful output ends with these two lines:

```
PASS: all SPI transfers correct
PASS: all SPI transfers correct (SystemC model)
```

The first line comes from the Verilog self-test and the second from the SystemC run. The SystemC
run also prints `Info: /OSCI/SystemC: Simulation stopped by user.` just before its PASS line. That
comes from `sc_stop()` in the testbench and is normal. Each stage writes its compiler output to a
log file (`obj_rtl.log`, `obj_sc.log`), which the script prints only on failure.

## Things to try

- Change the `CLK_DIV` default in the RTL (say, to 2) and rerun. The Verilog self-test is not
  affected, because `tb_spi_master.v` passes `.CLK_DIV(4)` explicitly. The SystemC model is built
  with the new value, but `spi_sc_tb.cpp` still expects 4, so the SCLK period check should fail.
  Change the testbench constant too, and both pass again. This is what the "must match" note in
  the SystemC testbench is about.
- Copy the RTL, change `edge_cnt == 4'd8` to `4'd7`, and run the self-test on the copy. This is
  the mutation check described in [`spi/README.md`](../spi/README.md#what-is-checked). It produces
  data and edge-count errors. The repo does not script this check.

## Next

- [05 Example: latency pipeline](05-latency-pipeline.md): the same two-stage pattern, with
  per-datatype latency and a scoreboard.
