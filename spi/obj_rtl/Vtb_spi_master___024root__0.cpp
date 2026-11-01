// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_master.h for the primary calling header

#include "Vtb_spi_master__pch.h"

VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_master___024root* vlSelf);
VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_master___024root* vlSelf);

void Vtb_spi_master___024root___eval_initial(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_master__DOT__clk = 0U;
    vlSelfRef.tb_spi_master__DOT__miso = 0U;
    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(Vtb_spi_master___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_spi_master__DOT__timeout;
    tb_spi_master__DOT__timeout = 0;
    IData/*31:0*/ tb_spi_master__DOT__i;
    tb_spi_master__DOT__i = 0;
    IData/*31:0*/ tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__0__tx;
    __Vtask_tb_spi_master__DOT__xfer__0__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__0__stx;
    __Vtask_tb_spi_master__DOT__xfer__0__stx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__1__tx;
    __Vtask_tb_spi_master__DOT__xfer__1__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__1__stx;
    __Vtask_tb_spi_master__DOT__xfer__1__stx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__2__tx;
    __Vtask_tb_spi_master__DOT__xfer__2__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__2__stx;
    __Vtask_tb_spi_master__DOT__xfer__2__stx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__3__tx;
    __Vtask_tb_spi_master__DOT__xfer__3__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__3__stx;
    __Vtask_tb_spi_master__DOT__xfer__3__stx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__4__tx;
    __Vtask_tb_spi_master__DOT__xfer__4__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__4__stx;
    __Vtask_tb_spi_master__DOT__xfer__4__stx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__5__tx;
    __Vtask_tb_spi_master__DOT__xfer__5__tx = 0;
    CData/*7:0*/ __Vtask_tb_spi_master__DOT__xfer__5__stx;
    __Vtask_tb_spi_master__DOT__xfer__5__stx = 0;
    // Body
    tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                             "@(negedge tb_spi_master.clk)");
        co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_spi_master.clk)", 
                                                             "tb\\tb_spi_master.v", 
                                                             116);
        tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_spi_master__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_spi_master__DOT__rst_n = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         118);
    __Vtask_tb_spi_master__DOT__xfer__0__stx = 0x5aU;
    __Vtask_tb_spi_master__DOT__xfer__0__tx = 0xa5U;
    vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__0__stx;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         71);
    vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__0__tx;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         74);
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    tb_spi_master__DOT__timeout = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
    }
    {
        while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
            Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                 "@(negedge tb_spi_master.clk)");
            co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_spi_master.clk)", 
                                                                 "tb\\tb_spi_master.v", 
                                                                 83);
            tb_spi_master__DOT__timeout = ((IData)(1U) 
                                           + tb_spi_master__DOT__timeout);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                vlSelfRef.tb_spi_master__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__0__stx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__0__stx));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__0__tx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__0__tx));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                     , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                            | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
    }
    VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                 , '#',8,__Vtask_tb_spi_master__DOT__xfer__0__tx
                 , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__0__stx)
                 , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                 , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
    __Vtask_tb_spi_master__DOT__xfer__1__stx = 0xc3U;
    __Vtask_tb_spi_master__DOT__xfer__1__tx = 0x3cU;
    vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__1__stx;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         71);
    vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__1__tx;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         74);
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    tb_spi_master__DOT__timeout = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
    }
    {
        while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
            Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                 "@(negedge tb_spi_master.clk)");
            co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_spi_master.clk)", 
                                                                 "tb\\tb_spi_master.v", 
                                                                 83);
            tb_spi_master__DOT__timeout = ((IData)(1U) 
                                           + tb_spi_master__DOT__timeout);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                vlSelfRef.tb_spi_master__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                goto __Vlabel1;
            }
        }
        __Vlabel1: ;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__1__stx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__1__stx));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__1__tx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__1__tx));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                     , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                            | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
    }
    VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                 , '#',8,__Vtask_tb_spi_master__DOT__xfer__1__tx
                 , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__1__stx)
                 , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                 , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
    __Vtask_tb_spi_master__DOT__xfer__2__stx = 0U;
    __Vtask_tb_spi_master__DOT__xfer__2__tx = 0xffU;
    vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__2__stx;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         71);
    vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__2__tx;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         74);
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    tb_spi_master__DOT__timeout = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
    }
    {
        while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
            Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                 "@(negedge tb_spi_master.clk)");
            co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_spi_master.clk)", 
                                                                 "tb\\tb_spi_master.v", 
                                                                 83);
            tb_spi_master__DOT__timeout = ((IData)(1U) 
                                           + tb_spi_master__DOT__timeout);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                vlSelfRef.tb_spi_master__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                goto __Vlabel2;
            }
        }
        __Vlabel2: ;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__2__stx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__2__stx));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__2__tx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__2__tx));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                     , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                            | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
    }
    VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                 , '#',8,__Vtask_tb_spi_master__DOT__xfer__2__tx
                 , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__2__stx)
                 , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                 , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
    __Vtask_tb_spi_master__DOT__xfer__3__stx = 0xffU;
    __Vtask_tb_spi_master__DOT__xfer__3__tx = 0U;
    vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__3__stx;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         71);
    vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__3__tx;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         74);
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    tb_spi_master__DOT__timeout = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
    }
    {
        while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
            Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                 "@(negedge tb_spi_master.clk)");
            co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_spi_master.clk)", 
                                                                 "tb\\tb_spi_master.v", 
                                                                 83);
            tb_spi_master__DOT__timeout = ((IData)(1U) 
                                           + tb_spi_master__DOT__timeout);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                vlSelfRef.tb_spi_master__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                goto __Vlabel3;
            }
        }
        __Vlabel3: ;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__3__stx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__3__stx));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__3__tx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__3__tx));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                     , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                            | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
    }
    VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                 , '#',8,__Vtask_tb_spi_master__DOT__xfer__3__tx
                 , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__3__stx)
                 , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                 , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
    __Vtask_tb_spi_master__DOT__xfer__4__stx = 0x80U;
    __Vtask_tb_spi_master__DOT__xfer__4__tx = 1U;
    vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__4__stx;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         71);
    vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__4__tx;
    vlSelfRef.tb_spi_master__DOT__start = 1U;
    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                         "@(negedge tb_spi_master.clk)");
    co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_spi_master.clk)", 
                                                         "tb\\tb_spi_master.v", 
                                                         74);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
    }
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    tb_spi_master__DOT__timeout = 0U;
    {
        while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
            Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                 "@(negedge tb_spi_master.clk)");
            co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_spi_master.clk)", 
                                                                 "tb\\tb_spi_master.v", 
                                                                 83);
            tb_spi_master__DOT__timeout = ((IData)(1U) 
                                           + tb_spi_master__DOT__timeout);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                vlSelfRef.tb_spi_master__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                goto __Vlabel4;
            }
        }
        __Vlabel4: ;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__4__stx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__4__stx));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                      != (IData)(__Vtask_tb_spi_master__DOT__xfer__4__tx))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                     , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__4__tx));
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                     , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                            | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
        vlSelfRef.tb_spi_master__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_spi_master__DOT__errors);
        VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
    }
    VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                 , '#',8,__Vtask_tb_spi_master__DOT__xfer__4__tx
                 , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__4__stx)
                 , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                 , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
    tb_spi_master__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, tb_spi_master__DOT__i)) {
        vlSelfRef.tb_spi_master__DOT__rnd_tx = (0x000000ffU 
                                                & VL_RANDOM_I());
        vlSelfRef.tb_spi_master__DOT__rnd_stx = (0x000000ffU 
                                                 & VL_RANDOM_I());
        __Vtask_tb_spi_master__DOT__xfer__5__stx = vlSelfRef.tb_spi_master__DOT__rnd_stx;
        __Vtask_tb_spi_master__DOT__xfer__5__tx = vlSelfRef.tb_spi_master__DOT__rnd_tx;
        vlSelfRef.tb_spi_master__DOT__slave_tx = __Vtask_tb_spi_master__DOT__xfer__5__stx;
        Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                             "@(negedge tb_spi_master.clk)");
        co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_spi_master.clk)", 
                                                             "tb\\tb_spi_master.v", 
                                                             71);
        vlSelfRef.tb_spi_master__DOT__tx_data = __Vtask_tb_spi_master__DOT__xfer__5__tx;
        vlSelfRef.tb_spi_master__DOT__start = 1U;
        Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                             "@(negedge tb_spi_master.clk)");
        co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_spi_master.clk)", 
                                                             "tb\\tb_spi_master.v", 
                                                             74);
        vlSelfRef.tb_spi_master__DOT__start = 0U;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
            vlSelfRef.tb_spi_master__DOT__errors = 
                ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
            VL_WRITEF_NX("ERROR: busy not asserted after start\n",0);
        }
        tb_spi_master__DOT__timeout = 0U;
        {
            while ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__done)))) {
                Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                                     "@(negedge tb_spi_master.clk)");
                co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_spi_master.clk)", 
                                                                     "tb\\tb_spi_master.v", 
                                                                     83);
                tb_spi_master__DOT__timeout = ((IData)(1U) 
                                               + tb_spi_master__DOT__timeout);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000003e8U, tb_spi_master__DOT__timeout)))) {
                    vlSelfRef.tb_spi_master__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
                    VL_WRITEF_NX("ERROR: timeout waiting for done\n",0);
                    VL_FINISH_MT("tb\\tb_spi_master.v", 88, "");
                    goto __Vlabel5;
                }
            }
            __Vlabel5: ;
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__rx_data) 
                          != (IData)(__Vtask_tb_spi_master__DOT__xfer__5__stx))))) {
            vlSelfRef.tb_spi_master__DOT__errors = 
                ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
            VL_WRITEF_NX("ERROR: master rx 0x%02h, expected 0x%02h\n",2
                         , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                         , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__5__stx));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                          != (IData)(__Vtask_tb_spi_master__DOT__xfer__5__tx))))) {
            vlSelfRef.tb_spi_master__DOT__errors = 
                ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
            VL_WRITEF_NX("ERROR: slave rx 0x%02h, expected 0x%02h\n",2
                         , '#',8,vlSelfRef.tb_spi_master__DOT__slave_rx
                         , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__5__tx));
        }
        if (VL_UNLIKELY(((8U != vlSelfRef.tb_spi_master__DOT__sclk_rises)))) {
            vlSelfRef.tb_spi_master__DOT__errors = 
                ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
            VL_WRITEF_NX("ERROR: %0d SCLK rising edges, expected 8\n",1
                         , '~',32,vlSelfRef.tb_spi_master__DOT__sclk_rises);
        }
        if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                                | (IData)(vlSelfRef.tb_spi_master__DOT__busy)))))) {
            vlSelfRef.tb_spi_master__DOT__errors = 
                ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__errors);
            VL_WRITEF_NX("ERROR: cs_n/busy not released after done\n",0);
        }
        VL_WRITEF_NX("xfer tx=0x%02h slave_tx=0x%02h -> master rx=0x%02h slave rx=0x%02h\n",4
                     , '#',8,__Vtask_tb_spi_master__DOT__xfer__5__tx
                     , '#',8,(IData)(__Vtask_tb_spi_master__DOT__xfer__5__stx)
                     , '#',8,vlSelfRef.tb_spi_master__DOT__rx_data
                     , '#',8,(IData)(vlSelfRef.tb_spi_master__DOT__slave_rx));
        tb_spi_master__DOT__i = ((IData)(1U) + tb_spi_master__DOT__i);
    }
    tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(vlSelf, 
                                                             "@(negedge tb_spi_master.clk)");
        co_await vlSelfRef.__VtrigSched_h258dea4e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_spi_master.clk)", 
                                                             "tb\\tb_spi_master.v", 
                                                             131);
        tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_spi_master__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_LIKELY(((0U == vlSelfRef.tb_spi_master__DOT__errors)))) {
        VL_WRITEF_NX("PASS: all SPI transfers correct\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_spi_master.v:133: Assertion failed in %m: FAIL: %0d errors\n",4, 'M',vlSymsp->name(),"tb_spi_master", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_spi_master__DOT__errors);
        VL_STOP_MT("tb\\tb_spi_master.v", 133, "", false);
    }
    VL_FINISH_MT("tb\\tb_spi_master.v", 134, "");
    co_return;
}

