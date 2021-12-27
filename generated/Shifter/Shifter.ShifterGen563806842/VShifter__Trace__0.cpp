// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShifter__Syms.h"


void VShifter___024root__trace_chg_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep);

void VShifter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_chg_top_0\n"); );
    // Init
    VShifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShifter___024root*>(voidSelf);
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VShifter___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VShifter___024root__trace_chg_sub_0(VShifter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->clock));
    tracep->chgBit(oldp+1,(vlSelf->reset));
    tracep->chgIData(oldp+2,(vlSelf->io_in),32);
    tracep->chgCData(oldp+3,(vlSelf->io_amount),5);
    tracep->chgCData(oldp+4,(vlSelf->io_operation),2);
    tracep->chgIData(oldp+5,(vlSelf->io_out),32);
    tracep->chgQData(oldp+6,(((QData)((IData)(vlSelf->io_in)) 
                              << 0x20U)),64);
}

void VShifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root__trace_cleanup\n"); );
    // Init
    VShifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShifter___024root*>(voidSelf);
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
