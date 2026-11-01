// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_spi_master__pch.h"

//============================================================
// Constructors

Vtb_spi_master::Vtb_spi_master(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_spi_master__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_spi_master::Vtb_spi_master(const char* _vcname__)
    : Vtb_spi_master(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_spi_master::~Vtb_spi_master() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_spi_master___024root___eval_debug_assertions(Vtb_spi_master___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_spi_master___024root___eval_static(Vtb_spi_master___024root* vlSelf);
void Vtb_spi_master___024root___eval_initial(Vtb_spi_master___024root* vlSelf);
void Vtb_spi_master___024root___eval_settle(Vtb_spi_master___024root* vlSelf);
void Vtb_spi_master___024root___eval(Vtb_spi_master___024root* vlSelf);

void Vtb_spi_master::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_spi_master::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_spi_master___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_spi_master___024root___eval_static(&(vlSymsp->TOP));
        Vtb_spi_master___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_spi_master___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_spi_master___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_spi_master::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_spi_master::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_spi_master::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_spi_master___024root___eval_final(Vtb_spi_master___024root* vlSelf);

VL_ATTR_COLD void Vtb_spi_master::final() {
    contextp()->executingFinal(true);
    Vtb_spi_master___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_spi_master::hierName() const { return vlSymsp->name(); }
const char* Vtb_spi_master::modelName() const { return "Vtb_spi_master"; }
unsigned Vtb_spi_master::threads() const { return 1; }
void Vtb_spi_master::prepareClone() const { contextp()->prepareClone(); }
void Vtb_spi_master::atClone() const {
    contextp()->threadPoolpOnClone();
}
