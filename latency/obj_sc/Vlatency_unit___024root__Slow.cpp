// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlatency_unit.h for the primary calling header

#include "Vlatency_unit__pch.h"

void Vlatency_unit___024root___ctor_var_reset(Vlatency_unit___024root* vlSelf);

Vlatency_unit___024root::Vlatency_unit___024root(Vlatency_unit__Syms* symsp, const char* namep)
    : clk("clk")
    , rst_n("rst_n")
    , in_valid("in_valid")
    , in_dtype("in_dtype")
    , out8_valid("out8_valid")
    , out8_data("out8_data")
    , out16_valid("out16_valid")
    , out32_valid("out32_valid")
    , out16_data("out16_data")
    , in_data("in_data")
    , out32_data("out32_data")
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vlatency_unit___024root___ctor_var_reset(this);
}

void Vlatency_unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlatency_unit___024root::~Vlatency_unit___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
