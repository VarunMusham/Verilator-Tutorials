#!/bin/sh
# Latency test flow for latency_unit (per-datatype latencies: INT8=2, INT16=5, INT32=9 cycles):
#   1. Verilog latency testbench on the RTL (Verilator --binary)
#   2. Convert the RTL to a SystemC model (Verilator --sc)
#   3. Build the SystemC model with sc/latency_sc_tb.cpp and run it
#
# Run from an MSYS2 UCRT64 shell, e.g.:
#   /c/msys64/usr/bin/bash.exe -lc "cd /d/verilator/latency && ./run_all.sh"
set -e
cd "$(dirname "$0")"

export PATH=/c/msys64/ucrt64/bin:/c/msys64/usr/bin:$PATH
export SYSTEMC_INCLUDE=/c/systemc/systemc-2.3.3/src
export SYSTEMC_LIBDIR=/c/systemc/systemc-2.3.3/build/src/.libs

echo "=== 1. Verilog latency test (RTL) ==="
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb_latency_unit rtl/latency_unit.v rtl/lat_lane.v tb/tb_latency_unit.v \
  -Mdir obj_rtl -o tb_rtl > obj_rtl.log 2>&1 || { cat obj_rtl.log; exit 1; }
./obj_rtl/tb_rtl

echo "=== 2+3. Convert RTL to SystemC and build with the SystemC testbench ==="
# SystemC 2.3.3 is a C++20 build, so the model and testbench are C++20.
# -O2 overrides Verilator's default -Os (GCC 16 / MSYS2 link error otherwise).
verilator --sc -Wall --top-module latency_unit rtl/latency_unit.v rtl/lat_lane.v \
  --exe sc/latency_sc_tb.cpp -Mdir obj_sc -o latency_sc \
  -CFLAGS "-std=gnu++20 -O2" --build > obj_sc.log 2>&1 \
  || { cat obj_sc.log; exit 1; }

echo "=== 4. Run SystemC latency test ==="
./obj_sc/latency_sc
