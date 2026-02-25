// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmessage_scheduler_tb__pch.h"

Vmessage_scheduler_tb__Syms::Vmessage_scheduler_tb__Syms(VerilatedContext* contextp, const char* namep, Vmessage_scheduler_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(4442);
    // Setup sub module instances
    TOP__message_scheduler_tb__DOT__tb_if.ctor(this, "message_scheduler_tb.tb_if");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-6);
    _vm_contextp__->timeprecision(-7);
    // Setup each module's pointers to their submodules
    TOP.__PVT__message_scheduler_tb__DOT__tb_if = &TOP__message_scheduler_tb__DOT__tb_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__message_scheduler_tb__DOT__tb_if.__Vconfigure(true);
    // Setup scopes
}

Vmessage_scheduler_tb__Syms::~Vmessage_scheduler_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__message_scheduler_tb__DOT__tb_if.dtor();
}
