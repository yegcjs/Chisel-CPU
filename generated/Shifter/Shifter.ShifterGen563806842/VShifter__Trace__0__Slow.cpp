// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShifter__Syms.h"


VL_ATTR_COLD void VShifter___024root__trace_init_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShifter___024root__trace_init_top(VShifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_init_top\n"); );
    // Body
    VShifter___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void VShifter___024root__trace_init_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"io_in", false,-1, 31,0);
    tracep->declBus(c+4,"io_amount", false,-1, 4,0);
    tracep->declBus(c+5,"io_operation", false,-1, 1,0);
    tracep->declBus(c+6,"io_out", false,-1, 31,0);
    tracep->declBit(c+1,"Shifter clock", false,-1);
    tracep->declBit(c+2,"Shifter reset", false,-1);
    tracep->declBus(c+3,"Shifter io_in", false,-1, 31,0);
    tracep->declBus(c+4,"Shifter io_amount", false,-1, 4,0);
    tracep->declBus(c+5,"Shifter io_operation", false,-1, 1,0);
    tracep->declBus(c+6,"Shifter io_out", false,-1, 31,0);
    tracep->declQuad(c+7,"Shifter extended_in", false,-1, 63,0);
}

VL_ATTR_COLD void VShifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VShifter___024root__trace_register(VShifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VShifter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VShifter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VShifter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VShifter___024root__trace_full_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShifter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_full_top_0\n"); );
    // Init
    VShifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShifter___024root*>(voidSelf);
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VShifter___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VShifter___024root__trace_full_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullIData(oldp+3,(vlSelf->io_in),32);
    tracep->fullCData(oldp+4,(vlSelf->io_amount),5);
    tracep->fullCData(oldp+5,(vlSelf->io_operation),2);
    tracep->fullIData(oldp+6,(vlSelf->io_out),32);
    tracep->fullQData(oldp+7,(((QData)((IData)(vlSelf->io_in)) 
                               << 0x20U)),64);
}
