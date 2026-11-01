// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ctrl.h for the primary calling header

#include "Vtb_mem_ctrl__pch.h"

VlCoroutine Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_mem_ctrl___024root* vlSelf);
VlCoroutine Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_mem_ctrl___024root* vlSelf);

void Vtb_mem_ctrl___024root___eval_initial(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_initial\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k;
    __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k = 0;
    // Body
    vlSelfRef.tb_mem_ctrl__DOT__clk = 0U;
    __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k)) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[(0x000000ffU 
                                                   & __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k)] = 0U;
        __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_tb_mem_ctrl__DOT__dut__DOT__k);
    }
    Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_mem_ctrl___024root____VbeforeTrig_h33e2927c__0(Vtb_mem_ctrl___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_mem_ctrl__DOT__errors;
    tb_mem_ctrl__DOT__errors = 0;
    IData/*31:0*/ tb_mem_ctrl__DOT__i;
    tb_mem_ctrl__DOT__i = 0;
    IData/*31:0*/ tb_mem_ctrl__DOT__cyc;
    tb_mem_ctrl__DOT__cyc = 0;
    IData/*31:0*/ tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__0__c;
    __Vtask_tb_mem_ctrl__DOT__sched__0__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__1__c;
    __Vtask_tb_mem_ctrl__DOT__sched__1__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__2__c;
    __Vtask_tb_mem_ctrl__DOT__sched__2__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__3__c;
    __Vtask_tb_mem_ctrl__DOT__sched__3__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__4__c;
    __Vtask_tb_mem_ctrl__DOT__sched__4__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__5__c;
    __Vtask_tb_mem_ctrl__DOT__sched__5__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__6__c;
    __Vtask_tb_mem_ctrl__DOT__sched__6__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__7__c;
    __Vtask_tb_mem_ctrl__DOT__sched__7__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__8__c;
    __Vtask_tb_mem_ctrl__DOT__sched__8__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__9__c;
    __Vtask_tb_mem_ctrl__DOT__sched__9__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__10__c;
    __Vtask_tb_mem_ctrl__DOT__sched__10__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h17924a54__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13__c;
    __Vtask_tb_mem_ctrl__DOT__sched__13__c = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13__ty;
    __Vtask_tb_mem_ctrl__DOT__sched__13__ty = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13__a;
    __Vtask_tb_mem_ctrl__DOT__sched__13__a = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13__d;
    __Vtask_tb_mem_ctrl__DOT__sched__13__d = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h4a603cd4__0;
    __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h4a603cd4__0 = 0;
    CData/*7:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_hf6ef6441__0;
    __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_hf6ef6441__0 = 0;
    CData/*1:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h17924a54__0 = 0;
    CData/*0:0*/ __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h7843abd6__0;
    __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h7843abd6__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14__tt;
    __Vtask_tb_mem_ctrl__DOT__observe__14__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14__got;
    __Vtask_tb_mem_ctrl__DOT__observe__14__got = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14__now;
    __Vtask_tb_mem_ctrl__DOT__observe__14__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h2b15f78b__0;
    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h1a89392d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_hb9524133__0;
    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_1__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_0__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__15__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__15__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__15__tt = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__16__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__16__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__16__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17__tt;
    __Vtask_tb_mem_ctrl__DOT__observe__17__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17__got;
    __Vtask_tb_mem_ctrl__DOT__observe__17__got = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17__now;
    __Vtask_tb_mem_ctrl__DOT__observe__17__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h2b15f78b__0;
    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h1a89392d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_hb9524133__0;
    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_1__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_0__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__18__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__18__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__18__tt = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__19__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__19__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__19__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20__tt;
    __Vtask_tb_mem_ctrl__DOT__observe__20__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20__got;
    __Vtask_tb_mem_ctrl__DOT__observe__20__got = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20__now;
    __Vtask_tb_mem_ctrl__DOT__observe__20__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h2b15f78b__0;
    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h1a89392d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_hb9524133__0;
    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_1__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_0__lat_of;
    __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__21__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__21__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__21__tt = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__22__Vfuncout;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_mem_ctrl__DOT__lat_of__22__tt;
    __Vfunc_tb_mem_ctrl__DOT__lat_of__22__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__issue__23__ty;
    __Vtask_tb_mem_ctrl__DOT__issue__23__ty = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__issue__23__a;
    __Vtask_tb_mem_ctrl__DOT__issue__23__a = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__issue__23__d;
    __Vtask_tb_mem_ctrl__DOT__issue__23__d = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__issue__23__now;
    __Vtask_tb_mem_ctrl__DOT__issue__23__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24__tt;
    __Vtask_tb_mem_ctrl__DOT__push__24__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24__v;
    __Vtask_tb_mem_ctrl__DOT__push__24__v = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24__now;
    __Vtask_tb_mem_ctrl__DOT__push__24__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_h63c63d99__0;
    __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_h63c63d99__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf47a4800__0;
    __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf47a4800__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf7370a0a__0;
    __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf7370a0a__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25__tt;
    __Vtask_tb_mem_ctrl__DOT__push__25__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25__v;
    __Vtask_tb_mem_ctrl__DOT__push__25__v = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25__now;
    __Vtask_tb_mem_ctrl__DOT__push__25__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_h63c63d99__0;
    __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_h63c63d99__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf47a4800__0;
    __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf47a4800__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf7370a0a__0;
    __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf7370a0a__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26__tt;
    __Vtask_tb_mem_ctrl__DOT__push__26__tt = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26__v;
    __Vtask_tb_mem_ctrl__DOT__push__26__v = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26__now;
    __Vtask_tb_mem_ctrl__DOT__push__26__now = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_h63c63d99__0;
    __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_h63c63d99__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf47a4800__0;
    __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf47a4800__0 = 0;
    IData/*31:0*/ __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf7370a0a__0;
    __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf7370a0a__0 = 0;
    // Body
    tb_mem_ctrl__DOT__errors = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__head[0U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__tail[0U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[0U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_min[0U] = 0x000f4240U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_max[0U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[0U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__head[1U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__tail[1U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[1U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_min[1U] = 0x000f4240U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_max[1U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[1U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__head[2U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__tail[2U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[2U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_min[2U] = 0x000f4240U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_max[2U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[2U] = 0U;
    tb_mem_ctrl__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, tb_mem_ctrl__DOT__i)) {
        vlSelfRef.tb_mem_ctrl__DOT__gold[(0x000000ffU 
                                          & tb_mem_ctrl__DOT__i)] = 0U;
        tb_mem_ctrl__DOT__i = ((IData)(1U) + tb_mem_ctrl__DOT__i);
    }
    tb_mem_ctrl__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000320U, tb_mem_ctrl__DOT__i)) {
        vlSelfRef.tb_mem_ctrl__DOT____Vlvbound_h00f63010__0 = 0U;
        if (VL_LIKELY(((0x031fU >= (0x000003ffU & tb_mem_ctrl__DOT__i))))) {
            vlSelfRef.tb_mem_ctrl__DOT__s_valid[(0x000003ffU 
                                                 & tb_mem_ctrl__DOT__i)] 
                = vlSelfRef.tb_mem_ctrl__DOT____Vlvbound_h00f63010__0;
        }
        tb_mem_ctrl__DOT__i = ((IData)(1U) + tb_mem_ctrl__DOT__i);
    }
    __Vtask_tb_mem_ctrl__DOT__sched__0__c = 0x0000000aU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[10U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h17924a54__0 = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__0__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_hf6ef6441__0 = 5U;
    __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h4a603cd4__0 = 0x0000cafeU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__0__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__0__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__0__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__0____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__1__c = 0x00000014U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[20U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h17924a54__0 = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__1__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_hf6ef6441__0 = 5U;
    __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h4a603cd4__0 = 0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__1__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__1__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__1__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__1____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__2__c = 0x0000001eU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[30U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h17924a54__0 = 2U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__2__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_hf6ef6441__0 = 5U;
    __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h4a603cd4__0 = 0x00000010U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__2__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__2__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__2__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__2____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__3__c = 0x00000028U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[40U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h17924a54__0 = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__3__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_hf6ef6441__0 = 5U;
    __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h4a603cd4__0 = 0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__3__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__3__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__3__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__3____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__4__c = 0x0000003cU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[60U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h17924a54__0 = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__4__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_hf6ef6441__0 = 7U;
    __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h4a603cd4__0 = 0x00001111U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__4__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__4__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__4__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__4____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__5__c = 0x0000003dU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[61U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h17924a54__0 = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__5__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_hf6ef6441__0 = 7U;
    __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h4a603cd4__0 = 0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__5__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__5__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__5__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__5____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__6__c = 0x0000003eU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[62U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h17924a54__0 = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__6__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_hf6ef6441__0 = 7U;
    __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h4a603cd4__0 = 0x00002222U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__6__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__6__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__6__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__6____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__7__c = 0x0000003fU;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[63U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h17924a54__0 = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__7__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_hf6ef6441__0 = 7U;
    __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h4a603cd4__0 = 0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__7__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__7__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__7__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__7____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__8__c = 0x00000050U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[80U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h17924a54__0 = 2U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__8__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_hf6ef6441__0 = 9U;
    __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h4a603cd4__0 = 5U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__8__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__8__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__8__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__8____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__9__c = 0x00000051U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[81U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h17924a54__0 = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__9__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_hf6ef6441__0 = 9U;
    __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h4a603cd4__0 = 0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__9__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__9__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__9__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__9____Vlvbound_h4a603cd4__0;
    }
    __Vtask_tb_mem_ctrl__DOT__sched__10__c = 0x00000052U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[82U] = 1U;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h17924a54__0 = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__10__c)] 
        = __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h17924a54__0;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_hf6ef6441__0 = 0x0aU;
    __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h4a603cd4__0 = 0x0000abcdU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_mem_ctrl__DOT__sched__10__c))))) {
        vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                            & __Vtask_tb_mem_ctrl__DOT__sched__10__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_hf6ef6441__0;
        vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                             & __Vtask_tb_mem_ctrl__DOT__sched__10__c)] 
            = __Vtask_tb_mem_ctrl__DOT__sched__10____Vlvbound_h4a603cd4__0;
    }
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[100U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[100U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[100U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[100U] = 0x00000100U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[101U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[101U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[101U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[101U] = 0x00000101U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[102U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[102U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[102U] = 2U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[102U] = 0x00000102U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[103U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[103U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[103U] = 3U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[103U] = 0x00000103U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[104U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[104U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[104U] = 4U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[104U] = 0x00000104U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[105U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[105U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[105U] = 5U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[105U] = 0x00000105U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[106U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[106U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[106U] = 6U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[106U] = 0x00000106U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[107U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[107U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[107U] = 7U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[107U] = 0x00000107U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[110U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[110U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[110U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[110U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[111U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[111U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[111U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[111U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[112U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[112U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[112U] = 2U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[112U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[113U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[113U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[113U] = 3U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[113U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[114U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[114U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[114U] = 4U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[114U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[115U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[115U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[115U] = 5U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[115U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[116U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[116U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[116U] = 6U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[116U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_valid[117U] = 1U;
    vlSelfRef.tb_mem_ctrl__DOT__s_type[117U] = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__s_addr[117U] = 7U;
    vlSelfRef.tb_mem_ctrl__DOT__s_wdata[117U] = 0U;
    tb_mem_ctrl__DOT__i = 0x000000c8U;
    while (VL_GTS_III(32, 0x000002bcU, tb_mem_ctrl__DOT__i)) {
        vlSelfRef.tb_mem_ctrl__DOT__rnd = VL_RANDOM_I();
        if ((0x0000003cU > VL_MODDIV_III(32, vlSelfRef.tb_mem_ctrl__DOT__rnd, (IData)(0x00000064U)))) {
            vlSelfRef.tb_mem_ctrl__DOT__rnd2 = VL_RANDOM_I();
            vlSelfRef.tb_mem_ctrl__DOT__pick = VL_MODDIV_III(32, vlSelfRef.tb_mem_ctrl__DOT__rnd2, (IData)(0x00000064U));
            __Vtask_tb_mem_ctrl__DOT__sched__13__d 
                = VL_RANDOM_I();
            __Vtask_tb_mem_ctrl__DOT__sched__13__a 
                = (0x0000000fU & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_mem_ctrl__DOT__rnd2, 8U));
            __Vtask_tb_mem_ctrl__DOT__sched__13__ty 
                = (VL_GTS_III(32, 0x00000028U, vlSelfRef.tb_mem_ctrl__DOT__pick)
                    ? 0U : (VL_GTS_III(32, 0x0000004bU, vlSelfRef.tb_mem_ctrl__DOT__pick)
                             ? 1U : 2U));
            __Vtask_tb_mem_ctrl__DOT__sched__13__c 
                = tb_mem_ctrl__DOT__i;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h4a603cd4__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_hf6ef6441__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h17924a54__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h7843abd6__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h7843abd6__0 = 1U;
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h17924a54__0 
                = (3U & __Vtask_tb_mem_ctrl__DOT__sched__13__ty);
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_hf6ef6441__0 
                = (0x000000ffU & __Vtask_tb_mem_ctrl__DOT__sched__13__a);
            __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h4a603cd4__0 
                = __Vtask_tb_mem_ctrl__DOT__sched__13__d;
            if (VL_LIKELY(((0x031fU >= (0x000003ffU 
                                        & __Vtask_tb_mem_ctrl__DOT__sched__13__c))))) {
                vlSelfRef.tb_mem_ctrl__DOT__s_valid[(0x000003ffU 
                                                     & __Vtask_tb_mem_ctrl__DOT__sched__13__c)] 
                    = __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h7843abd6__0;
                vlSelfRef.tb_mem_ctrl__DOT__s_type[(0x000003ffU 
                                                    & __Vtask_tb_mem_ctrl__DOT__sched__13__c)] 
                    = __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h17924a54__0;
                vlSelfRef.tb_mem_ctrl__DOT__s_addr[(0x000003ffU 
                                                    & __Vtask_tb_mem_ctrl__DOT__sched__13__c)] 
                    = __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_hf6ef6441__0;
                vlSelfRef.tb_mem_ctrl__DOT__s_wdata[(0x000003ffU 
                                                     & __Vtask_tb_mem_ctrl__DOT__sched__13__c)] 
                    = __Vtask_tb_mem_ctrl__DOT__sched__13____Vlvbound_h4a603cd4__0;
            }
        }
        tb_mem_ctrl__DOT__i = ((IData)(1U) + tb_mem_ctrl__DOT__i);
    }
    vlSelfRef.tb_mem_ctrl__DOT__rst_n = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__req_valid = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__req_type = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__req_addr = 0U;
    vlSelfRef.tb_mem_ctrl__DOT__req_wdata = 0U;
    tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_mem_ctrl___024root____VbeforeTrig_h33e2927c__0(vlSelf, 
                                                           "@(negedge tb_mem_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h33e2927c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_mem_ctrl.clk)", 
                                                             "tb\\tb_mem_ctrl.v", 
                                                             208);
        tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_mem_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_mem_ctrl__DOT__rst_n = 1U;
    VL_WRITEF_NX("Directed transactions (issue cycle < 200):\n",0);
    tb_mem_ctrl__DOT__cyc = 0U;
    while (VL_GTS_III(32, 0x00000328U, tb_mem_ctrl__DOT__cyc)) {
        Vtb_mem_ctrl___024root____VbeforeTrig_h33e2927c__0(vlSelf, 
                                                           "@(negedge tb_mem_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h33e2927c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_mem_ctrl.clk)", 
                                                             "tb\\tb_mem_ctrl.v", 
                                                             213);
        if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q) {
            __Vtask_tb_mem_ctrl__DOT__observe__14__now 
                = tb_mem_ctrl__DOT__cyc;
            __Vtask_tb_mem_ctrl__DOT__observe__14__got 
                = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__d_q;
            __Vtask_tb_mem_ctrl__DOT__observe__14__tt = 0U;
            __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                ? vlSelfRef.tb_mem_ctrl__DOT__head
                               [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                           : 0U))))) {
                tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                            + tb_mem_ctrl__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on channel %0d at cycle %0d\n",2
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14__tt
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14__now);
            } else {
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__observe__14__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__head
                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__head
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                       : 0U));
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_mem_ctrl__DOT__observe__14__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                          [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_mem_ctrl__DOT__observe__14__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    VL_WRITEF_NX("ERROR: channel %0d got 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14__tt
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__14__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                  [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_mem_ctrl__DOT__lat_of__15__tt 
                    = __Vtask_tb_mem_ctrl__DOT__observe__14__tt;
                __Vfunc_tb_mem_ctrl__DOT__lat_of__15__Vfuncout 
                    = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__15__tt)
                        ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__15__tt)
                                 ? 2U : 6U));
                __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_0__lat_of 
                    = __Vfunc_tb_mem_ctrl__DOT__lat_of__15__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_0__lat_of)))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__16__tt 
                        = __Vtask_tb_mem_ctrl__DOT__observe__14__tt;
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__16__Vfuncout 
                        = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__16__tt)
                            ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__16__tt)
                                     ? 2U : 6U));
                    __Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_1__lat_of 
                        = __Vfunc_tb_mem_ctrl__DOT__lat_of__16__Vfuncout;
                    VL_WRITEF_NX("ERROR: channel %0d latency %0d cycles, expected %0d\n",3
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14__tt
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued %0d -> response %0d  latency %0d  value 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_mem_ctrl__DOT__observe__14__tt)
                                            ? 0x0000005245414420ULL
                                            : ((1U 
                                                == __Vtask_tb_mem_ctrl__DOT__observe__14__tt)
                                                ? 0x0000005752495445ULL
                                                : 0x000000524d572020ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_mem_ctrl__DOT__observe__14__now
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__14__got);
                }
                __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__lat_cnt
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                       : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                         ? vlSelfRef.tb_mem_ctrl__DOT__lat_sum
                        [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                         : 0U) + vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__head[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_min
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_min[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_max
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__14__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_max[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__14__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__14____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q) {
            __Vtask_tb_mem_ctrl__DOT__observe__17__now 
                = tb_mem_ctrl__DOT__cyc;
            __Vtask_tb_mem_ctrl__DOT__observe__17__got 
                = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q;
            __Vtask_tb_mem_ctrl__DOT__observe__17__tt = 1U;
            __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                ? vlSelfRef.tb_mem_ctrl__DOT__head
                               [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                           : 0U))))) {
                tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                            + tb_mem_ctrl__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on channel %0d at cycle %0d\n",2
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17__tt
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17__now);
            } else {
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__observe__17__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__head
                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__head
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                       : 0U));
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_mem_ctrl__DOT__observe__17__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                          [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_mem_ctrl__DOT__observe__17__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    VL_WRITEF_NX("ERROR: channel %0d got 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17__tt
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__17__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                  [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_mem_ctrl__DOT__lat_of__18__tt 
                    = __Vtask_tb_mem_ctrl__DOT__observe__17__tt;
                __Vfunc_tb_mem_ctrl__DOT__lat_of__18__Vfuncout 
                    = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__18__tt)
                        ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__18__tt)
                                 ? 2U : 6U));
                __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_0__lat_of 
                    = __Vfunc_tb_mem_ctrl__DOT__lat_of__18__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_0__lat_of)))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__19__tt 
                        = __Vtask_tb_mem_ctrl__DOT__observe__17__tt;
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__19__Vfuncout 
                        = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__19__tt)
                            ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__19__tt)
                                     ? 2U : 6U));
                    __Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_1__lat_of 
                        = __Vfunc_tb_mem_ctrl__DOT__lat_of__19__Vfuncout;
                    VL_WRITEF_NX("ERROR: channel %0d latency %0d cycles, expected %0d\n",3
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17__tt
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued %0d -> response %0d  latency %0d  value 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_mem_ctrl__DOT__observe__17__tt)
                                            ? 0x0000005245414420ULL
                                            : ((1U 
                                                == __Vtask_tb_mem_ctrl__DOT__observe__17__tt)
                                                ? 0x0000005752495445ULL
                                                : 0x000000524d572020ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_mem_ctrl__DOT__observe__17__now
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__17__got);
                }
                __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__lat_cnt
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                       : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                         ? vlSelfRef.tb_mem_ctrl__DOT__lat_sum
                        [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                         : 0U) + vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__head[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_min
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_min[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_max
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__17__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_max[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__17__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__17____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q) {
            __Vtask_tb_mem_ctrl__DOT__observe__20__now 
                = tb_mem_ctrl__DOT__cyc;
            __Vtask_tb_mem_ctrl__DOT__observe__20__got 
                = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q;
            __Vtask_tb_mem_ctrl__DOT__observe__20__tt = 2U;
            __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                ? vlSelfRef.tb_mem_ctrl__DOT__head
                               [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                           : 0U))))) {
                tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                            + tb_mem_ctrl__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on channel %0d at cycle %0d\n",2
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20__tt
                             , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20__now);
            } else {
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__observe__20__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__head
                          [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__head
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                       : 0U));
                vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_mem_ctrl__DOT__observe__20__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                          [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_mem_ctrl__DOT__observe__20__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    VL_WRITEF_NX("ERROR: channel %0d got 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20__tt
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__20__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_val
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                  [(0x00000fffU & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_mem_ctrl__DOT__lat_of__21__tt 
                    = __Vtask_tb_mem_ctrl__DOT__observe__20__tt;
                __Vfunc_tb_mem_ctrl__DOT__lat_of__21__Vfuncout 
                    = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__21__tt)
                        ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__21__tt)
                                 ? 2U : 6U));
                __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_0__lat_of 
                    = __Vfunc_tb_mem_ctrl__DOT__lat_of__21__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_0__lat_of)))) {
                    tb_mem_ctrl__DOT__errors = ((IData)(1U) 
                                                + tb_mem_ctrl__DOT__errors);
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__22__tt 
                        = __Vtask_tb_mem_ctrl__DOT__observe__20__tt;
                    __Vfunc_tb_mem_ctrl__DOT__lat_of__22__Vfuncout 
                        = ((0U == __Vfunc_tb_mem_ctrl__DOT__lat_of__22__tt)
                            ? 4U : ((1U == __Vfunc_tb_mem_ctrl__DOT__lat_of__22__tt)
                                     ? 2U : 6U));
                    __Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_1__lat_of 
                        = __Vfunc_tb_mem_ctrl__DOT__lat_of__22__Vfuncout;
                    VL_WRITEF_NX("ERROR: channel %0d latency %0d cycles, expected %0d\n",3
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20__tt
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued %0d -> response %0d  latency %0d  value 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_mem_ctrl__DOT__observe__20__tt)
                                            ? 0x0000005245414420ULL
                                            : ((1U 
                                                == __Vtask_tb_mem_ctrl__DOT__observe__20__tt)
                                                ? 0x0000005752495445ULL
                                                : 0x000000524d572020ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_mem_ctrl__DOT__q_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_mem_ctrl__DOT__observe__20__now
                                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_mem_ctrl__DOT__observe__20__got);
                }
                __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__lat_cnt
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                       : 0U));
                __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                         ? vlSelfRef.tb_mem_ctrl__DOT__lat_sum
                        [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                         : 0U) + vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__head[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__lat_sum[(3U 
                                                         & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_min
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_min[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))
                                 ? vlSelfRef.tb_mem_ctrl__DOT__lat_max
                                [(3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)]
                                 : 0U))) {
                    __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_mem_ctrl__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__observe__20__tt))))) {
                        vlSelfRef.tb_mem_ctrl__DOT__lat_max[(3U 
                                                             & __Vtask_tb_mem_ctrl__DOT__observe__20__tt)] 
                            = __Vtask_tb_mem_ctrl__DOT__observe__20____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if ((VL_GTS_III(32, 0x00000320U, tb_mem_ctrl__DOT__cyc) 
             & ((0x031fU >= (0x000003ffU & tb_mem_ctrl__DOT__cyc)) 
                && vlSelfRef.tb_mem_ctrl__DOT__s_valid
                [(0x000003ffU & tb_mem_ctrl__DOT__cyc)]))) {
            vlSelfRef.tb_mem_ctrl__DOT__req_valid = 1U;
            if ((0x031fU >= (0x000003ffU & tb_mem_ctrl__DOT__cyc))) {
                vlSelfRef.tb_mem_ctrl__DOT__req_type 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_type
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
                vlSelfRef.tb_mem_ctrl__DOT__req_addr 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_addr
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
                vlSelfRef.tb_mem_ctrl__DOT__req_wdata 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_wdata
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
                __Vtask_tb_mem_ctrl__DOT__issue__23__d 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_wdata
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
                __Vtask_tb_mem_ctrl__DOT__issue__23__a 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_addr
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
                __Vtask_tb_mem_ctrl__DOT__issue__23__ty 
                    = vlSelfRef.tb_mem_ctrl__DOT__s_type
                    [(0x000003ffU & tb_mem_ctrl__DOT__cyc)];
            } else {
                vlSelfRef.tb_mem_ctrl__DOT__req_type = 0U;
                vlSelfRef.tb_mem_ctrl__DOT__req_addr = 0U;
                vlSelfRef.tb_mem_ctrl__DOT__req_wdata = 0U;
                __Vtask_tb_mem_ctrl__DOT__issue__23__d = 0U;
                __Vtask_tb_mem_ctrl__DOT__issue__23__a = 0U;
                __Vtask_tb_mem_ctrl__DOT__issue__23__ty = 0U;
            }
            __Vtask_tb_mem_ctrl__DOT__issue__23__now 
                = tb_mem_ctrl__DOT__cyc;
            if ((0U == __Vtask_tb_mem_ctrl__DOT__issue__23__ty)) {
                __Vtask_tb_mem_ctrl__DOT__push__24__now 
                    = __Vtask_tb_mem_ctrl__DOT__issue__23__now;
                __Vtask_tb_mem_ctrl__DOT__push__24__v 
                    = vlSelfRef.tb_mem_ctrl__DOT__gold
                    [(0x000000ffU & __Vtask_tb_mem_ctrl__DOT__issue__23__a)];
                __Vtask_tb_mem_ctrl__DOT__push__24__tt = 0U;
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_h63c63d99__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf47a4800__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf7370a0a__0 = 0;
                vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__push__24__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__24__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                          [(3U & __Vtask_tb_mem_ctrl__DOT__push__24__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf7370a0a__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__24__now;
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf47a4800__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__24__v;
                if (VL_LIKELY(((0x095fU >= (0x00000fffU 
                                            & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__q_cyc[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf7370a0a__0;
                    vlSelfRef.tb_mem_ctrl__DOT__q_val[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_hf47a4800__0;
                }
                __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_h63c63d99__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__24__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__push__24__tt)]
                                       : 0U));
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__24__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__tail[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__push__24__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__24____Vlvbound_h63c63d99__0;
                }
            } else if ((1U == __Vtask_tb_mem_ctrl__DOT__issue__23__ty)) {
                vlSelfRef.tb_mem_ctrl__DOT__gold[(0x000000ffU 
                                                  & __Vtask_tb_mem_ctrl__DOT__issue__23__a)] 
                    = __Vtask_tb_mem_ctrl__DOT__issue__23__d;
                __Vtask_tb_mem_ctrl__DOT__push__25__now 
                    = __Vtask_tb_mem_ctrl__DOT__issue__23__now;
                __Vtask_tb_mem_ctrl__DOT__push__25__v 
                    = __Vtask_tb_mem_ctrl__DOT__issue__23__a;
                __Vtask_tb_mem_ctrl__DOT__push__25__tt = 1U;
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_h63c63d99__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf47a4800__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf7370a0a__0 = 0;
                vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__push__25__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__25__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                          [(3U & __Vtask_tb_mem_ctrl__DOT__push__25__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf7370a0a__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__25__now;
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf47a4800__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__25__v;
                if (VL_LIKELY(((0x095fU >= (0x00000fffU 
                                            & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__q_cyc[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf7370a0a__0;
                    vlSelfRef.tb_mem_ctrl__DOT__q_val[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_hf47a4800__0;
                }
                __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_h63c63d99__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__25__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__push__25__tt)]
                                       : 0U));
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__25__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__tail[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__push__25__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__25____Vlvbound_h63c63d99__0;
                }
            } else {
                __Vtask_tb_mem_ctrl__DOT__push__26__now 
                    = __Vtask_tb_mem_ctrl__DOT__issue__23__now;
                __Vtask_tb_mem_ctrl__DOT__push__26__v 
                    = vlSelfRef.tb_mem_ctrl__DOT__gold
                    [(0x000000ffU & __Vtask_tb_mem_ctrl__DOT__issue__23__a)];
                __Vtask_tb_mem_ctrl__DOT__push__26__tt = 2U;
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_h63c63d99__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf47a4800__0 = 0;
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf7370a0a__0 = 0;
                vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_mem_ctrl__DOT__push__26__tt) 
                       + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__26__tt))
                           ? vlSelfRef.tb_mem_ctrl__DOT__tail
                          [(3U & __Vtask_tb_mem_ctrl__DOT__push__26__tt)]
                           : 0U));
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf7370a0a__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__26__now;
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf47a4800__0 
                    = __Vtask_tb_mem_ctrl__DOT__push__26__v;
                if (VL_LIKELY(((0x095fU >= (0x00000fffU 
                                            & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__q_cyc[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf7370a0a__0;
                    vlSelfRef.tb_mem_ctrl__DOT__q_val[(0x00000fffU 
                                                       & vlSelfRef.tb_mem_ctrl__DOT__push__Vstatic__idx)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_hf47a4800__0;
                }
                __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_h63c63d99__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__26__tt))
                                       ? vlSelfRef.tb_mem_ctrl__DOT__tail
                                      [(3U & __Vtask_tb_mem_ctrl__DOT__push__26__tt)]
                                       : 0U));
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_mem_ctrl__DOT__push__26__tt))))) {
                    vlSelfRef.tb_mem_ctrl__DOT__tail[(3U 
                                                      & __Vtask_tb_mem_ctrl__DOT__push__26__tt)] 
                        = __Vtask_tb_mem_ctrl__DOT__push__26____Vlvbound_h63c63d99__0;
                }
                vlSelfRef.tb_mem_ctrl__DOT__gold[(0x000000ffU 
                                                  & __Vtask_tb_mem_ctrl__DOT__issue__23__a)] 
                    = (vlSelfRef.tb_mem_ctrl__DOT__gold
                       [(0x000000ffU & __Vtask_tb_mem_ctrl__DOT__issue__23__a)] 
                       + __Vtask_tb_mem_ctrl__DOT__issue__23__d);
            }
        } else {
            vlSelfRef.tb_mem_ctrl__DOT__req_valid = 0U;
        }
        tb_mem_ctrl__DOT__cyc = ((IData)(1U) + tb_mem_ctrl__DOT__cyc);
    }
    tb_mem_ctrl__DOT__i = 0U;
    if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__head[0U] 
                      != vlSelfRef.tb_mem_ctrl__DOT__tail[0U])))) {
        tb_mem_ctrl__DOT__errors = ((IData)(1U) + tb_mem_ctrl__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on channel 0\n",1
                     , '~',32,(vlSelfRef.tb_mem_ctrl__DOT__tail[0U] 
                               - vlSelfRef.tb_mem_ctrl__DOT__head[0U]));
    }
    tb_mem_ctrl__DOT__i = 1U;
    if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__head[1U] 
                      != vlSelfRef.tb_mem_ctrl__DOT__tail[1U])))) {
        tb_mem_ctrl__DOT__errors = ((IData)(1U) + tb_mem_ctrl__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on channel 1\n",1
                     , '~',32,(vlSelfRef.tb_mem_ctrl__DOT__tail[1U] 
                               - vlSelfRef.tb_mem_ctrl__DOT__head[1U]));
    }
    tb_mem_ctrl__DOT__i = 2U;
    if (VL_UNLIKELY(((vlSelfRef.tb_mem_ctrl__DOT__head[2U] 
                      != vlSelfRef.tb_mem_ctrl__DOT__tail[2U])))) {
        tb_mem_ctrl__DOT__errors = ((IData)(1U) + tb_mem_ctrl__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on channel 2\n",1
                     , '~',32,(vlSelfRef.tb_mem_ctrl__DOT__tail[2U] 
                               - vlSelfRef.tb_mem_ctrl__DOT__head[2U]));
    }
    tb_mem_ctrl__DOT__i = 3U;
    VL_WRITEF_NX("\nLatency summary (cycles): txn    count  min  avg  max  spec\n",0);
    tb_mem_ctrl__DOT__i = 0U;
    VL_WRITEF_NX("  READ   %6d  %3d  %3d  %3d    4\n",4
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[0U]
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_min[0U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[0U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_mem_ctrl__DOT__lat_sum[0U], vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[0U])
                            : 0U), '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_max[0U]);
    tb_mem_ctrl__DOT__i = 1U;
    VL_WRITEF_NX("  WRITE  %6d  %3d  %3d  %3d    2\n",4
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[1U]
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_min[1U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[1U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_mem_ctrl__DOT__lat_sum[1U], vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[1U])
                            : 0U), '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_max[1U]);
    tb_mem_ctrl__DOT__i = 2U;
    VL_WRITEF_NX("  RMW    %6d  %3d  %3d  %3d    6\n",4
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[2U]
                 , '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_min[2U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[2U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_mem_ctrl__DOT__lat_sum[2U], vlSelfRef.tb_mem_ctrl__DOT__lat_cnt[2U])
                            : 0U), '~',32,vlSelfRef.tb_mem_ctrl__DOT__lat_max[2U]);
    tb_mem_ctrl__DOT__i = 3U;
    if (VL_LIKELY(((0U == tb_mem_ctrl__DOT__errors)))) {
        VL_WRITEF_NX("PASS: all transactions correct and at the specified latency\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mem_ctrl.v:248: Assertion failed in %m: FAIL: %0d errors\n",4, 'M',vlSymsp->name(),"tb_mem_ctrl", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_mem_ctrl__DOT__errors);
        VL_STOP_MT("tb\\tb_mem_ctrl.v", 248, "", false);
    }
    VL_FINISH_MT("tb\\tb_mem_ctrl.v", 249, "");
    co_return;
}

VlCoroutine Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb\\tb_mem_ctrl.v", 
                                             51);
        vlSelfRef.tb_mem_ctrl__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_mem_ctrl__DOT__clk)));
    }
    co_return;
}

