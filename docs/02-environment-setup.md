# 02. Environment setup

This chapter covers the Windows setup the repo was built with. The scripts also run on Linux
with small changes, noted below.

## What you need

| Tool | Version used here | Needed for |
|------|-------------------|------------|
| MSYS2 (UCRT64 environment) | current | the shell, `make`, and the compiler toolchain |
| Verilator | 5.048 | every example |
| g++ (GCC) | 16.1.0 | compiling the generated C++ |
| `make` | MSYS2 package | Verilator's `--build` step |
| SystemC | 2.3.3 | only the SystemC parts (`spi`, `latency`, `memctrl`) |
| GTKWave or another VCD viewer | any | viewing `spi/spi_sc.vcd` (optional) |

The versions above are what the repo was last built with. Newer versions may work, but the
`-O2` workaround in [04](04-spi-systemc.md) was needed for this GCC.

## 1. Install MSYS2

Install MSYS2 to the default location `C:\msys64`. Then open the **MSYS2 UCRT64** shell and run:

```sh
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-verilator mingw-w64-ucrt-x86_64-toolchain make
```

- `mingw-w64-ucrt-x86_64-verilator` is the Verilator package named in
  [`spi/README.md`](../spi/README.md).
- `mingw-w64-ucrt-x86_64-toolchain` provides g++.
- `make` is needed by Verilator's `--build` step.

## 2. Check the tools

From a login shell, with the MSYS2 paths first on `PATH` (the scripts do this themselves):

```sh
export PATH=/c/msys64/ucrt64/bin:/c/msys64/usr/bin:$PATH
verilator --version
g++ --version
```

`verilator --version` prints `Verilator 5.048 ...`. The `g++` line should print GCC 16.x for the
version used here.

## 3. Install SystemC 2.3.3

Only needed for the SystemC parts. The scripts expect this layout:

| Path | Contains |
|------|----------|
| `C:\systemc\systemc-2.3.3\src` | the SystemC headers, including `systemc.h` |
| `C:\systemc\systemc-2.3.3\build\src\.libs` | the built SystemC library |

The repo's SystemC was built as C++20. The scripts therefore compile the testbenches with
`-std=gnu++20`. If you build SystemC with a different standard, change the `-CFLAGS` in each
`run_all.sh` to match.

The scripts read these two paths from the top of each `run_all.sh`:

```sh
export SYSTEMC_INCLUDE=/c/systemc/systemc-2.3.3/src
export SYSTEMC_LIBDIR=/c/systemc/systemc-2.3.3/build/src/.libs
```

Change them there if your SystemC is elsewhere. The `/c/...` paths are MSYS2 paths, which map to
`C:\...`.

## 4. Run the examples

Run each example from the MSYS2 login shell. From a Windows terminal, this runs the SPI example:

```bat
C:\msys64\usr\bin\bash.exe -lc "cd /d/verilator/spi && ./run_all.sh"
```

The `cd` must use the MSYS2 form `/d/verilator/...`. In testing, builds run through this login
shell worked. Builds started from a non-login shell failed with a temporary-directory error. See
[09](09-troubleshooting-and-next-steps.md).

The `example/` folder has no script. Build it by hand, as shown in [03](03-example-counter.md).

## 5. View the waveform (optional)

Running the SystemC SPI testbench writes `spi/spi_sc.vcd` into the `spi/` folder, because the
binary runs with that folder as its working directory. Open it with GTKWave:

```sh
gtkwave /d/verilator/spi/spi_sc.vcd
```

Only the SPI SystemC run writes a waveform. The latency and memctrl SystemC testbenches do not
trace.

## Linux

The scripts were written for MSYS2. The `PATH`, `SYSTEMC_INCLUDE`, and `SYSTEMC_LIBDIR` lines at
the top of each `run_all.sh` point to MSYS2 and SystemC locations. On Linux you would edit those
lines for your install. This has not been tested.

## Next

- [03 Example: counter](03-example-counter.md): build and run the first example.