VlCoroutine Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb\\tb_spi_master.v", 
                                             34);
        vlSelfRef.tb_spi_master__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__clk)));
    }
    co_return;
}

void Vtb_spi_master___024root___eval_triggers_vec__act(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_triggers_vec__act\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 6U) 
                                                      | ((((~ (IData)(vlSelfRef.tb_spi_master__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0)) 
                                                          << 5U) 
                                                         | (((~ (IData)(vlSelfRef.tb_spi_master__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__rst_n__0)) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.tb_spi_master__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((~ (IData)(vlSelfRef.tb_spi_master__DOT__sclk)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_spi_master__DOT__sclk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0))) 
                                                            << 1U) 
                                                           | ((~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__cs_n__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__cs_n__0 
        = vlSelfRef.tb_spi_master__DOT__cs_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0 
        = vlSelfRef.tb_spi_master__DOT__sclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 
        = vlSelfRef.tb_spi_master__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__rst_n__0 
        = vlSelfRef.tb_spi_master__DOT__rst_n;
}

bool Vtb_spi_master___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_spi_master___024root___nba_sequent__TOP__0(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__0\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_spi_master__DOT__sclk = vlSelfRef.tb_spi_master__DOT__sclk;
    vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt 
        = vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt;
}

void Vtb_spi_master___024root___nba_sequent__TOP__1(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__1\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_master__DOT__slave_bit = 0U;
    vlSelfRef.tb_spi_master__DOT__sclk_rises = 0U;
    vlSelfRef.tb_spi_master__DOT__slave_rx = 0U;
    vlSelfRef.tb_spi_master__DOT__miso = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__slave_tx) 
                                                >> 7U));
}

