// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_master.h for the primary calling header

#include "Vspi_master__pch.h"

VL_ATTR_COLD void Vspi_master___024root___eval_static(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_static\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__clk__0 
        = vlSelfRef.__Vcellinp__spi_master__clk;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__spi_master__rst_n__0 
        = vlSelfRef.__Vcellinp__spi_master__rst_n;
}

VL_ATTR_COLD void Vspi_master___024root___eval_initial(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_initial\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vspi_master___024root___eval_final(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_final\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_master___024root___eval_phase__stl(Vspi_master___024root* vlSelf);

VL_ATTR_COLD void Vspi_master___024root___eval_settle(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_settle\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vspi_master___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl\\spi_master.v", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vspi_master___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vspi_master___024root___eval_triggers_vec__stl(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_triggers_vec__stl\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vspi_master___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vspi_master___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vspi_master___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vspi_master___024root___stl_sequent__TOP__0(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___stl_sequent__TOP__0\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(1, vlSelfRef.cs_n, vlSelfRef.__Vcellout__spi_master__cs_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__miso, vlSelfRef.miso);
    VL_ASSIGN_SII(1, vlSelfRef.mosi, vlSelfRef.__Vcellout__spi_master__mosi);
    VL_ASSIGN_SII(1, vlSelfRef.sclk, vlSelfRef.__Vcellout__spi_master__sclk);
    VL_ASSIGN_SII(1, vlSelfRef.done, vlSelfRef.__Vcellout__spi_master__done);
    VL_ASSIGN_SII(1, vlSelfRef.busy, vlSelfRef.__Vcellout__spi_master__busy);
    VL_ASSIGN_SII(8, vlSelfRef.rx_data, vlSelfRef.__Vcellout__spi_master__rx_data);
    VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__spi_master__tx_data, vlSelfRef.tx_data);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__start, vlSelfRef.start);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__rst_n, vlSelfRef.rst_n);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__clk, vlSelfRef.clk);
}

VL_ATTR_COLD void Vspi_master___024root___eval_stl(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_stl\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VL_ASSIGN_SII(1, vlSelfRef.cs_n, vlSelfRef.__Vcellout__spi_master__cs_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__miso, vlSelfRef.miso);
        VL_ASSIGN_SII(1, vlSelfRef.mosi, vlSelfRef.__Vcellout__spi_master__mosi);
        VL_ASSIGN_SII(1, vlSelfRef.sclk, vlSelfRef.__Vcellout__spi_master__sclk);
        VL_ASSIGN_SII(1, vlSelfRef.done, vlSelfRef.__Vcellout__spi_master__done);
        VL_ASSIGN_SII(1, vlSelfRef.busy, vlSelfRef.__Vcellout__spi_master__busy);
        VL_ASSIGN_SII(8, vlSelfRef.rx_data, vlSelfRef.__Vcellout__spi_master__rx_data);
        VL_ASSIGN_ISI(8, vlSelfRef.__Vcellinp__spi_master__tx_data, vlSelfRef.tx_data);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__start, vlSelfRef.start);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__rst_n, vlSelfRef.rst_n);
        VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__spi_master__clk, vlSelfRef.clk);
    }
}

VL_ATTR_COLD bool Vspi_master___024root___eval_phase__stl(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___eval_phase__stl\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_master___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_master___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vspi_master___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vspi_master___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vspi_master___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vspi_master___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vspi_master___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_master___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vspi_master___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__spi_master__clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge __Vcellinp__spi_master__rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_master___024root___ctor_var_reset(Vspi_master___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_master___024root___ctor_var_reset\n"); );
    Vspi_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellout__spi_master__cs_n = 0;
    vlSelf->__Vcellinp__spi_master__miso = 0;
    vlSelf->__Vcellout__spi_master__mosi = 0;
    vlSelf->__Vcellout__spi_master__sclk = 0;
    vlSelf->__Vcellout__spi_master__done = 0;
    vlSelf->__Vcellout__spi_master__busy = 0;
    vlSelf->__Vcellout__spi_master__rx_data = 0;
    vlSelf->__Vcellinp__spi_master__tx_data = 0;
    vlSelf->__Vcellinp__spi_master__start = 0;
    vlSelf->__Vcellinp__spi_master__rst_n = 0;
    vlSelf->__Vcellinp__spi_master__clk = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->spi_master__DOT__div_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3491552245355934000ull);
    vlSelf->spi_master__DOT__tx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16996268424177457380ull);
    vlSelf->spi_master__DOT__rx_shift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9886558848931859717ull);
    vlSelf->spi_master__DOT__edge_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17822773444090222694ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__spi_master__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__spi_master__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
