// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"

void Vspi_master___024root___eval_triggers_vec__ico(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers_vec__ico\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vspi_master___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___trigger_anySet__ico\n"); );
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

void Vspi_master___024root___ico_sequent__TOP__0(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___ico_sequent__TOP__0\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__miso, vlSelfRef.miso);
    VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__spi_master__tx_data, vlSelfRef.tx_data);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__start, vlSelfRef.start);
}

void Vspi_master___024root___eval_ico(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_ico\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__clk, vlSelfRef.clk);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__miso, vlSelfRef.miso);
        VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__spi_master__tx_data, vlSelfRef.tx_data);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__start, vlSelfRef.start);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vspi_master___024root___eval_phase__ico(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__ico\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vspi_master___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vspi_master___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vspi_master___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vspi_master___024root___eval_triggers_vec__act(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers_vec__act\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.__Vcellinp__spi_master__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__spi_master__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__clk__0 
        = vlSelfRef.__Vcellinp__spi_master__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__rst_n__0 
        = vlSelfRef.__Vcellinp__spi_master__rst_n;
}

bool Vspi_master___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___trigger_anySet__act\n"); );
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

void Vspi_master___024root___nba_sequent__TOP__0(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___nba_sequent__TOP__0\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly____Vcellout__spi_master__sclk;
    __Vdly____Vcellout__spi_master__sclk = 0;
    CData/*1:0*/ __Vdly__spi_master__DOT__div_cnt;
    __Vdly__spi_master__DOT__div_cnt = 0;
    // Body
    __Vdly__spi_master__DOT__div_cnt = vlSelfRef.spi_master__DOT__div_cnt;
    __Vdly____Vcellout__spi_master__sclk = vlSelfRef.__Vcellout__spi_master__sclk;
    if (vlSelfRef.__Vcellinp__spi_master__rst_n) {
        vlSelfRef.__Vcellout__spi_master__done = 0U;
        if (vlSelfRef.__Vcellout__spi_master__busy) {
            if ((3U == (IData)(vlSelfRef.spi_master__DOT__div_cnt))) {
                __Vdly____Vcellout__spi_master__sclk 
                    = (1U & (~ (IData)(vlSelfRef.__Vcellout__spi_master__sclk)));
                __Vdly__spi_master__DOT__div_cnt = 0U;
                if (vlSelfRef.__Vcellout__spi_master__sclk) {
                    if ((8U == (IData)(vlSelfRef.spi_master__DOT__edge_cnt))) {
                        vlSelfRef.__Vcellout__spi_master__busy = 0U;
                        vlSelfRef.__Vcellout__spi_master__done = 1U;
                        vlSelfRef.__Vcellout__spi_master__cs_n = 1U;
                        vlSelfRef.__Vcellout__spi_master__rx_data 
                            = vlSelfRef.spi_master__DOT__rx_shift;
                    } else {
                        vlSelfRef.__Vcellout__spi_master__mosi 
                            = (1U & ((IData)(vlSelfRef.spi_master__DOT__tx_shift) 
                                     >> 7U));
                        vlSelfRef.spi_master__DOT__tx_shift 
                            = (0x000000feU & ((IData)(vlSelfRef.spi_master__DOT__tx_shift) 
                                              << 1U));
                    }
                } else {
                    vlSelfRef.spi_master__DOT__rx_shift 
                        = ((0x000000feU & ((IData)(vlSelfRef.spi_master__DOT__rx_shift) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.__Vcellinp__spi_master__miso));
                    vlSelfRef.spi_master__DOT__edge_cnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.spi_master__DOT__edge_cnt)));
                }
            } else {
                __Vdly__spi_master__DOT__div_cnt = 
                    (3U & ((IData)(1U) + (IData)(vlSelfRef.spi_master__DOT__div_cnt)));
            }
        } else if (vlSelfRef.__Vcellinp__spi_master__start) {
            vlSelfRef.spi_master__DOT__tx_shift = (0x000000feU 
                                                   & ((IData)(vlSelfRef.__Vcellinp__spi_master__tx_data) 
                                                      << 1U));
            vlSelfRef.spi_master__DOT__edge_cnt = 0U;
            vlSelfRef.__Vcellout__spi_master__busy = 1U;
            vlSelfRef.__Vcellout__spi_master__cs_n = 0U;
            vlSelfRef.__Vcellout__spi_master__mosi 
                = (1U & ((IData)(vlSelfRef.__Vcellinp__spi_master__tx_data) 
                         >> 7U));
            __Vdly__spi_master__DOT__div_cnt = 0U;
        }
    } else {
        vlSelfRef.spi_master__DOT__tx_shift = 0U;
        vlSelfRef.spi_master__DOT__rx_shift = 0U;
        vlSelfRef.spi_master__DOT__edge_cnt = 0U;
        vlSelfRef.__Vcellout__spi_master__busy = 0U;
        vlSelfRef.__Vcellout__spi_master__done = 0U;
        __Vdly____Vcellout__spi_master__sclk = 0U;
        vlSelfRef.__Vcellout__spi_master__mosi = 0U;
        vlSelfRef.__Vcellout__spi_master__cs_n = 1U;
        vlSelfRef.__Vcellout__spi_master__rx_data = 0U;
        __Vdly__spi_master__DOT__div_cnt = 0U;
    }
    vlSelfRef.spi_master__DOT__div_cnt = __Vdly__spi_master__DOT__div_cnt;
    vlSelfRef.__Vcellout__spi_master__sclk = __Vdly____Vcellout__spi_master__sclk;
    VL_ASSIGN_SII(1, vlSelfRef.done, vlSelfRef.__Vcellout__spi_master__done);
    VL_ASSIGN_SII(1, vlSelfRef.sclk, vlSelfRef.__Vcellout__spi_master__sclk);
    VL_ASSIGN_SII(1, vlSelfRef.busy, vlSelfRef.__Vcellout__spi_master__busy);
    VL_ASSIGN_SII(1, vlSelfRef.cs_n, vlSelfRef.__Vcellout__spi_master__cs_n);
    VL_ASSIGN_SII(8, vlSelfRef.rx_data, vlSelfRef.__Vcellout__spi_master__rx_data);
    VL_ASSIGN_SII(1, vlSelfRef.mosi, vlSelfRef.__Vcellout__spi_master__mosi);
}

