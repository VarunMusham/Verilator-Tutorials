// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSPI_MASTER_H_
#define VERILATED_VSPI_MASTER_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"

class Vspi_master__Syms;
class Vspi_master___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vspi_master VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vspi_master__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &clk;
    sc_core::sc_in<bool> &rst_n;
    sc_core::sc_in<bool> &start;
    sc_core::sc_in<uint32_t> &tx_data;
    sc_core::sc_out<uint32_t> &rx_data;
    sc_core::sc_out<bool> &busy;
    sc_core::sc_out<bool> &done;
    sc_core::sc_out<bool> &sclk;
    sc_core::sc_out<bool> &mosi;
    sc_core::sc_in<bool> &miso;
    sc_core::sc_out<bool> &cs_n;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vspi_master___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vspi_master);
    virtual ~Vspi_master();
  private:
    VL_UNCOPYABLE(Vspi_master);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
