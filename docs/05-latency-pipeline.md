# 05. Example: latency pipeline

This example takes the two-stage pattern from the SPI chapter and adds three things:

- **Parameterised structure.** A `generate` loop builds a pipeline whose depth is a parameter.
- **Several datatypes.** Each datatype has its own pipeline, with its own latency.
- **Scoreboard checking.** The testbench records each request and checks each response against it.

Folder: [`latency/`](../latency/). Design notes: [`latency/README.md`](../latency/README.md).

## The idea

Three lanes, one per datatype:

| Datatype | `in_dtype` | Latency (cycles) |
|----------|------------|------------------|
| INT8     | 0          | 2                |
| INT16    | 1          | 5                |
| INT32    | 2          | 9                |
| (unused) | 3          | request ignored  |

Each lane computes `out = in + 1`, truncated to its width, and delays the result by its latency.
A request applied in cycle `c` appears on that datatype's output in cycle `c + LAT`.

Each datatype has its own response port. A slow INT32 can therefore finish after a fast INT8 that
was issued later, and the outputs leave in a different order from the one they went in.

## The lane: `lat_lane.v`

[`latency/rtl/lat_lane.v`](../latency/rtl/lat_lane.v) is the core building block. It has two
parameters, `W` (data width) and `LAT` (latency in cycles).

The pipeline is built with a `generate for` loop. Each stage has:

- a **valid bit** with asynchronous active-low reset (`v_q`), and
- a **data register** with no reset (`d_q`).

```verilog
for (g = 0; g < LAT; g = g + 1) begin : g_stage
    reg         v_q;
    reg [W-1:0] d_q;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) v_q <= 1'b0;
        else        v_q <= vch[g];
    end

    always @(posedge clk) begin
        d_q <= dch[g*W +: W];
    end

    assign vch[g+1]          = v_q;
    assign dch[(g+1)*W +: W] = d_q;
end
```

Points to notice:

- **Only the valid path is reset.** The data registers do not need a reset, because data is only
  meaningful when its valid bit is set. This is a common pattern in datapaths. Resetting every data
  register would cost area and gain nothing.
- **`vch` and `dch` are flat buses.** `vch[g]` is the valid at stage `g`. `dch` packs `LAT+1` data
  words side by side. `dch[g*W +: W]` is the `W`-bit slice for stage `g`. The `+:` operator
  selects `W` bits starting at the given index.
- **The `generate` loop is the parameterisation.** `LAT = 2` makes two stages, `LAT = 9` makes nine.
  No code changes.
- **`in_data + 1'b1` is assigned into a `W`-bit slice.** The result is truncated to `W` bits, so
  INT8 wraps at 255 to 0.

## The top: `latency_unit.v`

[`latency/rtl/latency_unit.v`](../latency/rtl/latency_unit.v) instantiates three lanes and decodes
`in_dtype`:

```verilog
lat_lane #(.W(8), .LAT(LAT8)) u_int8 (
    .in_valid (in_valid && (in_dtype == 2'd0)),
    .in_data  (in_data[7:0]),
    ...
);
```

Each lane's `in_valid` is high only when `in_dtype` selects that lane. Each lane gets the bits of
`in_data` it needs. The unused code `3` never raises any lane's valid, so it is ignored.

Its three latency parameters (`LAT8 = 2`, `LAT16 = 5`, `LAT32 = 9`) are the only numbers the
testbenches have to agree with. Both testbenches define them again as constants. See
[07](07-testbench-patterns.md) for the risk this creates.

## Stage 1: the Verilog testbench

[`latency/tb/tb_latency_unit.v`](../latency/tb/tb_latency_unit.v) is the RTL test.

### The schedule and the scoreboard

The testbench first fills a schedule: one slot per cycle (`s_valid`, `s_dtype`, `s_data`). Then it
runs the clock, and at each negedge it does two things:

1. **Observe.** If a response is valid on a datatype's port, check it.
2. **Drive.** If the schedule has a request for this cycle, drive it onto `in_valid`/`in_dtype`/
   `in_data`, and record it in the scoreboard.

Recording at drive time is what makes the latency measurable: the request's cycle is known, and
the response's cycle is when it is observed.

