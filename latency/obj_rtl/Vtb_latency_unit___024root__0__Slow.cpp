// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_latency_unit.h for the primary calling header

#include "Vtb_latency_unit__pch.h"

void Vtb_latency_unit___024root___timing_ready(Vtb_latency_unit___024root* vlSelf);

VL_ATTR_COLD void Vtb_latency_unit___024root___eval_static(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_static\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_latency_unit__DOT__push__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14746094371071238820ull);
    vlSelf->tb_latency_unit__DOT__observe__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4072141335993792849ull);
    vlSelf->tb_latency_unit__DOT__observe__Vstatic__lat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8517166685723055286ull);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0 
        = vlSelfRef.tb_latency_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__rst_n__0 
        = vlSelfRef.tb_latency_unit__DOT__rst_n;
    Vtb_latency_unit___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_latency_unit___024root___eval_static__TOP(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_static__TOP\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_latency_unit__DOT__push__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14746094371071238820ull);
    vlSelf->tb_latency_unit__DOT__observe__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4072141335993792849ull);
    vlSelf->tb_latency_unit__DOT__observe__Vstatic__lat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8517166685723055286ull);
}

VL_ATTR_COLD void Vtb_latency_unit___024root___eval_initial__TOP(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_initial__TOP\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_latency_unit__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_latency_unit___024root___eval_final(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_final\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_latency_unit___024root___eval_settle(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_settle\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_latency_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_latency_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_latency_unit___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_latency_unit.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_latency_unit.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_latency_unit.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_latency_unit___024root___ctor_var_reset(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___ctor_var_reset\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_latency_unit__DOT____Vlvbound_h00f63010__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_latency_unit__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14161055221982785483ull);
    vlSelf->tb_latency_unit__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13580839416541726329ull);
    vlSelf->tb_latency_unit__DOT__in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6265899811945415920ull);
    vlSelf->tb_latency_unit__DOT__in_dtype = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13482988033909094466ull);
    vlSelf->tb_latency_unit__DOT__in_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10405955266205489294ull);
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__s_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16505028144433183002ull);
    }
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__s_dtype[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 894414851182557164ull);
    }
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__s_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 799293571609378405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2400; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__iss_cyc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14023314519427375422ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2400; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__iss_exp[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2130477545223011995ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__head[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10062015179034881164ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__tail[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1823043007571573066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__lat_cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17067062017389897450ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__lat_min[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12957207817194717055ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__lat_max[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12775895512995154820ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_latency_unit__DOT__lat_sum[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8344003053967139756ull);
    }
    vlSelf->tb_latency_unit__DOT__rnd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8191795217845657068ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6485641190926246121ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16870096043199729099ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498512427207239642ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11179840826225879473ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9536089196507455096ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7662846540439291327ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11704964230839488359ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6857908111486749188ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17152436526193876105ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12448414721599125969ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067817347617701492ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15010994676588050356ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10596729089628219160ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13140839132835565480ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13522102017305772792ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5984757325318651070ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5522345239559477462ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 647681908575094271ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9204178584120782459ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10243477869944748943ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14201376222402119488ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4340583256805923641ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9332196913570517521ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4542962137318631035ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17837795920412920094ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4161141146199319814ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16652343608028992440ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14140361254581943452ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14677690848151691688ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18446635524627077711ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14849039459597898382ull);
    vlSelf->tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4218982181978215486ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_latency_unit__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
