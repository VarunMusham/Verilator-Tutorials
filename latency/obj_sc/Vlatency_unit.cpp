// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlatency_unit__pch.h"

//============================================================
// Constructors

Vlatency_unit::Vlatency_unit(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vlatency_unit__Syms(contextp(), name(), this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_valid{vlSymsp->TOP.in_valid}
    , in_dtype{vlSymsp->TOP.in_dtype}
    , out8_valid{vlSymsp->TOP.out8_valid}
    , out8_data{vlSymsp->TOP.out8_data}
    , out16_valid{vlSymsp->TOP.out16_valid}
    , out32_valid{vlSymsp->TOP.out32_valid}
    , out16_data{vlSymsp->TOP.out16_data}
    , in_data{vlSymsp->TOP.in_data}
    , out32_data{vlSymsp->TOP.out32_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst_n;
    sensitive << in_valid;
    sensitive << in_dtype;
    sensitive << in_data;

}

//============================================================
// Destructor

Vlatency_unit::~Vlatency_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlatency_unit___024root___eval_debug_assertions(Vlatency_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vlatency_unit___024root___eval_static(Vlatency_unit___024root* vlSelf);
void Vlatency_unit___024root___eval_initial(Vlatency_unit___024root* vlSelf);
void Vlatency_unit___024root___eval_settle(Vlatency_unit___024root* vlSelf);
void Vlatency_unit___024root___eval(Vlatency_unit___024root* vlSelf);

void Vlatency_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlatency_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlatency_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlatency_unit___024root___eval_static(&(vlSymsp->TOP));
        Vlatency_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vlatency_unit___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlatency_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlatency_unit::eventsPending() { return false; }

uint64_t Vlatency_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vlatency_unit___024root___eval_final(Vlatency_unit___024root* vlSelf);

VL_ATTR_COLD void Vlatency_unit::final() {
    contextp()->executingFinal(true);
    Vlatency_unit___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlatency_unit::hierName() const { return vlSymsp->name(); }
const char* Vlatency_unit::modelName() const { return "Vlatency_unit"; }
unsigned Vlatency_unit::threads() const { return 1; }
void Vlatency_unit::prepareClone() const { contextp()->prepareClone(); }
void Vlatency_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