void Vtb_mem_ctrl___024root___eval_triggers_vec__act(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_triggers_vec__act\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((~ (IData)(vlSelfRef.tb_mem_ctrl__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_mem_ctrl__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0 
        = vlSelfRef.tb_mem_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__rst_n__0 
        = vlSelfRef.tb_mem_ctrl__DOT__rst_n;
}

bool Vtb_mem_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___trigger_anySet__act\n"); );
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

void Vtb_mem_ctrl___024root___act_sequent__TOP__0(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___act_sequent__TOP__0\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw = 
        ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
         & (2U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
}

void Vtb_mem_ctrl___024root___eval_act(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_act\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (1U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (2U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
    }
}

void Vtb_mem_ctrl___024root___nba_sequent__TOP__0(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___nba_sequent__TOP__0\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    // Body
    __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0U;
    __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0U;
    if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr) {
        __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0 
            = vlSelfRef.tb_mem_ctrl__DOT__req_wdata;
        __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0 
            = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
        __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw) {
        __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1 
            = (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
               [vlSelfRef.tb_mem_ctrl__DOT__req_addr] 
               + vlSelfRef.tb_mem_ctrl__DOT__req_wdata);
        __VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1 
            = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
        __VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 1U;
    }
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
        [vlSelfRef.tb_mem_ctrl__DOT__req_addr];
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
        [vlSelfRef.tb_mem_ctrl__DOT__req_addr];
    if (__VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[__VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    }
    if (__VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[__VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1] 
            = __VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    }
}

void Vtb_mem_ctrl___024root___nba_sequent__TOP__1(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___nba_sequent__TOP__1\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
              & (0U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type))));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw));
}

