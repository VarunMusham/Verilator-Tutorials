// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_spi_master.h for the primary calling header

#ifndef VERILATED_VTB_SPI_MASTER___024ROOT_H_
#define VERILATED_VTB_SPI_MASTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_spi_master__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_spi_master___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_spi_master__DOT__clk;
    CData/*0:0*/ tb_spi_master__DOT__rst_n;
    CData/*0:0*/ tb_spi_master__DOT__start;
    CData/*7:0*/ tb_spi_master__DOT__tx_data;
    CData/*7:0*/ tb_spi_master__DOT__rx_data;
    CData/*0:0*/ tb_spi_master__DOT__busy;
    CData/*0:0*/ tb_spi_master__DOT__done;
    CData/*0:0*/ tb_spi_master__DOT__sclk;
    CData/*0:0*/ tb_spi_master__DOT__mosi;
    CData/*0:0*/ tb_spi_master__DOT__cs_n;
    CData/*0:0*/ tb_spi_master__DOT__miso;
    CData/*7:0*/ tb_spi_master__DOT__slave_tx;
    CData/*7:0*/ tb_spi_master__DOT__slave_rx;
    CData/*7:0*/ tb_spi_master__DOT__rnd_tx;
    CData/*7:0*/ tb_spi_master__DOT__rnd_stx;
    CData/*1:0*/ tb_spi_master__DOT__dut__DOT__div_cnt;
    CData/*7:0*/ tb_spi_master__DOT__dut__DOT__tx_shift;
    CData/*7:0*/ tb_spi_master__DOT__dut__DOT__rx_shift;
    CData/*3:0*/ tb_spi_master__DOT__dut__DOT__edge_cnt;
    CData/*0:0*/ __Vdly__tb_spi_master__DOT__sclk;
    CData/*1:0*/ __Vdly__tb_spi_master__DOT__dut__DOT__div_cnt;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__cs_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_spi_master__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_spi_master__DOT__errors;
    IData/*31:0*/ tb_spi_master__DOT__slave_bit;
    IData/*31:0*/ tb_spi_master__DOT__sclk_rises;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h258dea4e__0;

    // INTERNAL VARIABLES
    Vtb_spi_master__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_spi_master___024root(Vtb_spi_master__Syms* symsp, const char* namep);
    ~Vtb_spi_master___024root();
    VL_UNCOPYABLE(Vtb_spi_master___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
