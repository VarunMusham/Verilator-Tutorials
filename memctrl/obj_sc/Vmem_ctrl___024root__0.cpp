// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_ctrl.h for the primary calling header

#include "Vmem_ctrl__pch.h"

void Vmem_ctrl___024root___eval_triggers_vec__ico(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_triggers_vec__ico\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vmem_ctrl___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___trigger_anySet__ico\n"); );
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

void Vmem_ctrl___024root___ico_sequent__TOP__0(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___ico_sequent__TOP__0\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__mem_ctrl__req_wdata, vlSelfRef.req_wdata);
    VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__mem_ctrl__req_addr, vlSelfRef.req_addr);
    VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__mem_ctrl__req_type, vlSelfRef.req_type);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__req_valid, vlSelfRef.req_valid);
    vlSelfRef.mem_ctrl__DOT__is_wr = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                      & (1U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
    vlSelfRef.mem_ctrl__DOT__is_rmw = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                       & (2U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
}

void Vmem_ctrl___024root___eval_ico(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_ico\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__clk, vlSelfRef.clk);
        VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__mem_ctrl__req_wdata, vlSelfRef.req_wdata);
        VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__mem_ctrl__req_addr, vlSelfRef.req_addr);
        VL_ASSIGN_ISI(2, vlSelfRef.__Vcellinp__mem_ctrl__req_type, vlSelfRef.req_type);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__mem_ctrl__req_valid, vlSelfRef.req_valid);
        vlSelfRef.mem_ctrl__DOT__is_wr = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                          & (1U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
        vlSelfRef.mem_ctrl__DOT__is_rmw = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                                           & (2U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmem_ctrl___024root___eval_phase__ico(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_phase__ico\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmem_ctrl___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_ctrl___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmem_ctrl___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmem_ctrl___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmem_ctrl___024root___eval_triggers_vec__act(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_triggers_vec__act\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__clk__0 
        = vlSelfRef.__Vcellinp__mem_ctrl__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__mem_ctrl__rst_n__0 
        = vlSelfRef.__Vcellinp__mem_ctrl__rst_n;
}

bool Vmem_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___trigger_anySet__act\n"); );
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

void Vmem_ctrl___024root___nba_sequent__TOP__0(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___nba_sequent__TOP__0\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__mem_ctrl__DOT__mem__v0;
    __VdlyVal__mem_ctrl__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__mem_ctrl__DOT__mem__v0;
    __VdlyDim0__mem_ctrl__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem_ctrl__DOT__mem__v0;
    __VdlySet__mem_ctrl__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__mem_ctrl__DOT__mem__v1;
    __VdlyVal__mem_ctrl__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__mem_ctrl__DOT__mem__v1;
    __VdlyDim0__mem_ctrl__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem_ctrl__DOT__mem__v1;
    __VdlySet__mem_ctrl__DOT__mem__v1 = 0;
    // Body
    __VdlySet__mem_ctrl__DOT__mem__v0 = 0U;
    __VdlySet__mem_ctrl__DOT__mem__v1 = 0U;
    if (vlSelfRef.mem_ctrl__DOT__is_wr) {
        __VdlyVal__mem_ctrl__DOT__mem__v0 = vlSelfRef.__Vcellinp__mem_ctrl__req_wdata;
        __VdlyDim0__mem_ctrl__DOT__mem__v0 = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
        __VdlySet__mem_ctrl__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.mem_ctrl__DOT__is_rmw) {
        __VdlyVal__mem_ctrl__DOT__mem__v1 = (vlSelfRef.mem_ctrl__DOT__mem
                                             [vlSelfRef.__Vcellinp__mem_ctrl__req_addr] 
                                             + vlSelfRef.__Vcellinp__mem_ctrl__req_wdata);
        __VdlyDim0__mem_ctrl__DOT__mem__v1 = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
        __VdlySet__mem_ctrl__DOT__mem__v1 = 1U;
    }
    vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
    VL_ASSIGN_SII(8, vlSelfRef.wr_addr, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q);
    vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
    VL_ASSIGN_SII(32, vlSelfRef.rmw_old, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q);
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
    VL_ASSIGN_SII(32, vlSelfRef.rd_data, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q);
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q 
        = vlSelfRef.mem_ctrl__DOT__mem[vlSelfRef.__Vcellinp__mem_ctrl__req_addr];
    if (__VdlySet__mem_ctrl__DOT__mem__v0) {
        vlSelfRef.mem_ctrl__DOT__mem[__VdlyDim0__mem_ctrl__DOT__mem__v0] 
            = __VdlyVal__mem_ctrl__DOT__mem__v0;
    }
    if (__VdlySet__mem_ctrl__DOT__mem__v1) {
        vlSelfRef.mem_ctrl__DOT__mem[__VdlyDim0__mem_ctrl__DOT__mem__v1] 
            = __VdlyVal__mem_ctrl__DOT__mem__v1;
    }
}

void Vmem_ctrl___024root___nba_sequent__TOP__1(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___nba_sequent__TOP__1\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q));
    VL_ASSIGN_SII(1, vlSelfRef.wr_valid, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q);
    vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__is_wr));
    VL_ASSIGN_SII(1, vlSelfRef.rd_valid, vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q);
    vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q));
    VL_ASSIGN_SII(1, vlSelfRef.rmw_valid, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q);
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
              & (0U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type))));
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q));
    vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q 
        = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
           & (IData)(vlSelfRef.mem_ctrl__DOT__is_rmw));
}

