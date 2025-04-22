// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort_tb.h for the primary calling header

#include "Vsort_tb__pch.h"
#include "Vsort_tb__Syms.h"
#include "Vsort_tb___024root.h"

void Vsort_tb___024root___ctor_var_reset(Vsort_tb___024root* vlSelf);

Vsort_tb___024root::Vsort_tb___024root(Vsort_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsort_tb___024root___ctor_var_reset(this);
}

void Vsort_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsort_tb___024root::~Vsort_tb___024root() {
}
