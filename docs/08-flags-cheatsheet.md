# 08. Flags cheat sheet

Every Verilator flag used in this repo, what it does, and where it appears. Flags are shown the way
the scripts pass them.

## Flags used

| Flag | What it does | Used in |
|------|--------------|---------|
| `--binary` | Generate a `main()` for the top module (a testbench with no ports) and build it into an executable. No C++ is written by hand. | example; RTL stage of spi, latency, memctrl |
| `--timing` | Enable delays (`#5`), event controls (`@(posedge clk)`), and `wait`. Needed for any testbench with timing. | example; RTL stage of spi, latency, memctrl |
| `--sc` | Generate a SystemC model (`sc_module`) instead of a plain C++ class. | SystemC stage of spi, latency, memctrl |
| `--exe <file.cpp>` | Add your own C++ file to the build. With `--sc`, this is the SystemC testbench with `sc_main`. | SystemC stage of spi, latency, memctrl |
| `--build` | After generating code, run the generated makefile. Produces the executable. | SystemC stage of spi, latency, memctrl |
| `-Wall` | Enable all lint warnings. Warnings stop the build unless fixed or suppressed. | every build |
| `--top-module <name>` | Choose the root module. The name must match a module in the sources. | every build |
| `-Mdir <dir>` | Output directory for the generated code. Default is `obj_dir`. | RTL and SystemC stages of spi, latency, memctrl (not example, which uses the default) |
| `-o <name>` | Name of the executable, placed in the `-Mdir` folder. | every build |
| `-CFLAGS "<flags>"` | Pass flags to the C++ compiler that builds the model. | every build (see below) |

## The `-CFLAGS` values

| Where | Value | Why |
|-------|-------|-----|
| example | `-std=gnu++17` | The model is built with C++17. |
| RTL stage of spi, latency, memctrl | `-std=gnu++17` | Same, for the `--binary` builds. |
| SystemC stage of spi, latency, memctrl | `-std=gnu++20 -O2` | SystemC 2.3.3 was built as C++20, so the model must match. `-O2` overrides Verilator's default `-Os`, which fails to link with this GCC. See [04](04-spi-systemc.md#why--o2). |

## Shell parts of the scripts (not Verilator flags)

| Syntax | Meaning |
|--------|---------|
| `> file.log 2>&1` | Send stdout and stderr to a log. Used so the log can be printed only on failure. |
| `|| { cat obj_rtl.log; exit 1; }` | If the command fails, print its log and stop. |
| `set -e` | Stop the script on the first non-zero exit code. |
| `export PATH=/c/msys64/ucrt64/bin:/c/msys64/usr/bin:$PATH` | Put the MSYS2 tools first. Needed so `verilator`, `g++`, and `make` are found. |

## Source-level pragmas

These are comments that Verilator reads. They are not command-line flags.

| Pragma | Effect |
|--------|--------|
| `/* verilator lint_off <CODE> */` ... `/* verilator lint_on <CODE> */` | Suppress one warning code in the enclosed region. |

Codes used in this repo: `BLKSEQ` (spi testbench), `UNUSEDSIGNAL` (latency and memctrl testbenches).

## Not used in this repo

These flags are common, but no example here needs them. They are listed for reference. Chapter
[09](09-troubleshooting-and-next-steps.md#next-topics) explains when you would use each.

| Flag | Purpose |
|------|---------|
| `--cc` | Generate a plain C++ model. You write `main()` and call `eval()`. |
| `--trace`, `--trace-fst` | Emit an internal waveform from Verilator-generated code. |
| `--coverage` | Instrument the model for coverage. |
| `--assert` | Enable SystemVerilog assertions. |
| `--lint-only` | Run only the lint checks, do not build. |
| `--threads <n>` | Multithreaded evaluation. |
| `--public-flat-rw` | Give the C++ side access to internal signals. |
| `-O3` | Compile with a higher optimisation level. |
| `-Wno-fatal` | Do not treat warnings as errors. |

## Commands from the examples, collected

Example (`example/`):

```sh
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb counter.sv tb.sv -o sim
./obj_dir/sim
```

SystemC stage (`spi/`):

```sh
verilator --sc -Wall --top-module spi_master rtl/spi_master.v \
  --exe sc/spi_sc_tb.cpp -Mdir obj_sc -o spi_sc \
  -CFLAGS "-std=gnu++20 -O2" --build
./obj_sc/spi_sc
```
