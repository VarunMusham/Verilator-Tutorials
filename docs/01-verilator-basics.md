# 01. Verilator basics

## What Verilator is

Verilator is an open-source compiler that turns hardware description code (Verilog and
SystemVerilog) into C++ or SystemC. The generated code is a model of the hardware: you
drive its inputs, ask it to advance, and read its outputs. You then run the model as a normal
program.

Three properties matter for everything in this repo:

- **Cycle-oriented.** You call `eval()` to settle the logic. Clock edges, combinational logic,
  and register updates happen inside that call. The model is fast because it does not keep an
  event queue for every signal change the way a commercial event simulator does.
- **Two-state.** Signals are 0 or 1. Verilator does not model `X` and `Z` the way a 4-state
  simulator does. A design that relies on `X` propagation to find bugs will behave differently
  here.
- **Timing support is optional.** Verilator 5 added a scheduler that handles delays (`#5`),
  event controls (`@(posedge clk)`), and `wait`. These are needed in testbenches, not in
  synthesizable RTL. Enable them with `--timing`. The repo's testbenches need it.

## The build flow

```
 RTL (.v / .sv)                     Verilator                       C++ compiler
 counter.sv, spi_master.v  ──►  generates C++ or SystemC  ──►  make + g++  ──►  executable
                                  into a -Mdir folder
                                  (e.g. obj_dir/, obj_sc/)
```

Verilator writes its output into a directory (`-Mdir`, default `obj_dir`). That directory holds
the generated C++ sources, a generated makefile, and, after a build, the executable. The
repo's `obj_*` folders are exactly this output.

## Three ways to use the output

The same RTL can be used in three ways. The repo uses the first two.

| Mode | Command shape | Who writes `main()` | Where it appears |
|------|---------------|---------------------|------------------|
| Verilog-level testbench | `--binary --timing` | Verilator generates it | [example](03-example-counter.md), the RTL self-test in each unit |
| SystemC model | `--sc --exe file.cpp --build` | You write `sc_main()` | the SystemC tests in [spi](04-spi-systemc.md), [latency](05-latency-pipeline.md), [memctrl](06-memctrl.md) |
| Plain C++ harness | `--cc --exe main.cpp` | You write `main()` and call `eval()` | not used in this repo; see [09](09-troubleshooting-and-next-steps.md) |

With `--binary`, the testbench is written in SystemVerilog and runs as-is. The module with no
ports (`tb`, `tb_spi_master`, ...) is the top, and Verilator builds it into a program.

With `--sc`, the top is the design (`spi_master`, `latency_unit`, `mem_ctrl`), and Verilator
produces a SystemC module for it. You then write a C++ testbench that instantiates the generated
class, binds its ports to SystemC signals, and drives the clock.

## Key terms

- **Top module.** The root of the design hierarchy. Choose it with `--top-module`. Without
  it, Verilator guesses and may pick the wrong one when the sources contain several modules.
- **Model class `V<top>`.** The generated C++ class. For a top module `spi_master` it is
  `Vspi_master`, and its header is `Vspi_master.h`. The testbench includes this header.
- **`-Mdir`.** The output directory for the generated files.
- **`-o`.** The name of the final executable.
- **`eval()`.** The call that makes the model advance. In a plain C++ harness you call it
  yourself. In the SystemC mode the SystemC kernel calls it through the sc_module processes.
- **Warnings are fatal by default.** Verilator stops when it finds a warning. `-Wall` turns on
  all warnings. The repo suppresses specific ones in the source with pragmas such as
  `/* verilator lint_off BLKSEQ */`. See [07](07-testbench-patterns.md).
- **Timescale.** `` `timescale 1ns/1ps `` sets the time unit and precision for delays in a file.
  The `.v` files in this repo have it. The `example` files do not. Verilator then uses its own
  default, and the example reports `$finish` at `216ps`. Delays still work because they are
  relative, but the numbers in the output are in picoseconds, not nanoseconds.

## Verilog or SystemVerilog?

The file extension is not a language rule here. The `.v` testbenches use SystemVerilog
constructs such as the size cast `8'($urandom)` in
[`spi/tb/tb_spi_master.v`](../spi/tb/tb_spi_master.v). The `example` uses `.sv` and `always_ff`,
`logic`, and `int` parameters.

Verilator reads both. The language you write is whatever the code uses. Do not rely on the
extension to tell you which features are available.

## What to read next

- [02 Environment setup](02-environment-setup.md): install the tools and run the first build.
- [03 Example: counter](03-example-counter.md): your first Verilator run.
