# Example: counter

A 4-bit counter with an asynchronous active-low reset, checked by a SystemVerilog testbench built
with `--binary`. No C++ is written by hand.

Files:

- `counter.sv`: the design.
- `tb.sv`: the testbench. Expects `count == 4` after 20 increments (20 mod 16).

## Build and run

From an MSYS2 login shell (see [../docs/02-environment-setup.md](../docs/02-environment-setup.md)):

```sh
cd /d/verilator/example
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb counter.sv tb.sv -o sim
./obj_dir/sim
```

Expected output ends with `PASS`, and the exit code is 0. The `obj_dir/` folder is generated.

The full walkthrough, including what each flag does, is in
[../docs/03-example-counter.md](../docs/03-example-counter.md).
