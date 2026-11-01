// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_spi_master.h for the primary calling header

#include "Vtb_spi_master__pch.h"

void Vtb_spi_master___024root___timing_ready(Vtb_spi_master___024root* vlSelf);

VL_ATTR_COLD void Vtb_spi_master___024root___eval_static(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_static\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_master__DOT__rst_n = 0U;
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    vlSelfRef.tb_spi_master__DOT__tx_data = 0U;
    vlSelfRef.tb_spi_master__DOT__errors = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__cs_n__0 
        = vlSelfRef.tb_spi_master__DOT__cs_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0 
        = vlSelfRef.tb_spi_master__DOT__sclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 
        = vlSelfRef.tb_spi_master__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_spi_master__DOT__rst_n__0 = 0U;
    Vtb_spi_master___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_static__TOP(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_static__TOP\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_master__DOT__rst_n = 0U;
    vlSelfRef.tb_spi_master__DOT__start = 0U;
    vlSelfRef.tb_spi_master__DOT__tx_data = 0U;
    vlSelfRef.tb_spi_master__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_initial__TOP(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_initial__TOP\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_spi_master__DOT__clk = 0U;
    vlSelfRef.tb_spi_master__DOT__miso = 0U;
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_final(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_final\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_spi_master___024root___eval_settle(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___eval_settle\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_spi_master___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_spi_master___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_spi_master___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge tb_spi_master.cs_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_spi_master.sclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_spi_master.sclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_spi_master.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_spi_master.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge tb_spi_master.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_spi_master___024root___ctor_var_reset(Vtb_spi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_spi_master___024root___ctor_var_reset\n"); );
    Vtb_spi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_spi_master__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10201792865262308443ull);
    vlSelf->tb_spi_master__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4957131034248077407ull);
    vlSelf->tb_spi_master__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18257733541771651496ull);
    vlSelf->tb_spi_master__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16110892359447031220ull);
    vlSelf->tb_spi_master__DOT__sclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17321013590520144463ull);
    vlSelf->tb_spi_master__DOT__mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15586857111977159312ull);
    vlSelf->tb_spi_master__DOT__cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 628746332996180921ull);
    vlSelf->tb_spi_master__DOT__miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 470757405660573913ull);
    vlSelf->tb_spi_master__DOT__slave_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8138811719123402613ull);
    vlSelf->tb_spi_master__DOT__slave_rx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8062886504918159335ull);
    vlSelf->tb_spi_master__DOT__slave_bit = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5188790701784304604ull);
    vlSelf->tb_spi_master__DOT__sclk_rises = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9531462836079561243ull);
    vlSelf->tb_spi_master__DOT__rnd_tx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9899037250663210177ull);
    vlSelf->tb_spi_master__DOT__rnd_stx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5600946118086835404ull);
    vlSelf->tb_spi_master__DOT__dut__DOT__div_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4148853891104550054ull);
    vlSelf->tb_spi_master__DOT__dut__DOT__tx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 693408128364419150ull);
    vlSelf->tb_spi_master__DOT__dut__DOT__rx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5755334654778104214ull);
    vlSelf->tb_spi_master__DOT__dut__DOT__edge_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5055219441143542800ull);
    vlSelf->__Vdly__tb_spi_master__DOT__sclk = 0;
    vlSelf->__Vdly__tb_spi_master__DOT__dut__DOT__div_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__cs_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__sclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_spi_master__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
