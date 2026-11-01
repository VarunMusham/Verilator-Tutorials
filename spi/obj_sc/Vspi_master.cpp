// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_master__pch.h"

//============================================================
// Constructors

Vspi_master::Vspi_master(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vspi_master__Syms(contextp(), name(), this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , start{vlSymsp->TOP.start}
    , tx_data{vlSymsp->TOP.tx_data}
    , rx_data{vlSymsp->TOP.rx_data}
    , busy{vlSymsp->TOP.busy}
    , done{vlSymsp->TOP.done}
    , sclk{vlSymsp->TOP.sclk}
    , mosi{vlSymsp->TOP.mosi}
    , miso{vlSymsp->TOP.miso}
    , cs_n{vlSymsp->TOP.cs_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst_n;
    sensitive << start;
    sensitive << tx_data;
    sensitive << miso;

}

//============================================================
// Destructor

Vspi_master::~Vspi_master() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_master___024root___eval_debug_assertions(Vspi_master___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_master___024root___eval_static(Vspi_master___024root* vlSelf);
void Vspi_master___024root___eval_initial(Vspi_master___024root* vlSelf);
void Vspi_master___024root___eval_settle(Vspi_master___024root* vlSelf);
void Vspi_master___024root___eval(Vspi_master___024root* vlSelf);

void Vspi_master::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_master::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_master___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_master___024root___eval_static(&(vlSymsp->TOP));
        Vspi_master___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_master___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_master___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_master::eventsPending() { return false; }

uint64_t Vspi_master::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vspi_master___024root___eval_final(Vspi_master___024root* vlSelf);

VL_ATTR_COLD void Vspi_master::final() {
    contextp()->executingFinal(true);
    Vspi_master___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_master::hierName() const { return vlSymsp->name(); }
const char* Vspi_master::modelName() const { return "Vspi_master"; }
unsigned Vspi_master::threads() const { return 1; }
void Vspi_master::prepareClone() const { contextp()->prepareClone(); }
void Vspi_master::atClone() const {
    contextp()->threadPoolpOnClone();
}
