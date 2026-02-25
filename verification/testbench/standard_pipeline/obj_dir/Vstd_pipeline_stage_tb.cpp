// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstd_pipeline_stage_tb__pch.h"

//============================================================
// Constructors

Vstd_pipeline_stage_tb::Vstd_pipeline_stage_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstd_pipeline_stage_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , __PVT__std_pipeline_stage_tb__DOT__input_if{vlSymsp->TOP.__PVT__std_pipeline_stage_tb__DOT__input_if}
    , __PVT__std_pipeline_stage_tb__DOT__output_if{vlSymsp->TOP.__PVT__std_pipeline_stage_tb__DOT__output_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstd_pipeline_stage_tb::Vstd_pipeline_stage_tb(const char* _vcname__)
    : Vstd_pipeline_stage_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstd_pipeline_stage_tb::~Vstd_pipeline_stage_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstd_pipeline_stage_tb___024root___eval_debug_assertions(Vstd_pipeline_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstd_pipeline_stage_tb___024root___eval_static(Vstd_pipeline_stage_tb___024root* vlSelf);
void Vstd_pipeline_stage_tb___024root___eval_initial(Vstd_pipeline_stage_tb___024root* vlSelf);
void Vstd_pipeline_stage_tb___024root___eval_settle(Vstd_pipeline_stage_tb___024root* vlSelf);
void Vstd_pipeline_stage_tb___024root___eval(Vstd_pipeline_stage_tb___024root* vlSelf);

void Vstd_pipeline_stage_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstd_pipeline_stage_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstd_pipeline_stage_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstd_pipeline_stage_tb___024root___eval_static(&(vlSymsp->TOP));
        Vstd_pipeline_stage_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstd_pipeline_stage_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstd_pipeline_stage_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstd_pipeline_stage_tb::eventsPending() { return false; }

uint64_t Vstd_pipeline_stage_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstd_pipeline_stage_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstd_pipeline_stage_tb___024root___eval_final(Vstd_pipeline_stage_tb___024root* vlSelf);

VL_ATTR_COLD void Vstd_pipeline_stage_tb::final() {
    Vstd_pipeline_stage_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstd_pipeline_stage_tb::hierName() const { return vlSymsp->name(); }
const char* Vstd_pipeline_stage_tb::modelName() const { return "Vstd_pipeline_stage_tb"; }
unsigned Vstd_pipeline_stage_tb::threads() const { return 1; }
void Vstd_pipeline_stage_tb::prepareClone() const { contextp()->prepareClone(); }
void Vstd_pipeline_stage_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
