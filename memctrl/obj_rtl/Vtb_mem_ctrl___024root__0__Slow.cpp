// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ctrl.h for the primary calling header

#include "Vtb_mem_ctrl__pch.h"

void Vtb_mem_ctrl___024root___timing_ready(Vtb_mem_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_static(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_static\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_mem_ctrl__DOT__push__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11803950870620323949ull);
    vlSelf->tb_mem_ctrl__DOT__observe__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5334006528856064395ull);
    vlSelf->tb_mem_ctrl__DOT__observe__Vstatic__lat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16072796604079315261ull);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0 
        = vlSelfRef.tb_mem_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__rst_n__0 
        = vlSelfRef.tb_mem_ctrl__DOT__rst_n;
    Vtb_mem_ctrl___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_static__TOP(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_static__TOP\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_mem_ctrl__DOT__push__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11803950870620323949ull);
    vlSelf->tb_mem_ctrl__DOT__observe__Vstatic__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5334006528856064395ull);
    vlSelf->tb_mem_ctrl__DOT__observe__Vstatic__lat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16072796604079315261ull);
}

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_initial__TOP(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_initial__TOP\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__k;
    tb_mem_ctrl__DOT__dut__DOT__k = 0;
    // Body
    vlSelfRef.tb_mem_ctrl__DOT__clk = 0U;
    tb_mem_ctrl__DOT__dut__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000100U, tb_mem_ctrl__DOT__dut__DOT__k)) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[(0x000000ffU 
                                                   & tb_mem_ctrl__DOT__dut__DOT__k)] = 0U;
        tb_mem_ctrl__DOT__dut__DOT__k = ((IData)(1U) 
                                         + tb_mem_ctrl__DOT__dut__DOT__k);
    }
}

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_final(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_final\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_mem_ctrl___024root___eval_phase__stl(Vtb_mem_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_settle(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_settle\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mem_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb\\tb_mem_ctrl.v", 14, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_mem_ctrl___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_triggers_vec__stl(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_triggers_vec__stl\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_mem_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_mem_ctrl___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_mem_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_mem_ctrl___024root___eval_stl(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_stl\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (1U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (2U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
    }
}

VL_ATTR_COLD bool Vtb_mem_ctrl___024root___eval_phase__stl(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_phase__stl\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_mem_ctrl___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_mem_ctrl___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_mem_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_mem_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_mem_ctrl___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_mem_ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_mem_ctrl.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_mem_ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mem_ctrl___024root___ctor_var_reset(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___ctor_var_reset\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_mem_ctrl__DOT____Vlvbound_h00f63010__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_mem_ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17578538673278430841ull);
    vlSelf->tb_mem_ctrl__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16648528972104137479ull);
    vlSelf->tb_mem_ctrl__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828284285942116040ull);
    vlSelf->tb_mem_ctrl__DOT__req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10845632948923299207ull);
    vlSelf->tb_mem_ctrl__DOT__req_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6251164215617545093ull);
    vlSelf->tb_mem_ctrl__DOT__req_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10808899565126110900ull);
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__s_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10682543460220615777ull);
    }
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__s_type[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11056547181563877925ull);
    }
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__s_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11505663433491721430ull);
    }
    for (int __Vi0 = 0; __Vi0 < 800; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__s_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3784187911417613029ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__gold[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6898310627967621895ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2400; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__q_cyc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10892447139825151362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2400; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__q_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14111567342302556543ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__head[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4186904497282427925ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__tail[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8206293352541980546ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__lat_cnt[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3430238427219596142ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__lat_min[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1461201171439893171ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__lat_max[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13089581605341827757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__lat_sum[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16802799688217100569ull);
    }
    vlSelf->tb_mem_ctrl__DOT__pick = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4857333503412288576ull);
    vlSelf->tb_mem_ctrl__DOT__rnd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16782817623305862501ull);
    vlSelf->tb_mem_ctrl__DOT__rnd2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14874660571411155908ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_mem_ctrl__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12806202087073513797ull);
    }
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__is_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16814126395305332525ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__is_rmw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8068541380379180063ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6897382159637877632ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11583401077106279242ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971373142021768706ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 425873182287596782ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12649220672424779750ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15919545373896285840ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7202407927459142388ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5492791058529949004ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6486154577979485887ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 703364176827031126ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3481113780110305509ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14705123929525803333ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6807009205313748894ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12330853647860821899ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13063244174369333973ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13099447267386993982ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13318825256634026539ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8270156275257793646ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251993207095987119ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11297384686843124630ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 831018504336861574ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9906408361589966864ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7325011729447387957ull);
    vlSelf->tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12501845404687455937ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
