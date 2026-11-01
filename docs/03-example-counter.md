# 03. Example: counter

The first example is a 4-bit counter with an enable and an asynchronous reset, checked by a
SystemVerilog testbench. It has no C++ at all. Verilator generates the `main()` and the
executable.

Folder: [`example/`](../example/). It has no `run_all.sh`. You run the build by hand, shown below.

## The design: `counter.sv`

[`example/counter.sv`](../example/counter.sv):

```systemverilog
module counter #(
    parameter int WIDTH = 4
) (
    input  logic             clk,
    input  logic             rst_n,
    input  logic             en,
    output logic [WIDTH-1:0] count
);
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            count <= '0;
        else if (en)
            count <= count + 1'b1;
    end
endmodule
```

Things to notice:

- `always_ff` is SystemVerilog's way to say "this is a register". Verilator checks that it
  contains only register assignments.
- `posedge clk or negedge rst_n` makes the reset **asynchronous and active-low**. The counter
  clears as soon as `rst_n` goes low, without waiting for a clock edge. This is the reset style
  every example in the repo uses.
- `count <= ...` is a nonblocking assignment. All registers update together at the edge.
- `WIDTH` is a parameter, so the same module can be made wider without editing it.

## The testbench: `tb.sv`

[`example/tb.sv`](../example/tb.sv):

```systemverilog
module tb;
    logic       clk;
    logic       rst_n;
    logic       en;
    logic [3:0] count;

    counter #(.WIDTH(4)) dut (
        .clk  (clk),
        .rst_n(rst_n),
        .en   (en),
        .count(count)
    );

    initial begin
        clk = 0;
        rst_n = 0;
        en = 0;
    end

    always #5 clk = ~clk;

    initial begin
        #22 rst_n = 1;
        en = 1;
        repeat (20) @(posedge clk);
        #1;  // let the nonblocking update from the last edge settle
        // 20 increments of a 4-bit counter -> 20 mod 16 = 4
        $display("final count = %0d (expected 4)", count);
        if (count !== 4'd4) $fatal(1, "count mismatch: got %0d", count);
        $display("PASS");
        $finish;
    end
endmodule
```

The testbench has no ports, which makes it the top module. It does four things:

1. **Clock.** `always #5 clk = ~clk;` toggles every 5 time units, so there is a rising edge
   every 10 units. This needs `--timing`.
2. **Reset.** `rst_n` starts at 0. It is released at time 22, which is between the second and
   third rising edges.
3. **Stimulus and wait.** `en` goes high at the same time. `repeat (20) @(posedge clk)` waits
   for 20 rising edges. The counter increments on each edge, so it reaches 20.
4. **Check.** `20 mod 16 = 4`, so `count` must be 4. On a mismatch, `$fatal(1, ...)` ends the
   run with a non-zero exit code. Otherwise the testbench prints `PASS` and calls `$finish`.

The `#1` before the check waits one time unit after the last edge, so the nonblocking update
has finished before `count` is read. Reading immediately at the edge would show the value from
before the update.

## Build it

From an MSYS2 login shell, in the `example` folder:

```sh
cd /d/verilator/example
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb counter.sv tb.sv -o sim
./obj_dir/sim
```

What each flag does:

| Flag | Meaning |
|------|---------|
| `--binary` | Generate a `main()` and build an executable. No C++ source is written by hand. |
| `--timing` | Enable delays and event controls (`#5`, `@(posedge clk)`) in the testbench. |
| `-Wall` | Enable all lint warnings. Warnings stop the build unless fixed or suppressed. |
| `-CFLAGS -std=gnu++17` | Pass `-std=gnu++17` to the C++ compiler when it builds the model. |
| `--top-module tb` | `tb` is the root of the design. |
| `counter.sv tb.sv` | The two source files. |
| `-o sim` | Name the executable `sim` (`sim.exe` on Windows). It is placed in `obj_dir/`. |

The default output folder is `obj_dir/`. Verilator records the exact command it was given in
`obj_dir/Vtb__verFiles.dat`, which is useful for reproducing a build.

## Expected output

Running `./obj_dir/sim` prints the testbench messages, followed by Verilator's simulation
report:

```
final count = 4 (expected 4)
PASS
- tb.sv:31: Verilog $finish
- S i m u l a t i o n   R e p o r t: Verilator 5.048 2026-04-26
- Verilator: $finish at 216ps; ...
```

The exit code is 0. The `$finish at 216ps` line shows that no `` `timescale `` is set: the
default time unit is picoseconds. See [01](01-verilator-basics.md#key-terms).

## Things to try

- Change `repeat (20)` to `repeat (17)`. The count becomes 1, the check expects 4, and the
  simulation stops with a `count mismatch` message and a non-zero exit code. This confirms the
  check is real.
- Change `en = 1` to `en = 0`. The count stays at 0.
- Change `WIDTH` to 8. Three things in `tb.sv` must change with it: the instance parameter
  (`#(.WIDTH(8))`), the declaration of `count` (`logic [7:0]`), and the expected value (`8'd20`,
  not `4'd4`, since 20 is less than 256). Change only one of them and the build or check fails.

## Next

- [04 Example: SPI master](04-spi-systemc.md): the same flow, plus a conversion to SystemC.
