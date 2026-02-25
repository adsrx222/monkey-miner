// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstd_pipeline_core_tb__pch.h"

//============================================================
// Constructors

Vstd_pipeline_core_tb::Vstd_pipeline_core_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstd_pipeline_core_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , __PVT__std_pipeline_core_tb__DOT__tb_if{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__tb_if}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__61__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__61__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__60__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__60__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__59__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__59__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__58__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__58__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__57__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__57__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__56__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__56__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__55__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__55__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__54__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__54__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__53__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__53__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__52__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__52__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__51__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__51__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__50__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__50__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__49__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__49__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__48__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__48__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__47__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__47__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__46__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__46__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__45__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__45__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__44__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__44__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__43__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__43__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__42__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__42__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__41__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__41__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__40__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__40__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__39__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__39__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__38__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__38__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__37__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__37__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__36__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__36__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__35__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__35__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__34__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__34__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__33__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__33__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__32__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__32__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__31__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__31__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__30__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__30__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__29__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__29__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__28__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__28__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__27__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__27__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__26__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__26__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__25__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__25__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__24__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__24__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__23__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__23__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__22__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__22__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__21__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__21__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__20__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__20__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__19__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__19__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__18__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__18__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__17__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__17__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__16__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__16__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__15__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__15__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__14__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__14__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__13__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__13__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__12__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__12__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__11__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__11__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__10__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__10__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__9__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__9__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__8__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__8__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__7__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__7__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__6__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__6__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__5__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__5__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__4__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__4__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__3__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__3__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__2__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__2__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__}
    , __PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__0__KET__{vlSymsp->TOP.__PVT__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__0__KET__}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstd_pipeline_core_tb::Vstd_pipeline_core_tb(const char* _vcname__)
    : Vstd_pipeline_core_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstd_pipeline_core_tb::~Vstd_pipeline_core_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstd_pipeline_core_tb___024root___eval_debug_assertions(Vstd_pipeline_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstd_pipeline_core_tb___024root___eval_static(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___eval_initial(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___eval_settle(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___eval(Vstd_pipeline_core_tb___024root* vlSelf);

void Vstd_pipeline_core_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstd_pipeline_core_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstd_pipeline_core_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstd_pipeline_core_tb___024root___eval_static(&(vlSymsp->TOP));
        Vstd_pipeline_core_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstd_pipeline_core_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstd_pipeline_core_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstd_pipeline_core_tb::eventsPending() { return false; }

uint64_t Vstd_pipeline_core_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstd_pipeline_core_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstd_pipeline_core_tb___024root___eval_final(Vstd_pipeline_core_tb___024root* vlSelf);

VL_ATTR_COLD void Vstd_pipeline_core_tb::final() {
    Vstd_pipeline_core_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstd_pipeline_core_tb::hierName() const { return vlSymsp->name(); }
const char* Vstd_pipeline_core_tb::modelName() const { return "Vstd_pipeline_core_tb"; }
unsigned Vstd_pipeline_core_tb::threads() const { return 1; }
void Vstd_pipeline_core_tb::prepareClone() const { contextp()->prepareClone(); }
void Vstd_pipeline_core_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
