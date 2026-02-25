// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSTD_PIPELINE_CORE_TB_H_
#define VERILATED_VSTD_PIPELINE_CORE_TB_H_  // guard

#include "verilated.h"

class Vstd_pipeline_core_tb__Syms;
class Vstd_pipeline_core_tb___024root;
class Vstd_pipeline_core_tb_pipe_if;
class Vstd_pipeline_core_tb_pipecore_if;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vstd_pipeline_core_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vstd_pipeline_core_tb__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset_n,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vstd_pipeline_core_tb_pipecore_if* const __PVT__std_pipeline_core_tb__DOT__tb_if;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__61__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__60__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__59__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__58__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__57__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__56__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__55__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__54__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__53__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__52__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__51__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__50__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__49__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__48__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__47__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__46__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__45__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__44__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__43__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__42__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__41__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__40__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__39__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__38__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__37__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__36__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__35__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__34__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__33__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__32__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__31__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__30__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__29__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__28__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__27__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__26__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__25__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__24__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__23__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__22__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__21__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__20__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__19__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__18__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__17__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__16__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__15__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__14__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__13__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__12__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__11__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__10__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__9__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__8__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__7__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__6__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__5__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__4__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__3__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__2__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__;
    Vstd_pipeline_core_tb_pipe_if* const __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__0__KET__;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vstd_pipeline_core_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vstd_pipeline_core_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vstd_pipeline_core_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vstd_pipeline_core_tb();
  private:
    VL_UNCOPYABLE(Vstd_pipeline_core_tb);  ///< Copying not allowed

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
