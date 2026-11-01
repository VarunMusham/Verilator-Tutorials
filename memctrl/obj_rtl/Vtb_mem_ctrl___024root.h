// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_MEM_CTRL___024ROOT_H_
#define VERILATED_VTB_MEM_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mem_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_ctrl___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_mem_ctrl__DOT____Vlvbound_h00f63010__0;
        CData/*0:0*/ tb_mem_ctrl__DOT__clk;
        CData/*0:0*/ tb_mem_ctrl__DOT__rst_n;
        CData/*0:0*/ tb_mem_ctrl__DOT__req_valid;
        CData/*1:0*/ tb_mem_ctrl__DOT__req_type;
        CData/*7:0*/ tb_mem_ctrl__DOT__req_addr;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__is_wr;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__is_rmw;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q;
        CData/*7:0*/ tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q;
        CData/*7:0*/ tb_mem_ctrl__DOT__dut__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q;
        CData/*0:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_ctrl__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_mem_ctrl__DOT__req_wdata;
        IData/*31:0*/ tb_mem_ctrl__DOT__pick;
        IData/*31:0*/ tb_mem_ctrl__DOT__rnd;
        IData/*31:0*/ tb_mem_ctrl__DOT__rnd2;
        IData/*31:0*/ tb_mem_ctrl__DOT__push__Vstatic__idx;
        IData/*31:0*/ tb_mem_ctrl__DOT__observe__Vstatic__idx;
        IData/*31:0*/ tb_mem_ctrl__DOT__observe__Vstatic__lat;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
        IData/*31:0*/ tb_mem_ctrl__DOT__dut__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*0:0*/, 800> tb_mem_ctrl__DOT__s_valid;
        VlUnpacked<CData/*1:0*/, 800> tb_mem_ctrl__DOT__s_type;
        VlUnpacked<CData/*7:0*/, 800> tb_mem_ctrl__DOT__s_addr;
        VlUnpacked<IData/*31:0*/, 800> tb_mem_ctrl__DOT__s_wdata;
        VlUnpacked<IData/*31:0*/, 256> tb_mem_ctrl__DOT__gold;
        VlUnpacked<IData/*31:0*/, 2400> tb_mem_ctrl__DOT__q_cyc;
        VlUnpacked<IData/*31:0*/, 2400> tb_mem_ctrl__DOT__q_val;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__head;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__tail;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__lat_cnt;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__lat_min;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__lat_max;
        VlUnpacked<IData/*31:0*/, 3> tb_mem_ctrl__DOT__lat_sum;
        VlUnpacked<IData/*31:0*/, 256> tb_mem_ctrl__DOT__dut__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h33e2927c__0;

    // INTERNAL VARIABLES
    Vtb_mem_ctrl__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mem_ctrl___024root(Vtb_mem_ctrl__Syms* symsp, const char* namep);
    ~Vtb_mem_ctrl___024root();
    VL_UNCOPYABLE(Vtb_mem_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
