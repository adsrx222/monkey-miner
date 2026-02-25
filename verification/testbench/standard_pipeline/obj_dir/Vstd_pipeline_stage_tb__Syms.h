// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTD_PIPELINE_STAGE_TB__SYMS_H_
#define VERILATED_VSTD_PIPELINE_STAGE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstd_pipeline_stage_tb.h"

// INCLUDE MODULE CLASSES
#include "Vstd_pipeline_stage_tb___024root.h"
#include "Vstd_pipeline_stage_tb_pipe_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vstd_pipeline_stage_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstd_pipeline_stage_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstd_pipeline_stage_tb___024root TOP;
    Vstd_pipeline_stage_tb_pipe_if TOP__std_pipeline_stage_tb__DOT__input_if;
    Vstd_pipeline_stage_tb_pipe_if TOP__std_pipeline_stage_tb__DOT__output_if;

    // CONSTRUCTORS
    Vstd_pipeline_stage_tb__Syms(VerilatedContext* contextp, const char* namep, Vstd_pipeline_stage_tb* modelp);
    ~Vstd_pipeline_stage_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