void Vspi_master___024root___eval_nba(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_nba\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk;
    __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk = 0;
    CData/*1:0*/ __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt;
    __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt 
            = vlSelfRef.spi_master__DOT__div_cnt;
        __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk 
            = vlSelfRef.__Vcellout__spi_master__sclk;
        if (vlSelfRef.__Vcellinp__spi_master__rst_n) {
            vlSelfRef.__Vcellout__spi_master__done = 0U;
            if (vlSelfRef.__Vcellout__spi_master__busy) {
                if ((3U == (IData)(vlSelfRef.spi_master__DOT__div_cnt))) {
                    __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk 
                        = (1U & (~ (IData)(vlSelfRef.__Vcellout__spi_master__sclk)));
                    __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt = 0U;
                    if (vlSelfRef.__Vcellout__spi_master__sclk) {
                        if ((8U == (IData)(vlSelfRef.spi_master__DOT__edge_cnt))) {
                            vlSelfRef.__Vcellout__spi_master__busy = 0U;
                            vlSelfRef.__Vcellout__spi_master__done = 1U;
                            vlSelfRef.__Vcellout__spi_master__cs_n = 1U;
                            vlSelfRef.__Vcellout__spi_master__rx_data 
                                = vlSelfRef.spi_master__DOT__rx_shift;
                        } else {
                            vlSelfRef.__Vcellout__spi_master__mosi 
                                = (1U & ((IData)(vlSelfRef.spi_master__DOT__tx_shift) 
                                         >> 7U));
                            vlSelfRef.spi_master__DOT__tx_shift 
                                = (0x000000feU & ((IData)(vlSelfRef.spi_master__DOT__tx_shift) 
                                                  << 1U));
                        }
                    } else {
                        vlSelfRef.spi_master__DOT__rx_shift 
                            = ((0x000000feU & ((IData)(vlSelfRef.spi_master__DOT__rx_shift) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vcellinp__spi_master__miso));
                        vlSelfRef.spi_master__DOT__edge_cnt 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.spi_master__DOT__edge_cnt)));
                    }
                } else {
                    __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.spi_master__DOT__div_cnt)));
                }
            } else if (vlSelfRef.__Vcellinp__spi_master__start) {
                vlSelfRef.spi_master__DOT__tx_shift 
                    = (0x000000feU & ((IData)(vlSelfRef.__Vcellinp__spi_master__tx_data) 
                                      << 1U));
                vlSelfRef.spi_master__DOT__edge_cnt = 0U;
                vlSelfRef.__Vcellout__spi_master__busy = 1U;
                vlSelfRef.__Vcellout__spi_master__cs_n = 0U;
                vlSelfRef.__Vcellout__spi_master__mosi 
                    = (1U & ((IData)(vlSelfRef.__Vcellinp__spi_master__tx_data) 
                             >> 7U));
                __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt = 0U;
            }
        } else {
            vlSelfRef.spi_master__DOT__tx_shift = 0U;
            vlSelfRef.spi_master__DOT__rx_shift = 0U;
            vlSelfRef.spi_master__DOT__edge_cnt = 0U;
            vlSelfRef.__Vcellout__spi_master__busy = 0U;
            vlSelfRef.__Vcellout__spi_master__done = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk = 0U;
            vlSelfRef.__Vcellout__spi_master__mosi = 0U;
            vlSelfRef.__Vcellout__spi_master__cs_n = 1U;
            vlSelfRef.__Vcellout__spi_master__rx_data = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt = 0U;
        }
        vlSelfRef.spi_master__DOT__div_cnt = __Vinline__nba_sequent__TOP__0___Vdly__spi_master__DOT__div_cnt;
        vlSelfRef.__Vcellout__spi_master__sclk = __Vinline__nba_sequent__TOP__0___Vdly____Vcellout__spi_master__sclk;
        VL_ASSIGN_SII(1, vlSelfRef.done, vlSelfRef.__Vcellout__spi_master__done);
        VL_ASSIGN_SII(1, vlSelfRef.sclk, vlSelfRef.__Vcellout__spi_master__sclk);
        VL_ASSIGN_SII(1, vlSelfRef.busy, vlSelfRef.__Vcellout__spi_master__busy);
        VL_ASSIGN_SII(1, vlSelfRef.cs_n, vlSelfRef.__Vcellout__spi_master__cs_n);
        VL_ASSIGN_SII(8, vlSelfRef.rx_data, vlSelfRef.__Vcellout__spi_master__rx_data);
        VL_ASSIGN_SII(1, vlSelfRef.mosi, vlSelfRef.__Vcellout__spi_master__mosi);
    }
}

void Vspi_master___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vspi_master___024root___eval_phase__act(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__act\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_master___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vspi_master___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vspi_master___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vspi_master___024root___eval_phase__nba(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__nba\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vspi_master___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vspi_master___024root___eval_nba(vlSelf);
        Vspi_master___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vspi_master___024root___eval(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vspi_master___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl\\spi_master.v", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vspi_master___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vspi_master___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl\\spi_master.v", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vspi_master___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl\\spi_master.v", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vspi_master___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vspi_master___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vspi_master___024root___eval_debug_assertions(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_debug_assertions\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
