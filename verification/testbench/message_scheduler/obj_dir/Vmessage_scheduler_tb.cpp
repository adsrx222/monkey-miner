// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmessage_scheduler_tb__pch.h"

//============================================================
// Constructors

Vmessage_scheduler_tb::Vmessage_scheduler_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmessage_scheduler_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , __PVT__message_scheduler_tb__DOT__tb_if{vlSymsp->TOP.__PVT__message_scheduler_tb__DOT__tb_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmessage_scheduler_tb::Vmessage_scheduler_tb(const char* _vcname__)
    : Vmessage_scheduler_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmessage_scheduler_tb::~Vmessage_scheduler_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmessage_scheduler_tb___024root___eval_debug_assertions(Vmessage_scheduler_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmessage_scheduler_tb___024root___eval_static(Vmessage_scheduler_tb___024root* vlSelf);
void Vmessage_scheduler_tb___024root___eval_initial(Vmessage_scheduler_tb___024root* vlSelf);
void Vmessage_scheduler_tb___024root___eval_settle(Vmessage_scheduler_tb___024root* vlSelf);
void Vmessage_scheduler_tb___024root___eval(Vmessage_scheduler_tb___024root* vlSelf);

void Vmessage_scheduler_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmessage_scheduler_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmessage_scheduler_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmessage_scheduler_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmessage_scheduler_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmessage_scheduler_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmessage_scheduler_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmessage_scheduler_tb::eventsPending() { return false; }

uint64_t Vmessage_scheduler_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmessage_scheduler_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmessage_scheduler_tb___024root___eval_final(Vmessage_scheduler_tb___024root* vlSelf);

VL_ATTR_COLD void Vmessage_scheduler_tb::final() {
    Vmessage_scheduler_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmessage_scheduler_tb::hierName() const { return vlSymsp->name(); }
const char* Vmessage_scheduler_tb::modelName() const { return "Vmessage_scheduler_tb"; }
unsigned Vmessage_scheduler_tb::threads() const { return 1; }
void Vmessage_scheduler_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmessage_scheduler_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
