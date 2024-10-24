// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VICACHE_TOP_H_
#define VERILATED_VICACHE_TOP_H_  // guard

#include "verilated.h"

class Vicache_top__Syms;
class Vicache_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vicache_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vicache_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&prefetch_enable,0,0);
    VL_OUT8(&upstream_txdat_vld,0,0);
    VL_OUT8(&upstream_txdat_txnid,4,0);
    VL_IN8(&upstream_txdat_rdy,0,0);
    VL_IN8(&upstream_rxreq_vld,0,0);
    VL_OUT8(&upstream_rxreq_rdy,0,0);
    VL_IN8(&downstream_rxsnp_vld,0,0);
    VL_OUT8(&downstream_rxsnp_rdy,0,0);
    VL_OUT8(&downstream_txreq_vld,0,0);
    VL_IN8(&downstream_txreq_rdy,0,0);
    VL_OUT8(&downstream_txreq_entry_id,3,0);
    VL_IN8(&downstream_txrsp_vld,0,0);
    VL_OUT8(&downstream_txrsp_rdy,0,0);
    VL_IN8(&downstream_txrsp_opcode,4,0);
    VL_IN8(&downstream_rxdat_vld,0,0);
    VL_OUT8(&downstream_rxdat_rdy,0,0);
    VL_IN8(&prefetch_req_vld,0,0);
    VL_IN8(&pref_to_mshr_req_rdy,0,0);
    VL_OUTW(&upstream_txdat_data,511,0,16);
    VL_IN64(&upstream_rxreq_pld,41,0);
    VL_IN64(&downstream_rxsnp_pld,41,0);
    VL_OUT64(&downstream_txreq_pld,41,0);
    VL_INW(&downstream_rxdat_pld,525,0,17);
    VL_IN64(&prefetch_req_pld,41,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vicache_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vicache_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vicache_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vicache_top();
  private:
    VL_UNCOPYABLE(Vicache_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

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