void Vtb_spi_master___024root___nba_sequent__TOP__2(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__2\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)))) {
        vlSelfRef.tb_spi_master__DOT__sclk_rises = 
            ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__sclk_rises);
        vlSelfRef.tb_spi_master__DOT__slave_rx = ((0x000000feU 
                                                   & ((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.tb_spi_master__DOT__mosi));
    }
}

void Vtb_spi_master___024root___nba_sequent__TOP__3(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__3\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)))) {
        vlSelfRef.tb_spi_master__DOT__slave_bit = ((IData)(1U) 
                                                   + vlSelfRef.tb_spi_master__DOT__slave_bit);
        if (VL_GTS_III(32, 8U, vlSelfRef.tb_spi_master__DOT__slave_bit)) {
            vlSelfRef.tb_spi_master__DOT__miso = (1U 
                                                  & ((IData)(vlSelfRef.tb_spi_master__DOT__slave_tx) 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - vlSelfRef.tb_spi_master__DOT__slave_bit))));
        }
    }
}

void Vtb_spi_master___024root___nba_sequent__TOP__4(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___nba_sequent__TOP__4\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_spi_master__DOT__rst_n) {
        vlSelfRef.tb_spi_master__DOT__done = 0U;
        if (vlSelfRef.tb_spi_master__DOT__busy) {
            if ((3U == (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt))) {
                vlSelfRef.__Vdly__tb_spi_master__DOT__sclk 
                    = (1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__sclk)));
                vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
                if (vlSelfRef.tb_spi_master__DOT__sclk) {
                    if ((8U == (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt))) {
                        vlSelfRef.tb_spi_master__DOT__busy = 0U;
                        vlSelfRef.tb_spi_master__DOT__done = 1U;
                        vlSelfRef.tb_spi_master__DOT__cs_n = 1U;
                        vlSelfRef.tb_spi_master__DOT__rx_data 
                            = vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift;
                    } else {
                        vlSelfRef.tb_spi_master__DOT__mosi 
                            = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift) 
                                     >> 7U));
                        vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift 
                            = (0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift) 
                                              << 1U));
                    }
                } else {
                    vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift 
                        = ((0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.tb_spi_master__DOT__miso));
                    vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt)));
                }
            } else {
                vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt)));
            }
        } else if (vlSelfRef.tb_spi_master__DOT__start) {
            vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift 
                = (0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__tx_data) 
                                  << 1U));
            vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt = 0U;
            vlSelfRef.tb_spi_master__DOT__busy = 1U;
            vlSelfRef.tb_spi_master__DOT__cs_n = 0U;
            vlSelfRef.tb_spi_master__DOT__mosi = (1U 
                                                  & ((IData)(vlSelfRef.tb_spi_master__DOT__tx_data) 
                                                     >> 7U));
            vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
        }
    } else {
        vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift = 0U;
        vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift = 0U;
        vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt = 0U;
        vlSelfRef.tb_spi_master__DOT__busy = 0U;
        vlSelfRef.tb_spi_master__DOT__done = 0U;
        vlSelfRef.__Vdly__tb_spi_master__DOT__sclk = 0U;
        vlSelfRef.tb_spi_master__DOT__mosi = 0U;
        vlSelfRef.tb_spi_master__DOT__cs_n = 1U;
        vlSelfRef.tb_spi_master__DOT__rx_data = 0U;
        vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
    }
    vlSelfRef.tb_spi_master__DOT__sclk = vlSelfRef.__Vdly__tb_spi_master__DOT__sclk;
    vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt 
        = vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt;
}

