# Multi-datatype latency test: Verilog RTL -> Verilator SystemC model

A small unit where each datatype has its own pipeline depth, tested at the RTL level and on
the SystemC model that Verilator generates from it.

| Datatype | in_dtype | Latency (cycles) |
|----------|----------|------------------|
| INT8     | 0        | 2                |
| INT16    | 1        | 5                |
| INT32    | 2        | 9                |
| (unused) | 3        | request ignored  |

Each lane computes `out = in + 1`, truncated to its width, and delays it by its latency.
A request driven in cycle `c` produces a response in cycle `c + LAT`. Each datatype has its
own response port, so responses can finish out of issue order.

```
latency/
├── rtl/lat_lane.v          one datatype lane: (in+1) delayed by LAT cycles
├── rtl/latency_unit.v      top: three lanes, dtype decode, per-type outputs
├── tb/tb_latency_unit.v    Verilog latency testbench (RTL)
├── sc/latency_sc_tb.cpp    SystemC latency testbench (converted model)
└── run_all.sh              runs everything
```

## Scenarios

Both testbenches run the same four scenarios:

1. **Isolated:** one request per datatype. Each response arrives exactly `LAT` cycles later.
2. **Back-to-back:** eight INT32 requests on consecutive cycles. Full throughput, same latency.
3. **Mixed, consecutive:** INT32 at cycle 100, INT8 at 101, INT16 at 102. INT8 completes at 103,
   INT16 at 107, INT32 at 109, so responses leave in a different order than they were issued.
4. **Random:** about 500 cycles with about 60% of cycles carrying a request of random datatype.

## Checks

A scoreboard holds one FIFO of outstanding requests per datatype. Every response must:
- match the oldest outstanding request of its datatype,
- carry the data `in + 1` truncated to the datatype width,
- arrive exactly `LAT[datatype]` cycles after the request.

Any spurious or missing response is an error. The testbench exits non-zero if any check fails.

## Running

From an MSYS2 UCRT64 shell:

```sh
cd /d/verilator/latency
./run_all.sh
```

Requirements are the same as the `spi` example: Verilator in MSYS2 UCRT64 and SystemC 2.3.3
built at `C:\systemc\systemc-2.3.3`.

The SystemC build passes `-CFLAGS "-std=gnu++20 -O2"`. The `-O2` overrides Verilator's default
`-Os`, which fails to link under MSYS2 GCC 16 (see the `spi` README for details).

## Mutation check

Changing the INT16 pipeline depth in the model to 4 while the testbench still expects 5 makes
every INT16 response fail with `latency 4 cycles, expected 5`, and the run exits 1.
