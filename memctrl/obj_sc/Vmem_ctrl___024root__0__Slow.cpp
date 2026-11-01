// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_ctrl.h for the primary calling header

#include "Vmem_ctrl__pch.h"

VL_ATTR_COLD void Vmem_ctrl___024root___eval_static(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_static\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__clk__0 
        = vlSelfRef.__Vcellinp__mem_ctrl__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__rst_n__0 
        = vlSelfRef.__Vcellinp__mem_ctrl__rst_n;
}

VL_ATTR_COLD void Vmem_ctrl___024root___eval_initial(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_initial\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_mem_ctrl__DOT__k;
    __Vinline__eval_initial__TOP_mem_ctrl__DOT__k = 0;
    // Body
    __Vinline__eval_initial__TOP_mem_ctrl__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vinline__eval_initial__TOP_mem_ctrl__DOT__k)) {
        vlSelfRef.mem_ctrl__DOT__mem[(0x000000ffU & __Vinline__eval_initial__TOP_mem_ctrl__DOT__k)] = 0U;
        __Vinline__eval_initial__TOP_mem_ctrl__DOT__k 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_mem_ctrl__DOT__k);
    }
}

VL_ATTR_COLD void Vmem_ctrl___024root___eval_initial__TOP(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_initial__TOP\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ mem_ctrl__DOT__k;
    mem_ctrl__DOT__k = 0;
    // Body
    mem_ctrl__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000100U, mem_ctrl__DOT__k)) {
        vlSelfRef.mem_ctrl__DOT__mem[(0x000000ffU & mem_ctrl__DOT__k)] = 0U;
        mem_ctrl__DOT__k = ((IData)(1U) + mem_ctrl__DOT__k);
    }
}

VL_ATTR_COLD void Vmem_ctrl___024root___eval_final(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_final\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmem_ctrl___024root___eval_phase__stl(Vmem_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vmem_ctrl___024root___eval_settle(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_settle\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmem_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl\\mem_ctrl.v", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vmem_ctrl___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vmem_ctrl___024root___eval_triggers_vec__stl(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_triggers_vec__stl\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vmem_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmem_ctrl___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmem_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vmem_ctrl___024root___stl_sequent__TOP__0(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___stl_sequent__TOP__0\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(32, vlSelfRef.rmw_old, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.rmw_valid, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q);
    VL_ASSIGN_SII(8, vlSelfRef.wr_addr, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.wr_valid, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q);
    VL_ASSIGN_SII(32, vlSelfRef.rd_data, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.rd_valid, vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__mem_ctrl__req_wdata, vlSelfRef.req_wdata);
    VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__mem_ctrl__req_addr, vlSelfRef.req_addr);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__mem_ctrl__req_type, vlSelfRef.req_type);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__req_valid, vlSelfRef.req_valid);
    vlSelfRef.mem_ctrl__DOT__is_wr = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                      & (1U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
    vlSelfRef.mem_ctrl__DOT__is_rmw = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                       & (2U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
}

VL_ATTR_COLD void Vmem_ctrl___024root___eval_stl(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_stl\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VL_ASSIGN_SII(32, vlSelfRef.rmw_old, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.rmw_valid, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q);
        VL_ASSIGN_SII(8, vlSelfRef.wr_addr, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.wr_valid, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q);
        VL_ASSIGN_SII(32, vlSelfRef.rd_data, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.rd_valid, vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q);
        VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__mem_ctrl__req_wdata, vlSelfRef.req_wdata);
        VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__mem_ctrl__req_addr, vlSelfRef.req_addr);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__clk, vlSelfRef.clk);
        VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__mem_ctrl__req_type, vlSelfRef.req_type);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__req_valid, vlSelfRef.req_valid);
        vlSelfRef.mem_ctrl__DOT__is_wr = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                          & (1U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
        vlSelfRef.mem_ctrl__DOT__is_rmw = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                           & (2U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
    }
}

VL_ATTR_COLD bool Vmem_ctrl___024root___eval_phase__stl(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_phase__stl\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmem_ctrl___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmem_ctrl___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmem_ctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmem_ctrl___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmem_ctrl___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmem_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmem_ctrl___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__mem_ctrl__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge __Vcellinp__mem_ctrl__rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmem_ctrl___024root___ctor_var_reset(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___ctor_var_reset\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellinp__mem_ctrl__req_wdata = 0;
    vlSelf->__Vcellinp__mem_ctrl__req_addr = 0;
    vlSelf->__Vcellinp__mem_ctrl__req_type = 0;
    vlSelf->__Vcellinp__mem_ctrl__req_valid = 0;
    vlSelf->__Vcellinp__mem_ctrl__rst_n = 0;
    vlSelf->__Vcellinp__mem_ctrl__clk = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->mem_ctrl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3227711760880845201ull);
    }
    vlSelf->mem_ctrl__DOT__is_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8115446321178084696ull);
    vlSelf->mem_ctrl__DOT__is_rmw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4129995479484706268ull);
    vlSelf->mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6164176615032855318ull);
    vlSelf->mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12948930512791596495ull);
    vlSelf->mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1050147497327155564ull);
    vlSelf->mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15986143127946549514ull);
    vlSelf->mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331817913707977022ull);
    vlSelf->mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10316896526985630776ull);
    vlSelf->mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1483538581967276683ull);
    vlSelf->mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9803447250770433827ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4912368059178267708ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4745728709338596758ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 108286921714078927ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6844872912603678987ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340871899690622308ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18232268275196704396ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18406293590755095005ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14918824724133726863ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826597762451674644ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5963925969918719273ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9568302360621757573ull);
    vlSelf->mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2181029154203925113ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
