# 09. Troubleshooting and next steps

This chapter has three parts: problems you may hit, decisions the repo still needs, and topics the
tutorial does not cover yet.

## Troubleshooting

| Symptom | Cause | Fix |
|---------|-------|-----|
| `Cannot create temporary file in C:\WINDOWS\: Permission denied`, then `make: *** ... Error 127` | The C++ compiler could not create its temporary files. This happened when building from a non-login shell (the bash used in our session), even with `TMP`, `TEMP`, and `TMPDIR` set. | Run the build through a login shell, as in [02](02-environment-setup.md#4-run-the-examples): `C:\msys64\usr\bin\bash.exe -lc "cd /d/... && ..."`. The scripts work this way. |
| `verilator: command not found` | `PATH` does not include the MSYS2 tools. | `export PATH=/c/msys64/ucrt64/bin:/c/msys64/usr/bin:$PATH` first. The `run_all.sh` scripts do this themselves. |
| `undefined reference to basic_string(basic_string&&)` at link time | Verilator's default `-Os` runtime build fails with this MSYS2 GCC 16. | Pass `-CFLAGS "-std=gnu++20 -O2"`, as the SystemC stages do. Recorded in [`spi/README.md`](../spi/README.md#toolchain-note). Not reproduced in this session. |
| Build stops with a warning | `-Wall` makes warnings fatal. | Fix the warning, or suppress that one code with a `lint_off` pragma near the code. Avoid `-Wno-fatal` for the whole build. |
| `$finish at 216ps` (or any unexpected time unit) | The source has no `` `timescale ``. | Add `` `timescale 1ns/1ps `` to the file. |
| SystemC test reports `SCLK period mismatch` after changing `CLK_DIV` | The testbench constant is out of step with the RTL default. | Change both. See [04](04-spi-systemc.md#things-to-try). |
| Verilog stage passes but SystemC stage fails after a parameter change | The Verilog testbench overrides the parameter; the SystemC model uses the RTL default. | This is expected for that experiment. Update the RTL default and the SystemC constant together. See [07](07-testbench-patterns.md#7-parameters-live-in-more-than-one-place). |
| Scripts fail on another machine | Paths are hard-coded: `/c/msys64`, `/c/systemc/systemc-2.3.3`, and `/d/verilator` in the READMEs. | Edit the `export` lines at the top of each `run_all.sh`. |

## Decisions still open

These are things the repo does not decide for you. They are listed, not done.

1. **Committed build output.** 172 of the 192 tracked files are generated `obj_*` output, and
   `spi/spi_sc.vcd` is a simulation output. They were committed in the baseline commit, and the repo
   has no `.gitignore`. Two options:
   - Add a `.gitignore` for `obj_*/`, `obj_dir/`, `*.vcd`, and `*.log`, and remove the tracked
     copies from the index with `git rm -r --cached`.
   - Keep them, as a snapshot of a working build.

   This is a change to what git tracks, so it is left for you to decide.
2. **Hard-coded paths.** The scripts and READMEs assume `C:\msys64` and `C:\systemc\systemc-2.3.3`.
   Parameterising them would make the repo portable.
3. **Duplicated parameters.** The latency and CLK_DIV values appear in both the Verilog and SystemC
   testbenches ([07](07-testbench-patterns.md#7-parameters-live-in-more-than-one-place)). A shared
   header or a generated constant would remove the risk of them drifting apart.
4. **Mutation checks are prose.** The three unit READMEs describe a mutation check each. Scripting
   them would turn each one into a test.
5. **`example/` has no script.** Adding `example/run_all.sh` would match the other folders.

## Next topics

These are not covered by any example here. Each one is a natural next step after the basics.

| Topic | What to learn | Start with |
|-------|---------------|------------|
| Waveforms from the model | `--trace` or `--trace-fst` makes Verilator emit waveforms of internal signals, not only the testbench's. | Verilator guide, tracing section |
| Plain C++ harness | `--cc` with your own `main()` and `eval()` loop. Gives full control of the clock. | the `--cc` flag, [01](01-verilator-basics.md#three-ways-to-use-the-output) |
| Coverage | `--coverage` and the `verilator_coverage` tool, to see which lines the tests exercised. | Verilator docs: coverage |
| Assertions | `--assert` enables SystemVerilog assertions in the model. | Verilator docs: assertions |
| Lint and waivers | `--lint-only` runs the checks without building. `.vlt` files hold waivers instead of pragmas in the source. | Verilator docs: lint |
| Internal signal access | `--public-flat-rw` lets C++ read and write internal signals. | Verilator docs: public |
| DPI-C | Calling C functions from SystemVerilog. | Verilator docs: DPI |
| Multithreading | `--threads` for large designs. | Verilator docs: threads |
| Build systems | CMake integration instead of `--build`. | Verilator docs: CMake |
| Python and cocotb | Driving a Verilator model from Python. | cocotb docs with Verilator |

The official Verilator guide is at [verilator.org/guide](https://verilator.org/guide/latest/). This
repo's version is 5.048.
