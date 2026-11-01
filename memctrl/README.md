# Memory-controller transaction latency: Verilog RTL -> Verilator SystemC model

A small memory controller where each transaction type has its own latency, tested at the
RTL level and on the SystemC model that Verilator generates from it.

| Transaction | req_type | Latency (cycles) | Response channel | Effect                                  |
|-------------|----------|------------------|------------------|-----------------------------------------|
| READ        | 0        | 4                | `rd_valid/rd_data` | returns `mem[addr]`                   |
| WRITE       | 1        | 2                | `wr_valid/wr_addr` | `mem[addr] = wdata`, acks the address |
| RMW_ADD     | 2        | 6                | `rmw_valid/rmw_old` | atomic `mem[addr] += wdata`, returns old value |
| (unused)    | 3        | ignored          | –                | –                                       |

Semantics:
- Memory is updated when a request is accepted, so a read sees every earlier request, even while
  an earlier write's ack is still in flight.
- Each response type has its own channel (like AXI R and B), so responses can complete out of
  issue order.
- A request driven in cycle `c` produces its response in cycle `c + LAT`.

```
memctrl/
├── rtl/lat_pipe.v          generic LAT-cycle valid+data delay line
├── rtl/mem_ctrl.v          memory array + three transaction types, one delay line each
├── tb/tb_mem_ctrl.v        Verilog testbench (RTL)
├── sc/memctrl_sc_tb.cpp    SystemC testbench (converted model)
└── run_all.sh              runs everything
```

## Scenarios

Both testbenches run the same five scenarios:

1. **Isolated:** WRITE, READ, RMW, READ on one address. Each response has its spec latency and the
   values follow the memory contents.
2. **Read-after-write:** WRITE, READ, WRITE, READ on one address on consecutive cycles. Each READ
   sees the write issued just before it, while that write's ack is still pending.
3. **Mixed, consecutive:** RMW @80, READ @81, WRITE @82. Responses arrive as WRITE (84), READ (85),
   RMW (86), the reverse of issue order.
4. **Back-to-back:** eight WRITEs, then eight READs, one per cycle. Latency is unchanged under
   full load.
5. **Random:** about 500 cycles, 60% occupancy, 16 addresses, READ 40% / WRITE 35% / RMW 25%.

## Checks

A golden memory model is updated in issue order. Each request's expected response is recorded at
issue, and a per-channel scoreboard requires every response to:
- match the oldest outstanding request on its channel,
- carry the expected value (READ data, WRITE address, RMW old value),
- arrive exactly `LAT` cycles after the request.

Spurious or missing responses are errors. The testbench exits non-zero if any check fails.

## Running

From an MSYS2 UCRT64 shell:

```sh
cd /d/verilator/memctrl
./run_all.sh
```

Requirements are the same as the other examples: Verilator in MSYS2 UCRT64 and SystemC 2.3.3
built at `C:\systemc\systemc-2.3.3`. The SystemC build passes `-CFLAGS "-std=gnu++20 -O2"`
(see the `spi` README for why `-O2`).

## Mutation check

Making the READ path one cycle shorter in the model (3 instead of 4) while the testbench still
expects 4 makes every READ fail with `latency 3 cycles, expected 4`, and the run exits 1.