void Vtb_spi_master___024root___eval_nba(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_nba\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__tb_spi_master__DOT__sclk 
            = vlSelfRef.tb_spi_master__DOT__sclk;
        vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt 
            = vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_spi_master__DOT__slave_bit = 0U;
        vlSelfRef.tb_spi_master__DOT__sclk_rises = 0U;
        vlSelfRef.tb_spi_master__DOT__slave_rx = 0U;
        vlSelfRef.tb_spi_master__DOT__miso = (1U & 
                                              ((IData)(vlSelfRef.tb_spi_master__DOT__slave_tx) 
                                               >> 7U));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)))) {
            vlSelfRef.tb_spi_master__DOT__sclk_rises 
                = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__sclk_rises);
            vlSelfRef.tb_spi_master__DOT__slave_rx 
                = ((0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__slave_rx) 
                                   << 1U)) | (IData)(vlSelfRef.tb_spi_master__DOT__mosi));
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__cs_n)))) {
            vlSelfRef.tb_spi_master__DOT__slave_bit 
                = ((IData)(1U) + vlSelfRef.tb_spi_master__DOT__slave_bit);
            if (VL_GTS_III(32, 8U, vlSelfRef.tb_spi_master__DOT__slave_bit)) {
                vlSelfRef.tb_spi_master__DOT__miso 
                    = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__slave_tx) 
                             >> (7U & ((IData)(7U) 
                                       - vlSelfRef.tb_spi_master__DOT__slave_bit))));
            }
        }
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.tb_spi_master__DOT__rst_n) {
            vlSelfRef.tb_spi_master__DOT__done = 0U;
            if (vlSelfRef.tb_spi_master__DOT__busy) {
                if ((3U == (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt))) {
                    vlSelfRef.__Vdly__tb_spi_master__DOT__sclk 
                        = (1U & (~ (IData)(vlSelfRef.tb_spi_master__DOT__sclk)));
                    vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
                    if (vlSelfRef.tb_spi_master__DOT__sclk) {
                        if ((8U == (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt))) {
                            vlSelfRef.tb_spi_master__DOT__busy = 0U;
                            vlSelfRef.tb_spi_master__DOT__done = 1U;
                            vlSelfRef.tb_spi_master__DOT__cs_n = 1U;
                            vlSelfRef.tb_spi_master__DOT__rx_data 
                                = vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift;
                        } else {
                            vlSelfRef.tb_spi_master__DOT__mosi 
                                = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift) 
                                         >> 7U));
                            vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift 
                                = (0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift) 
                                                  << 1U));
                        }
                    } else {
                        vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift 
                            = ((0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.tb_spi_master__DOT__miso));
                        vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt)));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt)));
                }
            } else if (vlSelfRef.tb_spi_master__DOT__start) {
                vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift 
                    = (0x000000feU & ((IData)(vlSelfRef.tb_spi_master__DOT__tx_data) 
                                      << 1U));
                vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt = 0U;
                vlSelfRef.tb_spi_master__DOT__busy = 1U;
                vlSelfRef.tb_spi_master__DOT__cs_n = 0U;
                vlSelfRef.tb_spi_master__DOT__mosi 
                    = (1U & ((IData)(vlSelfRef.tb_spi_master__DOT__tx_data) 
                             >> 7U));
                vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
            }
        } else {
            vlSelfRef.tb_spi_master__DOT__dut__DOT__tx_shift = 0U;
            vlSelfRef.tb_spi_master__DOT__dut__DOT__rx_shift = 0U;
            vlSelfRef.tb_spi_master__DOT__dut__DOT__edge_cnt = 0U;
            vlSelfRef.tb_spi_master__DOT__busy = 0U;
            vlSelfRef.tb_spi_master__DOT__done = 0U;
            vlSelfRef.__Vdly__tb_spi_master__DOT__sclk = 0U;
            vlSelfRef.tb_spi_master__DOT__mosi = 0U;
            vlSelfRef.tb_spi_master__DOT__cs_n = 1U;
            vlSelfRef.tb_spi_master__DOT__rx_data = 0U;
            vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0U;
        }
        vlSelfRef.tb_spi_master__DOT__sclk = vlSelfRef.__Vdly__tb_spi_master__DOT__sclk;
        vlSelfRef.tb_spi_master__DOT__dut__DOT__div_cnt 
            = vlSelfRef.__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt;
    }
}

