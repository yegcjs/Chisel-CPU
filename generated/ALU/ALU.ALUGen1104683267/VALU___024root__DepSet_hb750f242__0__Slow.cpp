// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_ATTR_COLD void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
}

void VALU___024root___combo__TOP__1(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    // Body
    VALU___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VALU___024root___final(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___final\n"); );
}

VL_ATTR_COLD void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_A_in = VL_RAND_RESET_I(32);
    vlSelf->io_B_in = VL_RAND_RESET_I(32);
    vlSelf->io_ALU_op = VL_RAND_RESET_I(4);
    vlSelf->io_ALU_out = VL_RAND_RESET_I(32);
    vlSelf->io_Zero = VL_RAND_RESET_I(1);
    vlSelf->io_Less = VL_RAND_RESET_I(1);
    vlSelf->io_Overflow_out = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__adder_io_overflow = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__ctrl = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__A_in_not = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__tocount_30 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_29 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_28 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_27 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_26 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_25 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_24 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_23 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_22 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_21 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_20 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_19 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_18 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_17 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_16 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_15 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_14 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_13 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_12 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_11 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_10 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_9 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_8 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_7 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_6 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_5 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_4 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_3 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_2 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__tocount_1 = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__count_30 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_29 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_28 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_27 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_26 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_25 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_24 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_23 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_22 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_21 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_20 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_19 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_18 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_17 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_16 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_15 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_14 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_13 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_12 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_11 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_10 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_9 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_8 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_7 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_6 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_5 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_4 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_3 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_2 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__count_1 = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__adder__DOT__B_in_not = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__adder__DOT__res = VL_RAND_RESET_Q(34);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
