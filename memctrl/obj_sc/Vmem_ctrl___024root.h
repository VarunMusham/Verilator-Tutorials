// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem_ctrl.h for the primary calling header

#ifndef VERILATED_VMEM_CTRL___024ROOT_H_
#define VERILATED_VMEM_CTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"


class Vmem_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem_ctrl___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __Vcellinp__mem_ctrl__req_addr;
    CData/*1:0*/ __Vcellinp__mem_ctrl__req_type;
    CData/*0:0*/ __Vcellinp__mem_ctrl__req_valid;
    CData/*0:0*/ __Vcellinp__mem_ctrl__rst_n;
    CData/*0:0*/ __Vcellinp__mem_ctrl__clk;
    CData/*0:0*/ mem_ctrl__DOT__is_wr;
    CData/*0:0*/ mem_ctrl__DOT__is_rmw;
    CData/*0:0*/ mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*7:0*/ mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
    CData/*0:0*/ mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*7:0*/ mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q;
    CData/*0:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __Vcellinp__mem_ctrl__req_wdata;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
    IData/*31:0*/ mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> mem_ctrl__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    sc_core::sc_in<bool> clk;
    sc_core::sc_in<bool> rst_n;
    sc_core::sc_in<bool> req_valid;
    sc_core::sc_in<uint32_t> req_type;
    sc_core::sc_in<uint32_t> req_addr;
    sc_core::sc_out<bool> rd_valid;
    sc_core::sc_out<bool> wr_valid;
    sc_core::sc_out<uint32_t> wr_addr;
    sc_core::sc_out<bool> rmw_valid;
    sc_core::sc_in<uint32_t> req_wdata;
    sc_core::sc_out<uint32_t> rd_data;
    sc_core::sc_out<uint32_t> rmw_old;

    // INTERNAL VARIABLES
    Vmem_ctrl__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmem_ctrl___024root(Vmem_ctrl__Syms* symsp, const char* namep);
    ~Vmem_ctrl___024root();
    VL_UNCOPYABLE(Vmem_ctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