void Vtb_spi_master___024root___timing_ready(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___timing_ready\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h258dea4e__0.ready("@(negedge tb_spi_master.clk)");
    }
}

void Vtb_spi_master___024root___timing_resume(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___timing_resume\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h258dea4e__0.moveToResumeQueue(
                                                          "@(negedge tb_spi_master.clk)");
    vlSelfRef.__VtrigSched_h258dea4e__0.resume("@(negedge tb_spi_master.clk)");
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_spi_master___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_spi_master___024root___eval_phase__act(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_phase__act\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_spi_master___024root___eval_triggers_vec__act(vlSelf);
    Vtb_spi_master___024root___timing_ready(vlSelf);
    Vtb_spi_master___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_spi_master___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_spi_master___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_spi_master___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_spi_master___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_spi_master___024root___eval_phase__inact(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_phase__inact\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb\\tb_spi_master.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_spi_master___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_spi_master___024root___eval_phase__nba(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_phase__nba\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_spi_master___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_spi_master___024root___eval_nba(vlSelf);
        Vtb_spi_master___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_spi_master___024root___eval(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_spi_master___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb\\tb_spi_master.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb\\tb_spi_master.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_spi_master___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb\\tb_spi_master.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_spi_master___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_spi_master___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_spi_master___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0(Vtb_spi_master___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root____VbeforeTrig_h258dea4e__0\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_spi_master__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 
        = vlSelfRef.tb_spi_master__DOT__clk;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h258dea4e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_spi_master___024root___eval_debug_assertions(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_debug_assertions\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
