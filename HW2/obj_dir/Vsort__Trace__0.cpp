// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsort__Syms.h"


void Vsort___024root__trace_chg_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsort___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_chg_0\n"); );
    // Init
    Vsort___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort___024root*>(voidSelf);
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsort___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsort___024root__trace_chg_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_chg_0_sub_0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.sort__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.sort__DOT__j),32);
        bufp->chgCData(oldp+2,(vlSelfRef.sort__DOT__tmp[0]),4);
        bufp->chgCData(oldp+3,(vlSelfRef.sort__DOT__tmp[1]),4);
        bufp->chgCData(oldp+4,(vlSelfRef.sort__DOT__tmp[2]),4);
        bufp->chgCData(oldp+5,(vlSelfRef.sort__DOT__tmp[3]),4);
        bufp->chgCData(oldp+6,(vlSelfRef.sort__DOT__tmp[4]),4);
        bufp->chgCData(oldp+7,(vlSelfRef.sort__DOT__tmp[5]),4);
        bufp->chgCData(oldp+8,(vlSelfRef.sort__DOT__tmp[6]),4);
        bufp->chgCData(oldp+9,(vlSelfRef.sort__DOT__tmp[7]),4);
    }
    bufp->chgIData(oldp+10,(vlSelfRef.A),32);
    bufp->chgIData(oldp+11,(vlSelfRef.B),32);
}

void Vsort___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_cleanup\n"); );
    // Init
    Vsort___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort___024root*>(voidSelf);
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
