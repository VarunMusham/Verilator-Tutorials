// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_latency_unit.h for the primary calling header

#include "Vtb_latency_unit__pch.h"

VlCoroutine Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_latency_unit___024root* vlSelf);
VlCoroutine Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_latency_unit___024root* vlSelf);

void Vtb_latency_unit___024root___eval_initial(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_initial\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_latency_unit__DOT__clk = 0U;
    Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_latency_unit___024root____VbeforeTrig_hbea6000c__0(Vtb_latency_unit___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_latency_unit__DOT__errors;
    tb_latency_unit__DOT__errors = 0;
    IData/*31:0*/ tb_latency_unit__DOT__i;
    tb_latency_unit__DOT__i = 0;
    IData/*31:0*/ tb_latency_unit__DOT__cyc;
    tb_latency_unit__DOT__cyc = 0;
    IData/*31:0*/ tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__0__c;
    __Vtask_tb_latency_unit__DOT__sched__0__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__1__c;
    __Vtask_tb_latency_unit__DOT__sched__1__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__2__c;
    __Vtask_tb_latency_unit__DOT__sched__2__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__4__c;
    __Vtask_tb_latency_unit__DOT__sched__4__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__5__c;
    __Vtask_tb_latency_unit__DOT__sched__5__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__6__c;
    __Vtask_tb_latency_unit__DOT__sched__6__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_h39c24c6e__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__7__c;
    __Vtask_tb_latency_unit__DOT__sched__7__c = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__7__dt;
    __Vtask_tb_latency_unit__DOT__sched__7__dt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__7__d;
    __Vtask_tb_latency_unit__DOT__sched__7__d = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_ha86b2823__0;
    __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_ha86b2823__0 = 0;
    CData/*1:0*/ __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h39c24c6e__0 = 0;
    CData/*0:0*/ __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h7843abd6__0;
    __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h7843abd6__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8__tt;
    __Vtask_tb_latency_unit__DOT__observe__8__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8__got;
    __Vtask_tb_latency_unit__DOT__observe__8__got = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8__now;
    __Vtask_tb_latency_unit__DOT__observe__8__now = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h2b15f78b__0;
    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h1a89392d__0;
    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_hb9524133__0;
    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_1__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_0__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__9__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__9__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__9__tt = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__10__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__10__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__10__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11__tt;
    __Vtask_tb_latency_unit__DOT__observe__11__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11__got;
    __Vtask_tb_latency_unit__DOT__observe__11__got = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11__now;
    __Vtask_tb_latency_unit__DOT__observe__11__now = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h2b15f78b__0;
    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h1a89392d__0;
    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_hb9524133__0;
    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_1__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_0__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__12__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__12__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__12__tt = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__13__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__13__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__13__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14__tt;
    __Vtask_tb_latency_unit__DOT__observe__14__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14__got;
    __Vtask_tb_latency_unit__DOT__observe__14__got = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14__now;
    __Vtask_tb_latency_unit__DOT__observe__14__now = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h2b15f78b__0;
    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h2b15f78b__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h1a89392d__0;
    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h1a89392d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h4dcd3d2d__0;
    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h4dcd3d2d__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h9eeb6ca4__0;
    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h9eeb6ca4__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_hb9524133__0;
    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_hb9524133__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_1__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_1__lat_of = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_0__lat_of;
    __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_0__lat_of = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__15__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__15__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__15__tt = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__16__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__lat_of__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__lat_of__16__tt;
    __Vfunc_tb_latency_unit__DOT__lat_of__16__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17__tt;
    __Vtask_tb_latency_unit__DOT__push__17__tt = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17__d;
    __Vtask_tb_latency_unit__DOT__push__17__d = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17__now;
    __Vtask_tb_latency_unit__DOT__push__17__now = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h63c63d99__0;
    __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h63c63d99__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h459bd9a4__0;
    __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h459bd9a4__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_hc60aa95f__0;
    __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_hc60aa95f__0 = 0;
    IData/*31:0*/ __Vtask_tb_latency_unit__DOT__push__17____VlefCall_0__expect_of;
    __Vtask_tb_latency_unit__DOT__push__17____VlefCall_0__expect_of = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__expect_of__18__Vfuncout;
    __Vfunc_tb_latency_unit__DOT__expect_of__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__expect_of__18__tt;
    __Vfunc_tb_latency_unit__DOT__expect_of__18__tt = 0;
    IData/*31:0*/ __Vfunc_tb_latency_unit__DOT__expect_of__18__d;
    __Vfunc_tb_latency_unit__DOT__expect_of__18__d = 0;
    // Body
    tb_latency_unit__DOT__errors = 0U;
    vlSelfRef.tb_latency_unit__DOT__head[0U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__tail[0U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_cnt[0U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_min[0U] = 0x000f4240U;
    vlSelfRef.tb_latency_unit__DOT__lat_max[0U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_sum[0U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__head[1U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__tail[1U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_cnt[1U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_min[1U] = 0x000f4240U;
    vlSelfRef.tb_latency_unit__DOT__lat_max[1U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_sum[1U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__head[2U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__tail[2U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_cnt[2U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_min[2U] = 0x000f4240U;
    vlSelfRef.tb_latency_unit__DOT__lat_max[2U] = 0U;
    vlSelfRef.tb_latency_unit__DOT__lat_sum[2U] = 0U;
    tb_latency_unit__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000320U, tb_latency_unit__DOT__i)) {
        vlSelfRef.tb_latency_unit__DOT____Vlvbound_h00f63010__0 = 0U;
        if (VL_LIKELY(((0x031fU >= (0x000003ffU & tb_latency_unit__DOT__i))))) {
            vlSelfRef.tb_latency_unit__DOT__s_valid[(0x000003ffU 
                                                     & tb_latency_unit__DOT__i)] 
                = vlSelfRef.tb_latency_unit__DOT____Vlvbound_h00f63010__0;
        }
        tb_latency_unit__DOT__i = ((IData)(1U) + tb_latency_unit__DOT__i);
    }
    __Vtask_tb_latency_unit__DOT__sched__0__c = 0x0000000aU;
    vlSelfRef.tb_latency_unit__DOT__s_valid[10U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_h39c24c6e__0 = 0U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__0__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_ha86b2823__0 = 0x0000007fU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__0__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__0__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__0____Vlvbound_ha86b2823__0;
    }
    __Vtask_tb_latency_unit__DOT__sched__1__c = 0x0000001eU;
    vlSelfRef.tb_latency_unit__DOT__s_valid[30U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_h39c24c6e__0 = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__1__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_ha86b2823__0 = 0x00001234U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__1__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__1__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__1____Vlvbound_ha86b2823__0;
    }
    __Vtask_tb_latency_unit__DOT__sched__2__c = 0x00000032U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[50U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_h39c24c6e__0 = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__2__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_ha86b2823__0 = 0xdeadbeefU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__2__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__2__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__2____Vlvbound_ha86b2823__0;
    }
    vlSelfRef.tb_latency_unit__DOT__s_valid[70U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[70U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[70U] = 0x00000100U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[71U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[71U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[71U] = 0x00000101U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[72U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[72U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[72U] = 0x00000102U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[73U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[73U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[73U] = 0x00000103U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[74U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[74U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[74U] = 0x00000104U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[75U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[75U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[75U] = 0x00000105U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[76U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[76U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[76U] = 0x00000106U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[77U] = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[77U] = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_data[77U] = 0x00000107U;
    __Vtask_tb_latency_unit__DOT__sched__4__c = 0x00000064U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[100U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_h39c24c6e__0 = 2U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__4__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_ha86b2823__0 = 0x000000a0U;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__4__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__4__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__4____Vlvbound_ha86b2823__0;
    }
    __Vtask_tb_latency_unit__DOT__sched__5__c = 0x00000065U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[101U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_h39c24c6e__0 = 0U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__5__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_ha86b2823__0 = 0x0000007fU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__5__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__5__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__5____Vlvbound_ha86b2823__0;
    }
    __Vtask_tb_latency_unit__DOT__sched__6__c = 0x00000066U;
    vlSelfRef.tb_latency_unit__DOT__s_valid[102U] = 1U;
    __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_h39c24c6e__0 = 1U;
    vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                             & __Vtask_tb_latency_unit__DOT__sched__6__c)] 
        = __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_h39c24c6e__0;
    __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_ha86b2823__0 = 0x0000fffeU;
    if (VL_LIKELY(((0x031fU >= (0x000003ffU & __Vtask_tb_latency_unit__DOT__sched__6__c))))) {
        vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                & __Vtask_tb_latency_unit__DOT__sched__6__c)] 
            = __Vtask_tb_latency_unit__DOT__sched__6____Vlvbound_ha86b2823__0;
    }
    tb_latency_unit__DOT__i = 0x000000c8U;
    while (VL_GTS_III(32, 0x000002bcU, tb_latency_unit__DOT__i)) {
        vlSelfRef.tb_latency_unit__DOT__rnd = VL_RANDOM_I();
        if ((0x0000003cU > VL_MODDIV_III(32, vlSelfRef.tb_latency_unit__DOT__rnd, (IData)(0x00000064U)))) {
            __Vtask_tb_latency_unit__DOT__sched__7__d 
                = VL_RANDOM_I();
            __Vtask_tb_latency_unit__DOT__sched__7__dt 
                = VL_MODDIV_III(32, VL_SHIFTR_III(32,32,32, vlSelfRef.tb_latency_unit__DOT__rnd, 8U), (IData)(3U));
            __Vtask_tb_latency_unit__DOT__sched__7__c 
                = tb_latency_unit__DOT__i;
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_ha86b2823__0 = 0;
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h39c24c6e__0 = 0;
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h7843abd6__0 = 0;
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h7843abd6__0 = 1U;
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h39c24c6e__0 
                = (3U & __Vtask_tb_latency_unit__DOT__sched__7__dt);
            __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_ha86b2823__0 
                = __Vtask_tb_latency_unit__DOT__sched__7__d;
            if (VL_LIKELY(((0x031fU >= (0x000003ffU 
                                        & __Vtask_tb_latency_unit__DOT__sched__7__c))))) {
                vlSelfRef.tb_latency_unit__DOT__s_valid[(0x000003ffU 
                                                         & __Vtask_tb_latency_unit__DOT__sched__7__c)] 
                    = __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h7843abd6__0;
                vlSelfRef.tb_latency_unit__DOT__s_dtype[(0x000003ffU 
                                                         & __Vtask_tb_latency_unit__DOT__sched__7__c)] 
                    = __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_h39c24c6e__0;
                vlSelfRef.tb_latency_unit__DOT__s_data[(0x000003ffU 
                                                        & __Vtask_tb_latency_unit__DOT__sched__7__c)] 
                    = __Vtask_tb_latency_unit__DOT__sched__7____Vlvbound_ha86b2823__0;
            }
        }
        tb_latency_unit__DOT__i = ((IData)(1U) + tb_latency_unit__DOT__i);
    }
    vlSelfRef.tb_latency_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_latency_unit__DOT__in_valid = 0U;
    vlSelfRef.tb_latency_unit__DOT__in_dtype = 0U;
    vlSelfRef.tb_latency_unit__DOT__in_data = 0U;
    tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_latency_unit___024root____VbeforeTrig_hbea6000c__0(vlSelf, 
                                                               "@(negedge tb_latency_unit.clk)");
        co_await vlSelfRef.__VtrigSched_hbea6000c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_latency_unit.clk)", 
                                                             "tb\\tb_latency_unit.v", 
                                                             173);
        tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_latency_unit__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_latency_unit__DOT__rst_n = 1U;
    VL_WRITEF_NX("Directed responses (issue cycle < 200):\n",0);
    tb_latency_unit__DOT__cyc = 0U;
    while (VL_GTS_III(32, 0x0000032bU, tb_latency_unit__DOT__cyc)) {
        Vtb_latency_unit___024root____VbeforeTrig_hbea6000c__0(vlSelf, 
                                                               "@(negedge tb_latency_unit.clk)");
        co_await vlSelfRef.__VtrigSched_hbea6000c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_latency_unit.clk)", 
                                                             "tb\\tb_latency_unit.v", 
                                                             178);
        if (vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q) {
            __Vtask_tb_latency_unit__DOT__observe__8__now 
                = tb_latency_unit__DOT__cyc;
            __Vtask_tb_latency_unit__DOT__observe__8__got 
                = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q;
            __Vtask_tb_latency_unit__DOT__observe__8__tt = 0U;
            __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                ? vlSelfRef.tb_latency_unit__DOT__head
                               [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                           ? vlSelfRef.tb_latency_unit__DOT__tail
                                          [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                           : 0U))))) {
                tb_latency_unit__DOT__errors = ((IData)(1U) 
                                                + tb_latency_unit__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on %s at cycle %0d\n",2
                             , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                        ? 0x00000000494e5438ULL
                                        : ((1U == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                            ? 0x000000494e543136ULL
                                            : 0x000000494e543332ULL))
                             , '~',32,__Vtask_tb_latency_unit__DOT__observe__8__now);
            } else {
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_latency_unit__DOT__observe__8__tt) 
                       + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                           ? vlSelfRef.tb_latency_unit__DOT__head
                          [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                           : 0U));
                __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__head
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                       : 0U));
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_latency_unit__DOT__observe__8__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                          [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_latency_unit__DOT__observe__8__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    VL_WRITEF_NX("ERROR: %s data 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__8__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                  [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_latency_unit__DOT__lat_of__9__tt 
                    = __Vtask_tb_latency_unit__DOT__observe__8__tt;
                __Vfunc_tb_latency_unit__DOT__lat_of__9__Vfuncout 
                    = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__9__tt)
                        ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__9__tt)
                                 ? 5U : 9U));
                __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_0__lat_of 
                    = __Vfunc_tb_latency_unit__DOT__lat_of__9__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_0__lat_of)))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    __Vfunc_tb_latency_unit__DOT__lat_of__10__tt 
                        = __Vtask_tb_latency_unit__DOT__observe__8__tt;
                    __Vfunc_tb_latency_unit__DOT__lat_of__10__Vfuncout 
                        = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__10__tt)
                            ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__10__tt)
                                     ? 5U : 9U));
                    __Vtask_tb_latency_unit__DOT__observe__8____VlefCall_1__lat_of 
                        = __Vfunc_tb_latency_unit__DOT__lat_of__10__Vfuncout;
                    VL_WRITEF_NX("ERROR: %s latency %0d cycles, expected %0d\n",3
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_latency_unit__DOT__observe__8____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued cycle %0d -> response cycle %0d  latency %0d  data 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                            ? 0x000000494e543820ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__8__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_latency_unit__DOT__observe__8__now
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__8__got);
                }
                __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__lat_cnt
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                       : 0U));
                __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                         ? vlSelfRef.tb_latency_unit__DOT__lat_sum
                        [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                         : 0U) + vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__head[(3U 
                                                          & __Vtask_tb_latency_unit__DOT__observe__8__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_cnt[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__8__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_sum[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__8__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_min
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_min[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__8__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_max
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__8__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__8__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_max[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__8__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__8____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if (vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q) {
            __Vtask_tb_latency_unit__DOT__observe__11__now 
                = tb_latency_unit__DOT__cyc;
            __Vtask_tb_latency_unit__DOT__observe__11__got 
                = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q;
            __Vtask_tb_latency_unit__DOT__observe__11__tt = 1U;
            __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                ? vlSelfRef.tb_latency_unit__DOT__head
                               [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                           ? vlSelfRef.tb_latency_unit__DOT__tail
                                          [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                           : 0U))))) {
                tb_latency_unit__DOT__errors = ((IData)(1U) 
                                                + tb_latency_unit__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on %s at cycle %0d\n",2
                             , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                        ? 0x00000000494e5438ULL
                                        : ((1U == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                            ? 0x000000494e543136ULL
                                            : 0x000000494e543332ULL))
                             , '~',32,__Vtask_tb_latency_unit__DOT__observe__11__now);
            } else {
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_latency_unit__DOT__observe__11__tt) 
                       + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                           ? vlSelfRef.tb_latency_unit__DOT__head
                          [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                           : 0U));
                __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__head
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                       : 0U));
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_latency_unit__DOT__observe__11__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                          [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_latency_unit__DOT__observe__11__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    VL_WRITEF_NX("ERROR: %s data 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__11__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                  [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_latency_unit__DOT__lat_of__12__tt 
                    = __Vtask_tb_latency_unit__DOT__observe__11__tt;
                __Vfunc_tb_latency_unit__DOT__lat_of__12__Vfuncout 
                    = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__12__tt)
                        ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__12__tt)
                                 ? 5U : 9U));
                __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_0__lat_of 
                    = __Vfunc_tb_latency_unit__DOT__lat_of__12__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_0__lat_of)))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    __Vfunc_tb_latency_unit__DOT__lat_of__13__tt 
                        = __Vtask_tb_latency_unit__DOT__observe__11__tt;
                    __Vfunc_tb_latency_unit__DOT__lat_of__13__Vfuncout 
                        = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__13__tt)
                            ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__13__tt)
                                     ? 5U : 9U));
                    __Vtask_tb_latency_unit__DOT__observe__11____VlefCall_1__lat_of 
                        = __Vfunc_tb_latency_unit__DOT__lat_of__13__Vfuncout;
                    VL_WRITEF_NX("ERROR: %s latency %0d cycles, expected %0d\n",3
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_latency_unit__DOT__observe__11____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued cycle %0d -> response cycle %0d  latency %0d  data 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                            ? 0x000000494e543820ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__11__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_latency_unit__DOT__observe__11__now
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__11__got);
                }
                __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__lat_cnt
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                       : 0U));
                __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                         ? vlSelfRef.tb_latency_unit__DOT__lat_sum
                        [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                         : 0U) + vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__head[(3U 
                                                          & __Vtask_tb_latency_unit__DOT__observe__11__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_cnt[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__11__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_sum[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__11__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_min
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_min[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__11__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_max
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__11__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__11__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_max[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__11__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__11____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if (vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q) {
            __Vtask_tb_latency_unit__DOT__observe__14__now 
                = tb_latency_unit__DOT__cyc;
            __Vtask_tb_latency_unit__DOT__observe__14__got 
                = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q;
            __Vtask_tb_latency_unit__DOT__observe__14__tt = 2U;
            __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h2b15f78b__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h1a89392d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h4dcd3d2d__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h9eeb6ca4__0 = 0;
            __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_hb9524133__0 = 0;
            if (VL_UNLIKELY(((((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                ? vlSelfRef.tb_latency_unit__DOT__head
                               [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                : 0U) == ((2U >= (3U 
                                                  & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                           ? vlSelfRef.tb_latency_unit__DOT__tail
                                          [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                           : 0U))))) {
                tb_latency_unit__DOT__errors = ((IData)(1U) 
                                                + tb_latency_unit__DOT__errors);
                VL_WRITEF_NX("ERROR: spurious response on %s at cycle %0d\n",2
                             , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                        ? 0x00000000494e5438ULL
                                        : ((1U == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                            ? 0x000000494e543136ULL
                                            : 0x000000494e543332ULL))
                             , '~',32,__Vtask_tb_latency_unit__DOT__observe__14__now);
            } else {
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx 
                    = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_latency_unit__DOT__observe__14__tt) 
                       + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                           ? vlSelfRef.tb_latency_unit__DOT__head
                          [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                           : 0U));
                __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_hb9524133__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__head
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                       : 0U));
                vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                    = (__Vtask_tb_latency_unit__DOT__observe__14__now 
                       - ((0x095fU >= (0x00000fffU 
                                       & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                           ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                          [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                           : 0U));
                if (VL_UNLIKELY(((__Vtask_tb_latency_unit__DOT__observe__14__got 
                                  != ((0x095fU >= (0x00000fffU 
                                                   & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                       ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                      [(0x00000fffU 
                                        & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                       : 0U))))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    VL_WRITEF_NX("ERROR: %s data 0x%08h, expected 0x%08h (issued cycle %0d)\n",4
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__14__got
                                 , '#',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_exp
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,
                                 ((0x095fU >= (0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                   ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                  [(0x00000fffU & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                   : 0U));
                }
                __Vfunc_tb_latency_unit__DOT__lat_of__15__tt 
                    = __Vtask_tb_latency_unit__DOT__observe__14__tt;
                __Vfunc_tb_latency_unit__DOT__lat_of__15__Vfuncout 
                    = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__15__tt)
                        ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__15__tt)
                                 ? 5U : 9U));
                __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_0__lat_of 
                    = __Vfunc_tb_latency_unit__DOT__lat_of__15__Vfuncout;
                if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat 
                                  != __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_0__lat_of)))) {
                    tb_latency_unit__DOT__errors = 
                        ((IData)(1U) + tb_latency_unit__DOT__errors);
                    __Vfunc_tb_latency_unit__DOT__lat_of__16__tt 
                        = __Vtask_tb_latency_unit__DOT__observe__14__tt;
                    __Vfunc_tb_latency_unit__DOT__lat_of__16__Vfuncout 
                        = ((0U == __Vfunc_tb_latency_unit__DOT__lat_of__16__tt)
                            ? 2U : ((1U == __Vfunc_tb_latency_unit__DOT__lat_of__16__tt)
                                     ? 5U : 9U));
                    __Vtask_tb_latency_unit__DOT__observe__14____VlefCall_1__lat_of 
                        = __Vfunc_tb_latency_unit__DOT__lat_of__16__Vfuncout;
                    VL_WRITEF_NX("ERROR: %s latency %0d cycles, expected %0d\n",3
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                            ? 0x00000000494e5438ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '~',32,__Vtask_tb_latency_unit__DOT__observe__14____VlefCall_1__lat_of);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 0x000000c8U, 
                                            ((0x095fU 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                              ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                             [(0x00000fffU 
                                               & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                              : 0U))))) {
                    VL_WRITEF_NX("  %s issued cycle %0d -> response cycle %0d  latency %0d  data 0x%08h\n",5
                                 , '#',40,((0U == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                            ? 0x000000494e543820ULL
                                            : ((1U 
                                                == __Vtask_tb_latency_unit__DOT__observe__14__tt)
                                                ? 0x000000494e543136ULL
                                                : 0x000000494e543332ULL))
                                 , '~',32,((0x095fU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx))
                                            ? vlSelfRef.tb_latency_unit__DOT__iss_cyc
                                           [(0x00000fffU 
                                             & vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__idx)]
                                            : 0U), '~',32,__Vtask_tb_latency_unit__DOT__observe__14__now
                                 , '~',32,vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat
                                 , '#',32,__Vtask_tb_latency_unit__DOT__observe__14__got);
                }
                __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h9eeb6ca4__0 
                    = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                       ? vlSelfRef.tb_latency_unit__DOT__lat_cnt
                                      [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                       : 0U));
                __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h4dcd3d2d__0 
                    = (((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                         ? vlSelfRef.tb_latency_unit__DOT__lat_sum
                        [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                         : 0U) + vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat);
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__head[(3U 
                                                          & __Vtask_tb_latency_unit__DOT__observe__14__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_hb9524133__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_cnt[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__14__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h9eeb6ca4__0;
                }
                if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))))) {
                    vlSelfRef.tb_latency_unit__DOT__lat_sum[(3U 
                                                             & __Vtask_tb_latency_unit__DOT__observe__14__tt)] 
                        = __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h4dcd3d2d__0;
                }
                if (VL_LTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_min
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h1a89392d__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_min[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__14__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h1a89392d__0;
                    }
                }
                if (VL_GTS_III(32, vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat, 
                               ((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))
                                 ? vlSelfRef.tb_latency_unit__DOT__lat_max
                                [(3U & __Vtask_tb_latency_unit__DOT__observe__14__tt)]
                                 : 0U))) {
                    __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h2b15f78b__0 
                        = vlSelfRef.tb_latency_unit__DOT__observe__Vstatic__lat;
                    if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__observe__14__tt))))) {
                        vlSelfRef.tb_latency_unit__DOT__lat_max[(3U 
                                                                 & __Vtask_tb_latency_unit__DOT__observe__14__tt)] 
                            = __Vtask_tb_latency_unit__DOT__observe__14____Vlvbound_h2b15f78b__0;
                    }
                }
            }
        }
        if ((VL_GTS_III(32, 0x00000320U, tb_latency_unit__DOT__cyc) 
             & ((0x031fU >= (0x000003ffU & tb_latency_unit__DOT__cyc)) 
                && vlSelfRef.tb_latency_unit__DOT__s_valid
                [(0x000003ffU & tb_latency_unit__DOT__cyc)]))) {
            vlSelfRef.tb_latency_unit__DOT__in_valid = 1U;
            if ((0x031fU >= (0x000003ffU & tb_latency_unit__DOT__cyc))) {
                vlSelfRef.tb_latency_unit__DOT__in_dtype 
                    = vlSelfRef.tb_latency_unit__DOT__s_dtype
                    [(0x000003ffU & tb_latency_unit__DOT__cyc)];
                vlSelfRef.tb_latency_unit__DOT__in_data 
                    = vlSelfRef.tb_latency_unit__DOT__s_data
                    [(0x000003ffU & tb_latency_unit__DOT__cyc)];
                __Vtask_tb_latency_unit__DOT__push__17__d 
                    = vlSelfRef.tb_latency_unit__DOT__s_data
                    [(0x000003ffU & tb_latency_unit__DOT__cyc)];
                __Vtask_tb_latency_unit__DOT__push__17__tt 
                    = vlSelfRef.tb_latency_unit__DOT__s_dtype
                    [(0x000003ffU & tb_latency_unit__DOT__cyc)];
            } else {
                vlSelfRef.tb_latency_unit__DOT__in_dtype = 0U;
                vlSelfRef.tb_latency_unit__DOT__in_data = 0U;
                __Vtask_tb_latency_unit__DOT__push__17__d = 0U;
                __Vtask_tb_latency_unit__DOT__push__17__tt = 0U;
            }
            __Vtask_tb_latency_unit__DOT__push__17__now 
                = tb_latency_unit__DOT__cyc;
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h63c63d99__0 = 0;
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h459bd9a4__0 = 0;
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_hc60aa95f__0 = 0;
            vlSelfRef.tb_latency_unit__DOT__push__Vstatic__idx 
                = (VL_MULS_III(32, (IData)(0x00000320U), __Vtask_tb_latency_unit__DOT__push__17__tt) 
                   + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__push__17__tt))
                       ? vlSelfRef.tb_latency_unit__DOT__tail
                      [(3U & __Vtask_tb_latency_unit__DOT__push__17__tt)]
                       : 0U));
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_hc60aa95f__0 
                = __Vtask_tb_latency_unit__DOT__push__17__now;
            __Vfunc_tb_latency_unit__DOT__expect_of__18__d 
                = __Vtask_tb_latency_unit__DOT__push__17__d;
            __Vfunc_tb_latency_unit__DOT__expect_of__18__tt 
                = __Vtask_tb_latency_unit__DOT__push__17__tt;
            __Vfunc_tb_latency_unit__DOT__expect_of__18__Vfuncout 
                = ((0U == __Vfunc_tb_latency_unit__DOT__expect_of__18__tt)
                    ? (0x000000ffU & ((IData)(1U) + __Vfunc_tb_latency_unit__DOT__expect_of__18__d))
                    : ((1U == __Vfunc_tb_latency_unit__DOT__expect_of__18__tt)
                        ? (0x0000ffffU & ((IData)(1U) 
                                          + __Vfunc_tb_latency_unit__DOT__expect_of__18__d))
                        : ((IData)(1U) + __Vfunc_tb_latency_unit__DOT__expect_of__18__d)));
            __Vtask_tb_latency_unit__DOT__push__17____VlefCall_0__expect_of 
                = __Vfunc_tb_latency_unit__DOT__expect_of__18__Vfuncout;
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h459bd9a4__0 
                = __Vtask_tb_latency_unit__DOT__push__17____VlefCall_0__expect_of;
            if (VL_LIKELY(((0x095fU >= (0x00000fffU 
                                        & vlSelfRef.tb_latency_unit__DOT__push__Vstatic__idx))))) {
                vlSelfRef.tb_latency_unit__DOT__iss_cyc[(0x00000fffU 
                                                         & vlSelfRef.tb_latency_unit__DOT__push__Vstatic__idx)] 
                    = __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_hc60aa95f__0;
                vlSelfRef.tb_latency_unit__DOT__iss_exp[(0x00000fffU 
                                                         & vlSelfRef.tb_latency_unit__DOT__push__Vstatic__idx)] 
                    = __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h459bd9a4__0;
            }
            __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h63c63d99__0 
                = ((IData)(1U) + ((2U >= (3U & __Vtask_tb_latency_unit__DOT__push__17__tt))
                                   ? vlSelfRef.tb_latency_unit__DOT__tail
                                  [(3U & __Vtask_tb_latency_unit__DOT__push__17__tt)]
                                   : 0U));
            if (VL_LIKELY(((2U >= (3U & __Vtask_tb_latency_unit__DOT__push__17__tt))))) {
                vlSelfRef.tb_latency_unit__DOT__tail[(3U 
                                                      & __Vtask_tb_latency_unit__DOT__push__17__tt)] 
                    = __Vtask_tb_latency_unit__DOT__push__17____Vlvbound_h63c63d99__0;
            }
        } else {
            vlSelfRef.tb_latency_unit__DOT__in_valid = 0U;
        }
        tb_latency_unit__DOT__cyc = ((IData)(1U) + tb_latency_unit__DOT__cyc);
    }
    tb_latency_unit__DOT__i = 0U;
    if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__head[0U] 
                      != vlSelfRef.tb_latency_unit__DOT__tail[0U])))) {
        tb_latency_unit__DOT__errors = ((IData)(1U) 
                                        + tb_latency_unit__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on datatype 0\n",1
                     , '~',32,(vlSelfRef.tb_latency_unit__DOT__tail[0U] 
                               - vlSelfRef.tb_latency_unit__DOT__head[0U]));
    }
    tb_latency_unit__DOT__i = 1U;
    if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__head[1U] 
                      != vlSelfRef.tb_latency_unit__DOT__tail[1U])))) {
        tb_latency_unit__DOT__errors = ((IData)(1U) 
                                        + tb_latency_unit__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on datatype 1\n",1
                     , '~',32,(vlSelfRef.tb_latency_unit__DOT__tail[1U] 
                               - vlSelfRef.tb_latency_unit__DOT__head[1U]));
    }
    tb_latency_unit__DOT__i = 2U;
    if (VL_UNLIKELY(((vlSelfRef.tb_latency_unit__DOT__head[2U] 
                      != vlSelfRef.tb_latency_unit__DOT__tail[2U])))) {
        tb_latency_unit__DOT__errors = ((IData)(1U) 
                                        + tb_latency_unit__DOT__errors);
        VL_WRITEF_NX("ERROR: %0d responses missing on datatype 2\n",1
                     , '~',32,(vlSelfRef.tb_latency_unit__DOT__tail[2U] 
                               - vlSelfRef.tb_latency_unit__DOT__head[2U]));
    }
    tb_latency_unit__DOT__i = 3U;
    VL_WRITEF_NX("\nLatency summary (cycles): type   count  min  avg  max  spec\n",0);
    tb_latency_unit__DOT__i = 0U;
    VL_WRITEF_NX("  INT8   %6d  %3d  %3d  %3d    2\n",4
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_cnt[0U]
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_min[0U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_latency_unit__DOT__lat_cnt[0U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_latency_unit__DOT__lat_sum[0U], vlSelfRef.tb_latency_unit__DOT__lat_cnt[0U])
                            : 0U), '~',32,vlSelfRef.tb_latency_unit__DOT__lat_max[0U]);
    tb_latency_unit__DOT__i = 1U;
    VL_WRITEF_NX("  INT16  %6d  %3d  %3d  %3d    5\n",4
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_cnt[1U]
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_min[1U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_latency_unit__DOT__lat_cnt[1U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_latency_unit__DOT__lat_sum[1U], vlSelfRef.tb_latency_unit__DOT__lat_cnt[1U])
                            : 0U), '~',32,vlSelfRef.tb_latency_unit__DOT__lat_max[1U]);
    tb_latency_unit__DOT__i = 2U;
    VL_WRITEF_NX("  INT32  %6d  %3d  %3d  %3d    9\n",4
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_cnt[2U]
                 , '~',32,vlSelfRef.tb_latency_unit__DOT__lat_min[2U]
                 , '~',32,(VL_LTS_III(32, 0U, vlSelfRef.tb_latency_unit__DOT__lat_cnt[2U])
                            ? VL_DIVS_III(32, vlSelfRef.tb_latency_unit__DOT__lat_sum[2U], vlSelfRef.tb_latency_unit__DOT__lat_cnt[2U])
                            : 0U), '~',32,vlSelfRef.tb_latency_unit__DOT__lat_max[2U]);
    tb_latency_unit__DOT__i = 3U;
    if (VL_LIKELY(((0U == tb_latency_unit__DOT__errors)))) {
        VL_WRITEF_NX("PASS: all responses correct and at the specified latency\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_latency_unit.v:212: Assertion failed in %m: FAIL: %0d errors\n",4, 'M',vlSymsp->name(),"tb_latency_unit", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_latency_unit__DOT__errors);
        VL_STOP_MT("tb\\tb_latency_unit.v", 212, "", false);
    }
    VL_FINISH_MT("tb\\tb_latency_unit.v", 213, "");
    co_return;
}

