// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlatency_unit.h for the primary calling header

#include "Vlatency_unit__pch.h"

void Vlatency_unit___024root___eval_triggers_vec__ico(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_triggers_vec__ico\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vlatency_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___trigger_anySet__ico\n"); );
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

void Vlatency_unit___024root___ico_sequent__TOP__0(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___ico_sequent__TOP__0\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__latency_unit__in_data, vlSelfRef.in_data);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__latency_unit__in_dtype, vlSelfRef.in_dtype);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__in_valid, vlSelfRef.in_valid);
}

void Vlatency_unit___024root___eval_ico(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_ico\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__clk, vlSelfRef.clk);
        VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__latency_unit__in_data, vlSelfRef.in_data);
        VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__latency_unit__in_dtype, vlSelfRef.in_dtype);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__latency_unit__in_valid, vlSelfRef.in_valid);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vlatency_unit___024root___eval_phase__ico(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_phase__ico\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vlatency_unit___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlatency_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vlatency_unit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vlatency_unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vlatency_unit___024root___eval_triggers_vec__act(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_triggers_vec__act\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__latency_unit__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__clk__0 
        = vlSelfRef.__Vcellinp__latency_unit__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__latency_unit__rst_n__0 
        = vlSelfRef.__Vcellinp__latency_unit__rst_n;
}

bool Vlatency_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___trigger_anySet__act\n"); );
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

void Vlatency_unit___024root___nba_sequent__TOP__0(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___nba_sequent__TOP__0\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
    VL_ASSIGN_SII(8, vlSelfRef.out8_data, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q);
    vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = (0x000000ffU & ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data));
    VL_ASSIGN_SII(16, vlSelfRef.out16_data, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q);
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
    VL_ASSIGN_SII(32, vlSelfRef.out32_data, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q);
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = (0x0000ffffU & ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data);
}

void Vlatency_unit___024root___nba_sequent__TOP__1(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___nba_sequent__TOP__1\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q));
    VL_ASSIGN_SII(1, vlSelfRef.out8_valid, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q);
    vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
              & (0U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
    VL_ASSIGN_SII(1, vlSelfRef.out16_valid, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q);
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q));
    VL_ASSIGN_SII(1, vlSelfRef.out32_valid, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q);
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
              & (1U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
           & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
              & (2U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
}

void Vlatency_unit___024root___eval_nba(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_nba\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
        VL_ASSIGN_SII(8, vlSelfRef.out8_data, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q);
        vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = (0x000000ffU & ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data));
        VL_ASSIGN_SII(16, vlSelfRef.out16_data, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q);
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
        VL_ASSIGN_SII(32, vlSelfRef.out32_data, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q);
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = (0x0000ffffU & ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = ((IData)(1U) + vlSelfRef.__Vcellinp__latency_unit__in_data);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q));
        VL_ASSIGN_SII(1, vlSelfRef.out8_valid, vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q);
        vlSelfRef.latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
                  & (0U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
        VL_ASSIGN_SII(1, vlSelfRef.out16_valid, vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q);
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q));
        VL_ASSIGN_SII(1, vlSelfRef.out32_valid, vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q);
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
                  & (1U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & (IData)(vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__latency_unit__rst_n) 
               & ((IData)(vlSelfRef.__Vcellinp__latency_unit__in_valid) 
                  & (2U == (IData)(vlSelfRef.__Vcellinp__latency_unit__in_dtype))));
    }
}

void Vlatency_unit___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vlatency_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vlatency_unit___024root___eval_phase__act(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_phase__act\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlatency_unit___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlatency_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vlatency_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vlatency_unit___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vlatency_unit___024root___eval_phase__nba(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_phase__nba\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vlatency_unit___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vlatency_unit___024root___eval_nba(vlSelf);
        Vlatency_unit___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vlatency_unit___024root___eval(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vlatency_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl\\latency_unit.v", 9, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vlatency_unit___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlatency_unit___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl\\latency_unit.v", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vlatency_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl\\latency_unit.v", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vlatency_unit___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vlatency_unit___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vlatency_unit___024root___eval_debug_assertions(Vlatency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatency_unit___024root___eval_debug_assertions\n"); );
    Vlatency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
