// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"

void Vspi_master___024root___ctor_var_reset(Vspi_master___024root* vlSelf);

Vspi_master___024root::Vspi_master___024root(Vspi_master__Syms* symsp, const char* namep)
    : clk("clk")
    , rst_n("rst_n")
    , start("start")
    , tx_data("tx_data")
    , rx_data("rx_data")
    , busy("busy")
    , done("done")
    , sclk("sclk")
    , mosi("mosi")
    , miso("miso")
    , cs_n("cs_n")
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vspi_master___024root___ctor_var_reset(this);
}

void Vspi_master___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vspi_master___024root::~Vspi_master___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
