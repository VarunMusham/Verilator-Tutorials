// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_ctrl.h for the primary calling header

#include "Vmem_ctrl__pch.h"

void Vmem_ctrl___024root___ctor_var_reset(Vmem_ctrl___024root* vlSelf);

Vmem_ctrl___024root::Vmem_ctrl___024root(Vmem_ctrl__Syms* symsp, const char* namep)
    : clk("clk")
    , rst_n("rst_n")
    , req_valid("req_valid")
    , req_type("req_type")
    , req_addr("req_addr")
    , rd_valid("rd_valid")
    , wr_valid("wr_valid")
    , wr_addr("wr_addr")
    , rmw_valid("rmw_valid")
    , req_wdata("req_wdata")
    , rd_data("rd_data")
    , rmw_old("rmw_old")
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmem_ctrl___024root___ctor_var_reset(this);
}

void Vmem_ctrl___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem_ctrl___024root::~Vmem_ctrl___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