void Vmem_ctrl___024root___eval_nba(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_nba\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v1 = 0U;
        if (vlSelfRef.mem_ctrl__DOT__is_wr) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v0 
                = vlSelfRef.__Vcellinp__mem_ctrl__req_wdata;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v0 
                = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
            __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v0 = 1U;
        }
        if (vlSelfRef.mem_ctrl__DOT__is_rmw) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v1 
                = (vlSelfRef.mem_ctrl__DOT__mem[vlSelfRef.__Vcellinp__mem_ctrl__req_addr] 
                   + vlSelfRef.__Vcellinp__mem_ctrl__req_wdata);
            __Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v1 
                = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
            __Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v1 = 1U;
        }
        vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q;
        VL_ASSIGN_SII(8, vlSelfRef.wr_addr, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__d_q);
        vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = vlSelfRef.__Vcellinp__mem_ctrl__req_addr;
        VL_ASSIGN_SII(32, vlSelfRef.rmw_old, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__d_q);
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q;
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q;
        VL_ASSIGN_SII(32, vlSelfRef.rd_data, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__d_q);
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q;
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q;
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__d_q 
            = vlSelfRef.mem_ctrl__DOT__mem[vlSelfRef.__Vcellinp__mem_ctrl__req_addr];
        if (__Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v0) {
            vlSelfRef.mem_ctrl__DOT__mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v0;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__mem_ctrl__DOT__mem__v1) {
            vlSelfRef.mem_ctrl__DOT__mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__mem_ctrl__DOT__mem__v1] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__mem_ctrl__DOT__mem__v1;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q));
        VL_ASSIGN_SII(1, vlSelfRef.wr_valid, vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__1__KET____DOT__v_q);
        vlSelfRef.mem_ctrl__DOT__u_wr__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__is_wr));
        VL_ASSIGN_SII(1, vlSelfRef.rd_valid, vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__3__KET____DOT__v_q);
        vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q));
        VL_ASSIGN_SII(1, vlSelfRef.rmw_valid, vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__5__KET____DOT__v_q);
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__4__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__3__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rd__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_valid) 
                  & (0U == (IData)(vlSelfRef.__Vcellinp__mem_ctrl__req_type))));
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__2__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__1__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q));
        vlSelfRef.mem_ctrl__DOT__u_rmw__DOT__g_stage__BRA__0__KET____DOT__v_q 
            = ((IData)(vlSelfRef.__Vcellinp__mem_ctrl__rst_n) 
               & (IData)(vlSelfRef.mem_ctrl__DOT__is_rmw));
    }
}

void Vmem_ctrl___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vmem_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmem_ctrl___024root___eval_phase__act(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_phase__act\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmem_ctrl___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmem_ctrl___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmem_ctrl___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmem_ctrl___024root___eval_phase__nba(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_phase__nba\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmem_ctrl___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmem_ctrl___024root___eval_nba(vlSelf);
        Vmem_ctrl___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmem_ctrl___024root___eval(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmem_ctrl___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl\\mem_ctrl.v", 9, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmem_ctrl___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmem_ctrl___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl\\mem_ctrl.v", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmem_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl\\mem_ctrl.v", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmem_ctrl___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmem_ctrl___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmem_ctrl___024root___eval_debug_assertions(Vmem_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_ctrl___024root___eval_debug_assertions\n"); );
    Vmem_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
