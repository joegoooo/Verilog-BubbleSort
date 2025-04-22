// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsort__Syms.h"


VL_ATTR_COLD void Vsort___024root__trace_init_sub__TOP__0(Vsort___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_init_sub__TOP__0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+11,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sort", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"NUM_VALS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsort___024root__trace_init_top(Vsort___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_init_top\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsort___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsort___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsort___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsort___024root__trace_register(Vsort___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_register\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsort___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsort___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsort___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsort___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsort___024root__trace_const_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_const_0\n"); );
    // Init
    Vsort___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort___024root*>(voidSelf);
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort___024root__trace_const_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_const_0_sub_0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(8U),32);
    bufp->fullIData(oldp+14,(4U),32);
}

VL_ATTR_COLD void Vsort___024root__trace_full_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_full_0\n"); );
    // Init
    Vsort___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort___024root*>(voidSelf);
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort___024root__trace_full_0_sub_0(Vsort___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root__trace_full_0_sub_0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.sort__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.sort__DOT__j),32);
    bufp->fullCData(oldp+3,(vlSelfRef.sort__DOT__tmp[0]),4);
    bufp->fullCData(oldp+4,(vlSelfRef.sort__DOT__tmp[1]),4);
    bufp->fullCData(oldp+5,(vlSelfRef.sort__DOT__tmp[2]),4);
    bufp->fullCData(oldp+6,(vlSelfRef.sort__DOT__tmp[3]),4);
    bufp->fullCData(oldp+7,(vlSelfRef.sort__DOT__tmp[4]),4);
    bufp->fullCData(oldp+8,(vlSelfRef.sort__DOT__tmp[5]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.sort__DOT__tmp[6]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.sort__DOT__tmp[7]),4);
    bufp->fullIData(oldp+11,(vlSelfRef.A),32);
    bufp->fullIData(oldp+12,(vlSelfRef.B),32);
}