The scoreboard is one FIFO per datatype. It is held in flat arrays indexed as
`type*NCYC + position`, with `head[]` and `tail[]` as the read and write positions for each type.

A response is correct only if it:

- matches the **oldest** outstanding request of its datatype,
- carries `in + 1`, truncated to the datatype's width (`expect_of`),
- arrives exactly `LAT` cycles after the request (`lat_of`).

Per-type order is enough, because every request of one datatype goes through the same pipeline
with the same latency. Requests of one type cannot overtake each other. Requests of different
types can, which is why the scoreboard keeps a separate FIFO for each.

### The four scenarios

| # | Name | What it shows |
|---|------|---------------|
| 1 | Isolated | One request per datatype, no contention. Each response arrives at exactly its latency. |
| 2 | Back-to-back | Eight INT32 requests on consecutive cycles. Full throughput, same latency per request. |
| 3 | Mixed, consecutive | INT32 @100, INT8 @101, INT16 @102. Responses finish at 109, 103, 107. Out of issue order. |
| 4 | Random | About 500 cycles, about 60% occupancy, random datatype and data. |

Scenario 3 is the one to read first. It shows the purpose of the separate output ports: the
responses really do leave in a different order.

### Output

The testbench prints the directed responses (issued before cycle 200), then a latency summary, then
PASS or FAIL. Here are the first lines of the Verilog run:

```
=== 1. Verilog latency test (RTL) ===
Directed responses (issue cycle < 200):
  INT8  issued cycle 10 -> response cycle 12  latency 2  data 0x00000080
  INT16 issued cycle 30 -> response cycle 35  latency 5  data 0x00001235
  INT32 issued cycle 50 -> response cycle 59  latency 9  data 0xdeadbef0
  ...
```

The summary and the final line:

```
Latency summary (cycles): type   count  min  avg  max  spec
  INT8      102    2    2    2    2
  INT16      96    5    5    5    5
  INT32      93    9    9    9    9
PASS: all responses correct and at the specified latency
```

Every datatype has min = avg = max = spec. That is the claim the testbench is checking.

## Stage 2: the SystemC model

[`latency/sc/latency_sc_tb.cpp`](../latency/sc/latency_sc_tb.cpp) runs the same four scenarios and
the same checks, against the model generated from `latency_unit.v` and `lat_lane.v`. The build is
the same shape as the SPI example, with `--top-module latency_unit`. See
[04](04-spi-systemc.md#stage-2-convert-the-rtl-to-systemc) for each flag.

Three differences from the Verilog testbench:

- The scoreboard is a `std::deque<Req>` per datatype rather than flat arrays.
- Random data comes from `std::mt19937 rng(2024)`, not `$urandom`. So the **random counts differ**
  between the two runs. Here the Verilog run has 96 INT16 responses and the SystemC run has 101.
  Both pass, because each checks its own stream against its own scoreboard. The directed scenarios
  are identical.
- There is no waveform output.

The SystemC run's summary:

```
Latency summary (cycles): type   count  min  avg  max  spec
  INT8   102    2    2    2    2
  INT16  101    5    5    5    5
  INT32  116    9    9    9    9
PASS: all responses correct and at the specified latency (SystemC model)
```

## Running

```sh
cd /d/verilator/latency
./run_all.sh
```

It runs both stages and exits 0 on success.

## Things to try

- Change the `LAT16` default in `latency_unit.v` from 5 to 4 and rerun. The **Verilog stage still
  passes**, because `tb_latency_unit.v` overrides the parameter with `.LAT16(LAT16)` (value 5). The
  **SystemC stage fails**: the model is built from the RTL defaults, so the INT16 responses come
  out 4 cycles late and the testbench reports `INT16 latency 4 cycles, expected 5`. This is the
  mutation check described in [`latency/README.md`](../latency/README.md#mutation-check). The README
  describes it, but the repo does not script it.
- The lesson from that experiment: parameters given explicitly in a testbench override the RTL
  defaults. The SystemC model has no such override, so it tests the defaults. Running both stages
  checks both paths. See [07](07-testbench-patterns.md).

## Next

- [06 Example: memory controller](06-memctrl.md): a stateful design, where the expected response
  depends on what was written earlier.
