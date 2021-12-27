// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifter.h for the primary calling header

#include "verilated.h"

#include "VShifter___024root.h"

VL_INLINE_OPT void VShifter___024root___combo__TOP__1(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___combo__TOP__1\n"); );
    // Init
    QData/*63:0*/ Shifter__DOT___io_out_T_5;
    // Body
    Shifter__DOT___io_out_T_5 = (((QData)((IData)(vlSelf->io_in)) 
                                  << 0x20U) >> (IData)(vlSelf->io_amount));
    vlSelf->io_out = (IData)((0x7fffffffffffffffULL 
                              & ((0U == (IData)(vlSelf->io_operation))
                                  ? ((QData)((IData)(vlSelf->io_in)) 
                                     << (IData)(vlSelf->io_amount))
                                  : (QData)((IData)(
                                                    ((1U 
                                                      == (IData)(vlSelf->io_operation))
                                                      ? 
                                                     (vlSelf->io_in 
                                                      >> (IData)(vlSelf->io_amount))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->io_operation))
                                                       ? 
                                                      VL_SHIFTRS_III(32,32,5, vlSelf->io_in, (IData)(vlSelf->io_amount))
                                                       : 
                                                      ((IData)(
                                                               (Shifter__DOT___io_out_T_5 
                                                                >> 0x20U)) 
                                                       | (IData)(Shifter__DOT___io_out_T_5)))))))));
}

void VShifter___024root___eval(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval\n"); );
    // Body
    VShifter___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void VShifter___024root___eval_debug_assertions(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_amount & 0xe0U))) {
        Verilated::overWidthError("io_amount");}
    if (VL_UNLIKELY((vlSelf->io_operation & 0xfcU))) {
        Verilated::overWidthError("io_operation");}
}
#endif  // VL_DEBUG
