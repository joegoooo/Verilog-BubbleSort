// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort.h for the primary calling header

#include "Vsort__pch.h"
#include "Vsort__Syms.h"
#include "Vsort___024root.h"

void Vsort___024root___ctor_var_reset(Vsort___024root* vlSelf);

Vsort___024root::Vsort___024root(Vsort__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsort___024root___ctor_var_reset(this);
}

void Vsort___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsort___024root::~Vsort___024root() {
}
