# 06. Example: memory controller

The memory controller combines the earlier examples' ideas with **state**. The latency pipeline's
outputs depended only on the inputs of a few cycles earlier. Here, what a READ returns depends on
every write that came before it. So the testbench needs a model of the memory, not just a
delay check.

Folder: [`memctrl/`](../memctrl/). Design notes: [`memctrl/README.md`](../memctrl/README.md).

## The transactions

| Transaction | `req_type` | Latency (cycles) | Response channel | Effect |
|-------------|------------|------------------|------------------|--------|
| READ        | 0          | 4                | `rd_valid` / `rd_data`  | returns `mem[addr]` |
| WRITE       | 1          | 2                | `wr_valid` / `wr_addr`  | `mem[addr] = wdata`; acks the address |
| RMW_ADD     | 2          | 6                | `rmw_valid` / `rmw_old` | `mem[addr] += wdata`; returns the old value |
| (unused)    | 3          | ignored          | –                       | – |

Two semantic rules in the design:

- **Memory updates on acceptance.** The write or RMW takes effect at the clock edge that accepts
  the request. A later request sees it, even while the write's ack is still in the pipeline.
- **One channel per response type.** Like the AXI read-data (R) and write-response (B) channels,
  each type returns on its own port. Responses of different types can therefore complete out of
  issue order.

## The design

[`memctrl/rtl/mem_ctrl.v`](../memctrl/rtl/mem_ctrl.v) has three parts.

**The memory.** A 256-word array of 32-bit words (`AW = 8`):

```verilog
reg [31:0] mem [0:(1<<AW)-1];
```

An `initial` block zeroes it at time zero. The golden model assumes unwritten addresses read as
zero, so this initialisation is what makes that assumption true.

**The read and update.** The read is combinational, and the update is sequential:

```verilog
wire [31:0] cur = mem[req_addr];      // value as of this request

always @(posedge clk) begin
    if (is_wr)  mem[req_addr] <= req_wdata;
    if (is_rmw) mem[req_addr] <= cur + req_wdata;
end
```

`cur` is the value before this edge's update. The RMW writes `cur + req_wdata` and returns `cur`.
That is what makes it an atomic read-modify-write: the old value is captured in the same cycle the
new value is written.

**The response pipelines.** Each type has one `lat_pipe` instance:
[`memctrl/rtl/lat_pipe.v`](../memctrl/rtl/lat_pipe.v). It is a generic delay line, the same idea as
`lat_lane` in [05](05-latency-pipeline.md) but without the `+1`. A value applied in cycle `c` comes
out in cycle `c + LAT`.

```verilog
lat_pipe #(.W(32), .LAT(LAT_RD)) u_rd (
    .in_valid(is_rd), .in_data(cur), ...
);
```

The READ pipe carries `cur` (the data). The WRITE pipe carries `req_addr`, because the ack returns
the address, not data. The RMW pipe carries the old value.

## Why a golden model

The stateful design has one question that the latency checks cannot answer alone: **what value
should this READ return?** The answer depends on every earlier write. The testbench keeps a
**golden memory** that is updated in issue order, and records each request's expected response
at the moment it is issued:

| Request | Expected response | Recorded as |
|---------|-------------------|-------------|
| READ `a`  | `gold[a]` (now)                  | data `gold[a]` on the READ channel |
| WRITE `a` with `d` | address `a` (ack)       | `gold[a] = d`; `a` on the WRITE channel |
| RMW `a` with `d`   | old value `gold[a]`     | `gold[a] += d`; old value on the RMW channel |

Then each response is checked against the oldest outstanding request on its channel, the same
per-channel scoreboard used in [05](05-latency-pipeline.md#the-schedule-and-the-scoreboard). The
check also confirms the latency.

This works because the DUT applies writes in the same order the testbench issues them. A READ
issued after a WRITE to the same address sees the new value, in both the golden model and the DUT.

## The testbench

[`memctrl/tb/tb_mem_ctrl.v`](../memctrl/tb/tb_mem_ctrl.v) follows the latency testbench's shape:
a schedule is filled first, then at each negedge the testbench observes responses and then drives
the next request.

Output format is the same too. For WRITEs, the printed "value" is the acked address, not data. For
example, `WRITE issued 10 -> response 12 ... value 0x00000005` is the write to address 5.

### The five scenarios

| # | Name | What it checks |
|---|------|----------------|
| 1 | Isolated | WRITE, READ, RMW, READ on one address (5). The READ after the RMW returns `0xCB0E` = `0xCAFE + 0x10`. |
| 2 | Read-after-write | WRITE, READ, WRITE, READ on address 7 on consecutive cycles. Each READ must see the write just before it, while that write's ack is still pending. |
| 3 | Mixed, consecutive | RMW @80, READ @81, WRITE @82. Responses arrive at 86, 85, 84: the reverse of issue order. |
| 4 | Back-to-back | Eight WRITEs (addresses 0–7), then eight READs of the same addresses. Latency is unchanged under full load. |
| 5 | Random | About 500 cycles, 60% occupancy, 16 addresses. READ 40%, WRITE 35%, RMW 25%. |

Scenario 2 is the important one. Writing and then reading the same address one cycle apart tests
whether the memory update is visible to the next request before the write's ack returns. A design
that updated memory only when the ack came back would fail here.

## Output

The directed part of the Verilog run starts like this (note the scenario 1 values):

```
Directed transactions (issue cycle < 200):
  WRITE issued 10 -> response 12  latency 2  value 0x00000005
  READ  issued 20 -> response 24  latency 4  value 0x0000cafe
  RMW   issued 30 -> response 36  latency 6  value 0x0000cafe
  READ  issued 40 -> response 44  latency 4  value 0x0000cb0e
```

The RMW returns the old value `0xCAFE`. The READ at 40 returns `0xCB0E`, which is `0xCAFE + 0x10`.

The summary and the final line:

```
Latency summary (cycles): txn    count  min  avg  max  spec
  READ      133    4    4    4    4
  WRITE     101    2    2    2    2
  RMW        88    6    6    6    6
PASS: all transactions correct and at the specified latency
```

The SystemC run uses the same scenarios and its own random stream (`std::mt19937 rng(2024)`), so its
random counts differ. Its results are the same: every type at its spec latency, and PASS.

## Running

```sh
cd /d/verilator/memctrl
./run_all.sh
```

The build steps are the same as in [04](04-spi-systemc.md). The `--top-module` values are
`tb_mem_ctrl` for the Verilog stage and `mem_ctrl` for the SystemC stage.

## Things to try

- Change the READ latency in the RTL default (`LAT_RD = 4`) to 3. As in the latency example, the
  Verilog stage still passes (its testbench overrides the parameter), and the SystemC stage fails
  with `READ latency 3 cycles, expected 4`. This is the mutation check described in
  [`memctrl/README.md`](../memctrl/README.md#mutation-check). The repo does not script it.
- Delete the memory-update lines from `mem_ctrl.v` (the `always` block) and rerun the Verilog
  stage. Reads of written addresses return zero, and the testbench should report data errors. This
  shows that the golden model, not just the latency, is doing the checking.

## Next

- [07 Testbench patterns](07-testbench-patterns.md): the techniques shared by all four examples.
