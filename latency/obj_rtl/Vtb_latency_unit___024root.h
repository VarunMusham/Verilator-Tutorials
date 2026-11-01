// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_latency_unit.h for the primary calling header

#ifndef VERILATED_VTB_LATENCY_UNIT___024ROOT_H_
#define VERILATED_VTB_LATENCY_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_latency_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_latency_unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_latency_unit__DOT____Vlvbound_h00f63010__0;
    CData/*0:0*/ tb_latency_unit__DOT__clk;
    CData/*0:0*/ tb_latency_unit__DOT__rst_n;
    CData/*0:0*/ tb_latency_unit__DOT__in_valid;
    CData/*1:0*/ tb_latency_unit__DOT__in_dtype;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*7:0*/ tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*7:0*/ tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q;
    CData/*0:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_latency_unit__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
    SData/*15:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
    SData/*15:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
    SData/*15:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
    SData/*15:0*/ tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__in_data;
    IData/*31:0*/ tb_latency_unit__DOT__rnd;
    IData/*31:0*/ tb_latency_unit__DOT__push__Vstatic__idx;
    IData/*31:0*/ tb_latency_unit__DOT__observe__Vstatic__idx;
    IData/*31:0*/ tb_latency_unit__DOT__observe__Vstatic__lat;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
    IData/*31:0*/ tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*0:0*/, 800> tb_latency_unit__DOT__s_valid;
    VlUnpacked<CData/*1:0*/, 800> tb_latency_unit__DOT__s_dtype;
    VlUnpacked<IData/*31:0*/, 800> tb_latency_unit__DOT__s_data;
    VlUnpacked<IData/*31:0*/, 2400> tb_latency_unit__DOT__iss_cyc;
    VlUnpacked<IData/*31:0*/, 2400> tb_latency_unit__DOT__iss_exp;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__head;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__tail;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__lat_cnt;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__lat_min;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__lat_max;
    VlUnpacked<IData/*31:0*/, 3> tb_latency_unit__DOT__lat_sum;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbea6000c__0;

    // INTERNAL VARIABLES
    Vtb_latency_unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_latency_unit___024root(Vtb_latency_unit__Syms* symsp, const char* namep);
    ~Vtb_latency_unit___024root();
    VL_UNCOPYABLE(Vtb_latency_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