VlCoroutine Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb\\tb_latency_unit.v", 
                                             43);
        vlSelfRef.tb_latency_unit__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_latency_unit__DOT__clk)));
    }
    co_return;
}

void Vtb_latency_unit___024root___eval_triggers_vec__act(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_triggers_vec__act\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((~ (IData)(vlSelfRef.tb_latency_unit__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_latency_unit__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_latency_unit__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0 
        = vlSelfRef.tb_latency_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__rst_n__0 
        = vlSelfRef.tb_latency_unit__DOT__rst_n;
}

bool Vtb_latency_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___trigger_anySet__act\n"); );
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

void Vtb_latency_unit___024root___nba_sequent__TOP__0(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___nba_sequent__TOP__0\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = (0x000000ffU & ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = (0x0000ffffU & ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data);
}

void Vtb_latency_unit___024root___nba_sequent__TOP__1(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___nba_sequent__TOP__1\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
              & (0U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
              & (1U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
           & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
              & (2U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
}

void Vtb_latency_unit___024root___eval_nba(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_nba\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = (0x000000ffU & ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = (0x0000ffffU & ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = ((IData)(1U) + vlSelfRef.tb_latency_unit__DOT__in_data);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__8__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int8__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
                  & (0U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__7__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__6__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__5__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int16__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
                  & (1U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & (IData)(vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.tb_latency_unit__DOT__dut__DOT__u_int32__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.tb_latency_unit__DOT__rst_n) 
               & ((IData)(vlSelfRef.tb_latency_unit__DOT__in_valid) 
                  & (2U == (IData)(vlSelfRef.tb_latency_unit__DOT__in_dtype))));
    }
}

void Vtb_latency_unit___024root___timing_ready(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___timing_ready\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbea6000c__0.ready("@(negedge tb_latency_unit.clk)");
    }
}

void Vtb_latency_unit___024root___timing_resume(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___timing_resume\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hbea6000c__0.moveToResumeQueue(
                                                          "@(negedge tb_latency_unit.clk)");
    vlSelfRef.__VtrigSched_hbea6000c__0.resume("@(negedge tb_latency_unit.clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_latency_unit___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_latency_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_latency_unit___024root___eval_phase__act(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_phase__act\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_latency_unit___024root___eval_triggers_vec__act(vlSelf);
    Vtb_latency_unit___024root___timing_ready(vlSelf);
    Vtb_latency_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_latency_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_latency_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_latency_unit___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_latency_unit___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_latency_unit___024root___eval_phase__inact(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_phase__inact\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb\\tb_latency_unit.v", 12, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_latency_unit___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_latency_unit___024root___eval_phase__nba(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_phase__nba\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_latency_unit___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_latency_unit___024root___eval_nba(vlSelf);
        Vtb_latency_unit___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_latency_unit___024root___eval(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_latency_unit___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb\\tb_latency_unit.v", 12, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb\\tb_latency_unit.v", 12, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_latency_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb\\tb_latency_unit.v", 12, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_latency_unit___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_latency_unit___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_latency_unit___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_latency_unit___024root____VbeforeTrig_hbea6000c__0(Vtb_latency_unit___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root____VbeforeTrig_hbea6000c__0\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_latency_unit__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_latency_unit__DOT__clk__0 
        = vlSelfRef.tb_latency_unit__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbea6000c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbea6000c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_latency_unit___024root___eval_debug_assertions(Vtb_latency_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_latency_unit___024root___eval_debug_assertions\n"); );
    Vtb_latency_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
