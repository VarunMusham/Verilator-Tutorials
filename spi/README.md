# SPI master: Verilog RTL -> Verilator SystemC model

A simple SPI master written in Verilog, converted to a SystemC model with Verilator
and exercised by a SystemC testbench.

```
spi/
├── rtl/spi_master.v        RTL: SPI master, mode 0 (CPOL=0, CPHA=0), MSB first
├── tb/tb_spi_master.v      Verilog self-test with a behavioural slave (checks the RTL first)
├── sc/spi_sc_tb.cpp        SystemC testbench for the converted model (acts as the SPI slave)
├── run_all.sh              Runs everything below
└── README.md
```

## Design

| Port       | Dir | Description                                            |
|------------|-----|--------------------------------------------------------|
| `clk`      | in  | system clock                                           |
| `rst_n`    | in  | active-low asynchronous reset                          |
| `start`    | in  | one-cycle pulse to begin a transfer (ignored while busy) |
| `tx_data`  | in  | byte to send, latched on `start`                       |
| `rx_data`  | out | byte received, valid when `done` is high               |
| `busy`     | out | high from `start` until the transfer completes         |
| `done`     | out | one-cycle pulse at the end of a transfer               |
| `sclk`     | out | SPI clock, toggles every `CLK_DIV` system clocks       |
| `mosi`     | out | master out, slave in                                   |
| `miso`     | in  | master in, slave out                                   |
| `cs_n`     | out | active-low chip select                                 |

Parameter `CLK_DIV` (default 4) sets the SCLK half-period in system clocks, so one SPI bit
takes `2*CLK_DIV` clocks. A transfer is: `cs_n` low, 8 SCLK cycles, `cs_n` high, `done` pulse.

## Running

From an MSYS2 UCRT64 shell (or `C:\msys64\msys2_shell.cmd -ucrt64`):

```sh
cd /d/verilator/spi
./run_all.sh
```

This runs the Verilog self-test, converts the RTL to SystemC, builds it with the SystemC
testbench, and runs the SystemC simulation. The SystemC run writes a waveform to `spi_sc.vcd`.

Requirements: Verilator (`mingw-w64-ucrt-x86_64-verilator`) and SystemC 2.3.3 built at
`C:\systemc\systemc-2.3.3` (paths are set at the top of `run_all.sh`).

## What the conversion looks like

Verilator generates a SystemC module `Vspi_master` (in `obj_sc/`). It is a `sc_module` whose
ports are reference members, so the testbench binds them with `dut.port(signal)`.

- 8-bit buses are `sc_in<uint32_t>` / `sc_out<uint32_t>` in the generated SystemC model.
  The testbench uses `sc_signal<uint32_t>` to match.
- `CLK_DIV` is baked in at conversion time. To change it, edit the default in the RTL and
  rerun `run_all.sh`; `CLK_DIV` in `sc/spi_sc_tb.cpp` must match.

## What is checked

- Verilog self-test (`tb/`): 25 transfers (5 directed, 20 random). Master RX equals the slave's
  byte, slave RX equals the master's byte, exactly 8 SCLK rising edges per transfer, `busy`
  and `cs_n` released after `done`.
- SystemC testbench (`sc/`): the same data checks, plus the SCLK period is `2*CLK_DIV`
  system clocks between rising edges. The testbench exits non-zero on any error.

As a sanity check that the testbench can fail, a copy of the RTL that ends the transfer after
7 bits (`edge_cnt == 7`) produces data and edge-count errors and a non-zero exit.

## Toolchain note

Verilator's runtime (`verilated.cpp`) fails to link under the MSYS2 GCC 16 when compiled
with `-Os` (undefined reference to `basic_string(basic_string&&)`). `run_all.sh` passes
`-CFLAGS "-std=gnu++20 -O2"` to override the default, which links and runs correctly.
The SystemC library itself is built as C++20, so the SystemC build uses C++20 throughout.
