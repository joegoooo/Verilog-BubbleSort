// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsort_tb__Syms.h"


VL_ATTR_COLD void Vsort_tb___024root__trace_init_sub__TOP__0(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("sort_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"NUM_VALS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"NUM_VALS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("tmp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsort_tb___024root__trace_init_top(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_init_top\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsort_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsort_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsort_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsort_tb___024root__trace_register(Vsort_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_register\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsort_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsort_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsort_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsort_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_const_0\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_const_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_const_0_sub_0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+14,(8U),32);
    bufp->fullIData(oldp+15,(4U),32);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_full_0\n"); );
    // Init
    Vsort_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort_tb___024root*>(voidSelf);
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsort_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsort_tb___024root__trace_full_0_sub_0(Vsort_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root__trace_full_0_sub_0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((((vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                [0U] << 0x1cU) | (vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                                  [1U] 
                                                  << 0x18U)) 
                              | ((vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                  [2U] << 0x14U) | 
                                 (vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                  [3U] << 0x10U))) 
                             | (((vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                  [4U] << 0xcU) | (
                                                   vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                                   [5U] 
                                                   << 8U)) 
                                | ((vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                    [6U] << 4U) | vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                                   [7U])))),32);
    bufp->fullIData(oldp+2,(vlSelfRef.sort_tb__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.sort_tb__DOT__dut__DOT__j),32);
    bufp->fullCData(oldp+4,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[0]),4);
    bufp->fullCData(oldp+5,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[1]),4);
    bufp->fullCData(oldp+6,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[2]),4);
    bufp->fullCData(oldp+7,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[3]),4);
    bufp->fullCData(oldp+8,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[4]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[5]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[6]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.sort_tb__DOT__dut__DOT__tmp[7]),4);
    bufp->fullIData(oldp+12,(vlSelfRef.sort_tb__DOT__in),32);
    bufp->fullIData(oldp+13,(vlSelfRef.sort_tb__DOT__i),32);
}
