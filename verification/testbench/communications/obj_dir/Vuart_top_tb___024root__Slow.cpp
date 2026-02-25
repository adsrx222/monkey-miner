// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

void Vuart_top_tb___024root___ctor_var_reset(Vuart_top_tb___024root* vlSelf);

Vuart_top_tb___024root::Vuart_top_tb___024root(Vuart_top_tb__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vuart_top_tb___024root___ctor_var_reset(this);
}

void Vuart_top_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuart_top_tb___024root::~Vuart_top_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
