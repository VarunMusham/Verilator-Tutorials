# 07. Testbench patterns

The four examples share a set of techniques. This chapter names them and points to where each one
appears, so you can reuse them. None of these is specific to Verilator, but each one is shown in
working code here.

## 1. Drive on one edge, sample on the other

Every testbench here drives its inputs on the **negedge** of the clock, and reads outputs on the
negedge too. The DUT samples its inputs on the **posedge**.

```verilog
@(negedge clk);
in_valid = 1'b1;          // driven in the middle of the cycle...
...                       // ...so it is stable at the next posedge
```

This keeps stimulus and sampling away from the rising edge, so there are no races between the
testbench and the design. The SystemC testbenches do the same with `wait(clk.negedge_event())`.

Seen in:
[`spi/tb/tb_spi_master.v`](../spi/tb/tb_spi_master.v),
[`latency/tb/tb_latency_unit.v`](../latency/tb/tb_latency_unit.v),
[`memctrl/tb/tb_mem_ctrl.v`](../memctrl/tb/tb_mem_ctrl.v).

## 2. Active-low asynchronous reset

Every sequential design in the repo uses:

```verilog
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) ... // reset values
```

The reset takes effect immediately when `rst_n` falls, and the testbench releases it at a negedge.
The examples start with `rst_n` low for a few cycles, then release it. The exception is the latency
data path, which has no reset (see [05](05-latency-pipeline.md#the-lane-lat_lanev)).

## 3. Self-checking testbenches

A testbench that only prints values needs a person to read them. Each testbench here decides on its
own:

- It counts `errors` as it goes.
- At the end it prints `PASS` or `FAIL`.
- The Verilog testbenches call `$fatal(1, ...)` on failure, which ends the run with a non-zero exit
  code. The SystemC testbenches return 1 from `sc_main`.

The scripts use `set -e`, so a failing testbench stops `run_all.sh` at that step. The final PASS line
therefore means every stage passed.

## 4. Scoreboards and golden models

Checking a response needs an expectation. The repo uses two forms:

- **Scoreboard (latency).** Record each request as it is issued, and check each response against the
  oldest outstanding request of its type. Used in [05](05-latency-pipeline.md). It checks *timing*
  and *data*.
- **Golden model (memctrl).** Keep a software copy of the state, update it in issue order, and check
  each read against it. Used in [06](06-memctrl.md). It checks *state*.

Both record the expected response at issue time, not at response time. This keeps the expectation
independent of the DUT.

Per-channel FIFOs (one per response type) are enough, because requests of the same type cannot
overtake each other in these designs. See [05](05-latency-pipeline.md#the-schedule-and-the-scoreboard).

## 5. Directed tests, then random tests

Each testbench runs in two parts:

- **Directed.** Scenarios written by hand, each targeting one behaviour: an isolated request, a
  back-to-back burst, a mixed-type sequence, a read-after-write. These are easy to read when they
  fail.
- **Random.** Hundreds of cycles of random requests, to catch combinations the directed tests miss.

The random sources differ by language:

| Testbench | Random source | Seed |
|-----------|---------------|------|
| Verilog (all three) | `$urandom` | none set in the testbench |
| SystemC (spi) | `std::mt19937` | 12345 |
| SystemC (latency, memctrl) | `std::mt19937` | 2024 |

Because the Verilog and SystemC random streams differ, the random counts in the summaries differ too.
Both runs still check their own stream against their own expectations. See the note in
[05](05-latency-pipeline.md#stage-2-the-systemc-model).

## 6. Mirrored testbenches: test the RTL, then the converted model

Each unit has two testbenches with the same scenarios and checks:

- a **Verilog** testbench on the RTL (`tb/`), and
- a **SystemC** testbench on the model Verilator generates from the same RTL (`sc/`).

If the Verilog test passes and the SystemC test fails, the RTL is correct and the conversion or the
C++ testbench is wrong. If both fail, the RTL is wrong. Running both is the way this repo checks
that the conversion preserves behaviour.

## 7. Parameters live in more than one place

The latency values and the SPI `CLK_DIV` are written in three or more places:

- the RTL default (`parameter ... = 4`),
- the Verilog testbench's explicit override or local constant (`localparam LAT16 = 5`),
- the SystemC testbench's constant (`static const int LAT[] = {2, 5, 9}`).

The Verilog testbench overrides the RTL default. The SystemC model does not, so it uses the RTL
default. This means:

- changing the RTL default makes the **SystemC** stage fail and the **Verilog** stage pass, and
- the SystemC testbench's constant must match the RTL default, while the Verilog testbench's
  constant must match its own override.

Expect to change the numbers in several files when you change a latency. See the "Things to try"
sections in [04](04-spi-systemc.md#things-to-try) and [05](05-latency-pipeline.md#things-to-try).

## 8. Silencing warnings in the right place

`-Wall` turns on every lint warning, and Verilator stops on warnings. The repo keeps `-Wall` on and
suppresses specific warnings only where the code is intentional, with a pragma:

| Pragma | Where | Why |
|--------|-------|-----|
| `/* verilator lint_off BLKSEQ */` ... `lint_on` | [`spi/tb/tb_spi_master.v`](../spi/tb/tb_spi_master.v) | The SPI slave model uses blocking assignments on purpose. |
| `/* verilator lint_off UNUSEDSIGNAL */` | [`latency/tb/tb_latency_unit.v`](../latency/tb/tb_latency_unit.v), [`memctrl/tb/tb_mem_ctrl.v`](../memctrl/tb/tb_mem_ctrl.v) | Integer task arguments are wider than the values passed, so some bits are unused. |

Prefer a narrow pragma with a comment over a global `-Wno-` flag. The comment records why the
warning is safe to ignore.

## 9. Timeouts

The SPI testbench waits for `done` with a counter. If `done` never comes, it reports
`timeout waiting for done` and stops. Without this, a broken design would make the testbench wait
forever. The SystemC testbench has the same check in `xfer()`.

## 10. Timescales

Every `.v` file in the repo starts with `` `timescale 1ns/1ps ``. The `example` files do not, and
the `example` output reports time in picoseconds (see [03](03-example-counter.md#expected-output)).
A `timescale` is needed only when the delays in a file must mean a specific time. Set it in every
file, so the units are consistent across the design.

## Mutation checks

The unit READMEs describe a mutation check for each design: change one behaviour in the RTL, and
confirm the testbench fails with a specific message. This is the best way to convince yourself that
a testbench really checks what it claims. The mutations are described in
[`spi/README.md`](../spi/README.md#what-is-checked),
[`latency/README.md`](../latency/README.md#mutation-check), and
[`memctrl/README.md`](../memctrl/README.md#mutation-check). None of them is scripted.
