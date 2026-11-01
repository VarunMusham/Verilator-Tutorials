// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPI_MASTER__SYMS_H_
#define VERILATED_VSPI_MASTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vspi_master.h"

// INCLUDE MODULE CLASSES
#include "Vspi_master___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vspi_master__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspi_master* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspi_master___024root          TOP;

    // CONSTRUCTORS
    Vspi_master__Syms(VerilatedContext* contextp, const char* namep, Vspi_master* modelp);
    ~Vspi_master__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