void Vtb_mem_ctrl___024root___eval_nba(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_nba\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 0U;
        if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb_mem_ctrl__DOT__req_wdata;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
            __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0 = 1U;
        }
        if (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1 
                = (vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
                   [vlSelfRef.tb_mem_ctrl__DOT__req_addr] 
                   + vlSelfRef.tb_mem_ctrl__DOT__req_wdata);
            __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1 
                = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
            __Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1 = 1U;
        }
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__req_addr;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
            [vlSelfRef.tb_mem_ctrl__DOT__req_addr];
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem
            [vlSelfRef.tb_mem_ctrl__DOT__req_addr];
        if (__Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v0) {
            vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v0;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__tb_mem_ctrl__DOT__dut__DOT__mem__v1) {
            vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__tb_mem_ctrl__DOT__dut__DOT__mem__v1] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__tb_mem_ctrl__DOT__dut__DOT__mem__v1;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
                  & (0U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type))));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_wr 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (1U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
        vlSelfRef.tb_mem_ctrl__DOT__dut__DOT__is_rmw 
            = ((IData)(vlSelfRef.tb_mem_ctrl__DOT__req_valid) 
               & (2U == (IData)(vlSelfRef.tb_mem_ctrl__DOT__req_type)));
    }
}

void Vtb_mem_ctrl___024root___timing_ready(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___timing_ready\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h33e2927c__0.ready("@(negedge tb_mem_ctrl.clk)");
    }
}

