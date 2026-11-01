#!/bin/sh
# Build and run the SPI example:
#   1. Verilog self-test of rtl/spi_master.v (Verilator --binary)
#   2. Convert rtl/spi_master.v to a SystemC model (Verilator --sc)
#   3. Build the SystemC model + sc/spi_sc_tb.cpp and run it
#
# Run from an MSYS2 UCRT64 shell, e.g.:
#   /c/msys64/usr/bin/bash.exe -lc "cd /d/verilator/spi && ./run_all.sh"
set -e
cd "$(dirname "$0")"

export PATH=/c/msys64/ucrt64/bin:/c/msys64/usr/bin:$PATH
export SYSTEMC_INCLUDE=/c/systemc/systemc-2.3.3/src
export SYSTEMC_LIBDIR=/c/systemc/systemc-2.3.3/build/src/.libs

echo "=== 1. Verilog self-test ==="
verilator --binary --timing -Wall -CFLAGS -std=gnu++17 \
  --top-module tb_spi_master rtl/spi_master.v tb/tb_spi_master.v \
  -Mdir obj_rtl -o tb_rtl > obj_rtl.log 2>&1 || { cat obj_rtl.log; exit 1; }
./obj_rtl/tb_rtl

echo "=== 2+3. Convert RTL to SystemC and build with the SystemC testbench ==="
# SystemC 2.3.3 was built as C++20, so everything here is C++20.
# -O2 overrides Verilator's default -Os: with GCC 16 / MSYS2 at -Os, verilated.o
# fails to link ("undefined reference to basic_string(basic_string&&)").
verilator --sc -Wall --top-module spi_master rtl/spi_master.v \
  --exe sc/spi_sc_tb.cpp -Mdir obj_sc -o spi_sc \
  -CFLAGS "-std=gnu++20 -O2" --build > obj_sc.log 2>&1 \
  || { cat obj_sc.log; exit 1; }

echo "=== 4. Run SystemC testbench ==="
./obj_sc/spi_sc
