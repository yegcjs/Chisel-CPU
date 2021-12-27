// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifter.h for the primary calling header

#include "verilated.h"

#include "VShifter___024root.h"

VL_ATTR_COLD void VShifter___024root___eval_initial(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_initial\n"); );
}

void VShifter___024root___combo__TOP__1(VShifter___024root* vlSelf);

VL_ATTR_COLD void VShifter___024root___eval_settle(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_settle\n"); );
    // Body
    VShifter___024root___combo__TOP__1(vlSelf);
}

VL_ATTR_COLD void VShifter___024root___final(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___final\n"); );
}

VL_ATTR_COLD void VShifter___024root___ctor_var_reset(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in = VL_RAND_RESET_I(32);
    vlSelf->io_amount = VL_RAND_RESET_I(5);
    vlSelf->io_operation = VL_RAND_RESET_I(2);
    vlSelf->io_out = VL_RAND_RESET_I(32);
}
