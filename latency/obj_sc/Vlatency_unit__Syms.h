// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLATENCY_UNIT__SYMS_H_
#define VERILATED_VLATENCY_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlatency_unit.h"

// INCLUDE MODULE CLASSES
#include "Vlatency_unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vlatency_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlatency_unit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlatency_unit___024root        TOP;

    // CONSTRUCTORS
    Vlatency_unit__Syms(VerilatedContext* contextp, const char* namep, Vlatency_unit* modelp);
    ~Vlatency_unit__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
