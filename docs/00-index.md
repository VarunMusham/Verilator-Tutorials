# Verilator Tutorial: Index

Read the chapters in order. Each one builds on the previous.

| # | Chapter | What it covers |
|---|---------|----------------|
| 01 | [Verilator basics](01-verilator-basics.md) | What Verilator does, the build flow, output modes, key terms |
| 02 | [Environment setup](02-environment-setup.md) | MSYS2, Verilator, SystemC; running the scripts |
| 03 | [Example: counter](03-example-counter.md) | `--binary` flow, SystemVerilog testbench, timing, the first build |
| 04 | [Example: SPI master](04-spi-systemc.md) | RTL self-test, conversion to a SystemC model with `--sc`, `--exe`, `--build` |
| 05 | [Example: latency pipeline](05-latency-pipeline.md) | `generate` pipelines, per-type latency, scoreboard checking |
| 06 | [Example: memory controller](06-memctrl.md) | Golden-model checking, read-after-write, out-of-order response channels |
| 07 | [Testbench patterns](07-testbench-patterns.md) | Reusable techniques across all four examples |
| 08 | [Flags cheat sheet](08-flags-cheatsheet.md) | Every Verilator flag used in the repo, in one table |
| 09 | [Troubleshooting and next steps](09-troubleshooting-and-next-steps.md) | Known build problems, open decisions, topics not yet covered |

The per-unit READMEs (`spi/README.md`, `latency/README.md`, `memctrl/README.md`) are the detailed
reference for each design. These chapters explain the concepts and link to them rather than
repeating them.

## Conventions used in these chapters

- Shell commands run from an **MSYS2 UCRT64 login shell**. Paths such as `/d/verilator` mean
  `D:\verilator` on Windows.
- `obj_dir/` is Verilator's default output folder. The examples use `-Mdir` to choose another one.
- `.exe` is appended on Windows. Commands are written without it (`./obj_dir/sim` is `sim.exe`).
- Expected output is quoted from real runs in this repo.
