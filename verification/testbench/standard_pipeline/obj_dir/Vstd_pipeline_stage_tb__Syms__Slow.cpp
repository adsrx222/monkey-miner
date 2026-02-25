// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstd_pipeline_stage_tb__pch.h"

Vstd_pipeline_stage_tb__Syms::Vstd_pipeline_stage_tb__Syms(VerilatedContext* contextp, const char* namep, Vstd_pipeline_stage_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1296);
    // Setup sub module instances
    TOP__std_pipeline_stage_tb__DOT__input_if.ctor(this, "std_pipeline_stage_tb.input_if");
    TOP__std_pipeline_stage_tb__DOT__output_if.ctor(this, "std_pipeline_stage_tb.output_if");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-6);
    _vm_contextp__->timeprecision(-7);
    // Setup each module's pointers to their submodules
    TOP.__PVT__std_pipeline_stage_tb__DOT__input_if = &TOP__std_pipeline_stage_tb__DOT__input_if;
    TOP.__PVT__std_pipeline_stage_tb__DOT__output_if = &TOP__std_pipeline_stage_tb__DOT__output_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__std_pipeline_stage_tb__DOT__input_if.__Vconfigure(true);
    TOP__std_pipeline_stage_tb__DOT__output_if.__Vconfigure(false);
    // Setup scopes
}

Vstd_pipeline_stage_tb__Syms::~Vstd_pipeline_stage_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__std_pipeline_stage_tb__DOT__output_if.dtor();
    TOP__std_pipeline_stage_tb__DOT__input_if.dtor();
}
