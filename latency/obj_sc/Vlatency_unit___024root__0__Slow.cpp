// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlatency_unit.h for the primary calling header

#include "Vlatency_unit__pch.h"

VL_ATTR_COLD void Vlatency_unit___024root___eval_static(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_static\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__clk__0 
        = vlSelfRef.__Vcellinp__latency_unit__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__rst_n__0 
        = vlSelfRef.__Vcellinp__latency_unit__rst_n;
}

VL_ATTR_COLD void Vlatency_unit___024root___eval_initial(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_initial\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlatency_unit___024root___eval_final(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_final\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlatency_unit___024root___eval_phase__stl(Vlatency_unit___024root* vlSelf);

VL_ATTR_COLD void Vlatency_unit___024root___eval_settle(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_settle\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vlatency_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl\\latency_unit.v", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vlatency_unit___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vlatency_unit___024root___eval_triggers_vec__stl(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_triggers_vec__stl\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vlatency_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vlatency_unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vlatency_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vlatency_unit___024root___stl_sequent__TOP__0(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___stl_sequent__TOP__0\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(32, vlSelfRef.out32_data, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.out32_valid, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q);
    VL_ASSIGN_SII(16, vlSelfRef.out16_data, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.out16_valid, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q);
    VL_ASSIGN_SII(8, vlSelfRef.out8_data, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q);
    VL_ASSIGN_SII(1, vlSelfRef.out8_valid, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__latency_unit__in_data, vlSelfRef.in_data);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__latency_unit__in_dtype, vlSelfRef.in_dtype);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__in_valid, vlSelfRef.in_valid);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__clk, vlSelfRef.clk);
}

VL_ATTR_COLD void Vlatency_unit___024root___eval_stl(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_stl\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VL_ASSIGN_SII(32, vlSelfRef.out32_data, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.out32_valid, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q);
        VL_ASSIGN_SII(16, vlSelfRef.out16_data, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.out16_valid, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q);
        VL_ASSIGN_SII(8, vlSelfRef.out8_data, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q);
        VL_ASSIGN_SII(1, vlSelfRef.out8_valid, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q);
        VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__latency_unit__in_data, vlSelfRef.in_data);
        VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__latency_unit__in_dtype, vlSelfRef.in_dtype);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__in_valid, vlSelfRef.in_valid);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__clk, vlSelfRef.clk);
    }
}

VL_ATTR_COLD bool Vlatency_unit___024root___eval_phase__stl(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_phase__stl\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlatency_unit___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlatency_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vlatency_unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vlatency_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vlatency_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vlatency_unit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vlatency_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vlatency_unit___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__latency_unit__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge __Vcellinp__latency_unit__rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlatency_unit___024root___ctor_var_reset(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___ctor_var_reset\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellinp__latency_unit__in_data = 0;
    vlSelf->__Vcellinp__latency_unit__in_dtype = 0;
    vlSelf->__Vcellinp__latency_unit__in_valid = 0;
    vlSelf->__Vcellinp__latency_unit__rst_n = 0;
    vlSelf->__Vcellinp__latency_unit__clk = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12970123069720149369ull);
    vlSelf->latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4121656253698198199ull);
    vlSelf->latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10269455619163409403ull);
    vlSelf->latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9235151265364346981ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12382279735192424342ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9216664715277268769ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2323610750061331962ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 125521710252634213ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14707495710762430981ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 454922605259054303ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9890892910234621640ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12538995682413826035ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7878116243907514828ull);
    vlSelf->latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1684575745372151421ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18303780233583863418ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12516333970513874111ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2005765670550677822ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15094157540815197149ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14152684931640197098ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5377060952109402124ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5633681494493905667ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17930492718517264274ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17732808479972741979ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9113817049226893469ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16692660023402137976ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14460053149052757651ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5563271855012772406ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2289801937441305753ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11122781435196650275ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3907609980105614358ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5585252007970631195ull);
    vlSelf->latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2531027317708838244ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__latency_unit__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__latency_unit__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