void Vtb_mem_ctrl___024root___timing_resume(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___timing_resume\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h33e2927c__0.moveToResumeQueue(
                                                          "@(negedge tb_mem_ctrl.clk)");
    vlSelfRef.__VtrigSched_h33e2927c__0.resume("@(negedge tb_mem_ctrl.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_mem_ctrl___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_mem_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mem_ctrl___024root___eval_phase__act(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_phase__act\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mem_ctrl___024root___eval_triggers_vec__act(vlSelf);
    Vtb_mem_ctrl___024root___timing_ready(vlSelf);
    Vtb_mem_ctrl___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mem_ctrl___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mem_ctrl___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_mem_ctrl___024root___timing_resume(vlSelf);
        Vtb_mem_ctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mem_ctrl___024root___eval_phase__inact(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_phase__inact\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb\\tb_mem_ctrl.v", 14, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mem_ctrl___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_mem_ctrl___024root___eval_phase__nba(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_phase__nba\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mem_ctrl___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_mem_ctrl___024root___eval_nba(vlSelf);
        Vtb_mem_ctrl___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_mem_ctrl___024root___eval(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mem_ctrl___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb\\tb_mem_ctrl.v", 14, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb\\tb_mem_ctrl.v", 14, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_mem_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb\\tb_mem_ctrl.v", 14, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_mem_ctrl___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_mem_ctrl___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_mem_ctrl___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_mem_ctrl___024root____VbeforeTrig_h33e2927c__0(Vtb_mem_ctrl___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root____VbeforeTrig_h33e2927c__0\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_mem_ctrl__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0 
        = vlSelfRef.tb_mem_ctrl__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h33e2927c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h33e2927c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_mem_ctrl___024root___eval_debug_assertions(Vtb_mem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ctrl___024root___eval_debug_assertions\n"); );
    Vtb_mem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
