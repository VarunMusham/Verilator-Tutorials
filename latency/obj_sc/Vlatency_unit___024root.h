// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlatency_unit.h for the primary calling header

#ifndef VERILATED_VLATENCY_UNIT___024ROOT_H_
#define VERILATED_VLATENCY_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"


class Vlatency_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlatency_unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __Vcellinp__latency_unit__in_dtype;
    CData/*0:0*/ __Vcellinp__latency_unit__in_valid;
    CData/*0:0*/ __Vcellinp__latency_unit__rst_n;
    CData/*0:0*/ __Vcellinp__latency_unit__clk;
    CData/*0:0*/ latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*7:0*/ latency_unit__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
    CData/*0:0*/ latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*7:0*/ latency_unit__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q;
    CData/*0:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q;
    CData/*0:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__latency_unit__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__latency_unit__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
    SData/*15:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
    SData/*15:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
    SData/*15:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
    SData/*15:0*/ latency_unit__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q;
    IData/*31:0*/ __Vcellinp__latency_unit__in_data;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
    IData/*31:0*/ latency_unit__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<bool> rst_n;
    sc_core::sc_in<bool> in_valid;
    sc_core::sc_in<uint32_t> in_dtype;
    sc_core::sc_out<bool> out8_valid;
    sc_core::sc_out<uint32_t> out8_data;
    sc_core::sc_out<bool> out16_valid;
    sc_core::sc_out<bool> out32_valid;
    sc_core::sc_out<uint32_t> out16_data;
    sc_core::sc_in<uint32_t> in_data;
    sc_core::sc_out<uint32_t> out32_data;

    // INTERNAL VARIABLES
    Vlatency_unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vlatency_unit___024root(Vlatency_unit__Syms* symsp, const char* namep);
    ~Vlatency_unit___024root();
    VL_UNCOPYABLE(Vlatency_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
