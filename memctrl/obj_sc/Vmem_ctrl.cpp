// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmem_ctrl__pch.h"

//============================================================
// Constructors

Vmem_ctrl::Vmem_ctrl(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vmem_ctrl__Syms(contextp(), name(), this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , req_valid{vlSymsp->TOP.req_valid}
    , req_type{vlSymsp->TOP.req_type}
    , req_addr{vlSymsp->TOP.req_addr}
    , rd_valid{vlSymsp->TOP.rd_valid}
    , wr_valid{vlSymsp->TOP.wr_valid}
    , wr_addr{vlSymsp->TOP.wr_addr}
    , rmw_valid{vlSymsp->TOP.rmw_valid}
    , req_wdata{vlSymsp->TOP.req_wdata}
    , rd_data{vlSymsp->TOP.rd_data}
    , rmw_old{vlSymsp->TOP.rmw_old}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst_n;
    sensitive << req_valid;
    sensitive << req_type;
    sensitive << req_addr;
    sensitive << req_wdata;

}

//============================================================
// Destructor

Vmem_ctrl::~Vmem_ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmem_ctrl___024root___eval_debug_assertions(Vmem_ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vmem_ctrl___024root___eval_static(Vmem_ctrl___024root* vlSelf);
void Vmem_ctrl___024root___eval_initial(Vmem_ctrl___024root* vlSelf);
void Vmem_ctrl___024root___eval_settle(Vmem_ctrl___024root* vlSelf);
void Vmem_ctrl___024root___eval(Vmem_ctrl___024root* vlSelf);

void Vmem_ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmem_ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmem_ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmem_ctrl___024root___eval_static(&(vlSymsp->TOP));
        Vmem_ctrl___024root___eval_initial(&(vlSymsp->TOP));
        Vmem_ctrl___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmem_ctrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmem_ctrl::eventsPending() { return false; }

uint64_t Vmem_ctrl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vmem_ctrl___024root___eval_final(Vmem_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vmem_ctrl::final() {
    contextp()->executingFinal(true);
    Vmem_ctrl___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmem_ctrl::hierName() const { return vlSymsp->name(); }
const char* Vmem_ctrl::modelName() const { return "Vmem_ctrl"; }
unsigned Vmem_ctrl::threads() const { return 1; }
void Vmem_ctrl::prepareClone() const { contextp()->prepareClone(); }
void Vmem_ctrl::atClone() const {
    contextp()->threadPoolpOnClone();
}
