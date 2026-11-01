// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_master.h for the primary calling header

#ifndef VERILATED_VSPI_MASTER___024ROOT_H_
#define VERILATED_VSPI_MASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"


class Vspi_master__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_master___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellout__spi_master__cs_n;
    CData/*0:0*/ __Vcellinp__spi_master__miso;
    CData/*0:0*/ __Vcellout__spi_master__mosi;
    CData/*0:0*/ __Vcellout__spi_master__sclk;
    CData/*0:0*/ __Vcellout__spi_master__done;
    CData/*0:0*/ __Vcellout__spi_master__busy;
    CData/*7:0*/ __Vcellout__spi_master__rx_data;
    CData/*7:0*/ __Vcellinp__spi_master__tx_data;
    CData/*0:0*/ __Vcellinp__spi_master__start;
    CData/*0:0*/ __Vcellinp__spi_master__rst_n;
    CData/*0:0*/ __Vcellinp__spi_master__clk;
    CData/*1:0*/ spi_master__DOT__div_cnt;
    CData/*7:0*/ spi_master__DOT__tx_shift;
    CData/*7:0*/ spi_master__DOT__rx_shift;
    CData/*3:0*/ spi_master__DOT__edge_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__spi_master__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__spi_master__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<bool> rst_n;
    sc_core::sc_in<bool> start;
    sc_core::sc_in<uint32_t> tx_data;
    sc_core::sc_out<uint32_t> rx_data;
    sc_core::sc_out<bool> busy;
    sc_core::sc_out<bool> done;
    sc_core::sc_out<bool> sclk;
    sc_core::sc_out<bool> mosi;
    sc_core::sc_in<bool> miso;
    sc_core::sc_out<bool> cs_n;

    // INTERNAL VARIABLES
    Vspi_master__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vspi_master___024root(Vspi_master__Syms* symsp, const char* namep);
    ~Vspi_master___024root();
    VL_UNCOPYABLE(Vspi_master___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
