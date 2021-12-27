// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___combo__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__1\n"); );
    // Init
    IData/*31:0*/ ALU__DOT___io_ALU_out_T_1;
    // Body
    vlSelf->ALU__DOT__ctrl = ((4U & ((((IData)((0U 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->io_ALU_op)))) 
                                       | (IData)((5U 
                                                  == 
                                                  (0xdU 
                                                   & (IData)(vlSelf->io_ALU_op))))) 
                                      | (IData)((0xaU 
                                                 == 
                                                 (0xaU 
                                                  & (IData)(vlSelf->io_ALU_op))))) 
                                     << 2U)) | ((2U 
                                                 & (((((IData)(
                                                               (0U 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelf->io_ALU_op)))) 
                                                       | (IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xdU 
                                                                   & (IData)(vlSelf->io_ALU_op))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->io_ALU_op))))) 
                                                     | (IData)(
                                                               (0xaU 
                                                                == 
                                                                (0xaU 
                                                                 & (IData)(vlSelf->io_ALU_op))))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (((IData)(
                                                               (0U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->io_ALU_op)))) 
                                                       | (IData)(
                                                                 (5U 
                                                                  == 
                                                                  (0xdU 
                                                                   & (IData)(vlSelf->io_ALU_op))))) 
                                                      | (IData)(
                                                                (0xeU 
                                                                 == 
                                                                 (0xeU 
                                                                  & (IData)(vlSelf->io_ALU_op))))))));
    ALU__DOT___io_ALU_out_T_1 = (vlSelf->io_A_in | vlSelf->io_B_in);
    if ((1U & (IData)(vlSelf->io_ALU_op))) {
        vlSelf->ALU__DOT__adder__DOT__B_in_not = (~ vlSelf->io_B_in);
        vlSelf->ALU__DOT__A_in_not = (~ vlSelf->io_A_in);
    } else {
        vlSelf->ALU__DOT__adder__DOT__B_in_not = vlSelf->io_B_in;
        vlSelf->ALU__DOT__A_in_not = vlSelf->io_A_in;
    }
    vlSelf->ALU__DOT__adder__DOT__res = (0x3ffffffffULL 
                                         & ((0x1ffffffffULL 
                                             & ((QData)((IData)(vlSelf->io_A_in)) 
                                                + (QData)((IData)(vlSelf->ALU__DOT__adder__DOT__B_in_not)))) 
                                            + (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->io_ALU_op))))));
    vlSelf->ALU__DOT__tocount_30 = (IData)((0U == (0xc0000000U 
                                                   & vlSelf->ALU__DOT__A_in_not)));
    vlSelf->io_Zero = (0U == (IData)(vlSelf->ALU__DOT__adder__DOT__res));
    vlSelf->ALU__DOT__adder_io_overflow = (1U & (((
                                                   (vlSelf->io_A_in 
                                                    & vlSelf->ALU__DOT__adder__DOT__B_in_not) 
                                                   >> 0x1fU) 
                                                  & (~ (IData)(
                                                               (vlSelf->ALU__DOT__adder__DOT__res 
                                                                >> 0x1fU)))) 
                                                 | (((~ 
                                                      (vlSelf->io_A_in 
                                                       >> 0x1fU)) 
                                                     & (~ 
                                                        (vlSelf->ALU__DOT__adder__DOT__B_in_not 
                                                         >> 0x1fU))) 
                                                    & (IData)(
                                                              (vlSelf->ALU__DOT__adder__DOT__res 
                                                               >> 0x1fU)))));
    if (vlSelf->ALU__DOT__tocount_30) {
        vlSelf->ALU__DOT__count_30 = (0x3fU & ((IData)(1U) 
                                               + (1U 
                                                  & (~ 
                                                     (vlSelf->ALU__DOT__A_in_not 
                                                      >> 0x1fU)))));
        vlSelf->ALU__DOT__tocount_29 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x1dU)));
    } else {
        vlSelf->ALU__DOT__count_30 = (0x3fU & (1U & 
                                               (~ (vlSelf->ALU__DOT__A_in_not 
                                                   >> 0x1fU))));
        vlSelf->ALU__DOT__tocount_29 = 0U;
    }
    vlSelf->io_Overflow_out = (IData)(((0xeU == (0xeU 
                                                 & (IData)(vlSelf->io_ALU_op))) 
                                       & (IData)(vlSelf->ALU__DOT__adder_io_overflow)));
    vlSelf->io_Less = (1U & ((7U == (IData)(vlSelf->io_ALU_op))
                              ? (~ (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                            >> 0x20U)))
                              : ((IData)(vlSelf->ALU__DOT__adder_io_overflow) 
                                 ^ (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                            >> 0x1fU)))));
    if (vlSelf->ALU__DOT__tocount_29) {
        vlSelf->ALU__DOT__count_29 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_30)));
        vlSelf->ALU__DOT__tocount_28 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x1cU)));
    } else {
        vlSelf->ALU__DOT__count_29 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_30));
        vlSelf->ALU__DOT__tocount_28 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_28) {
        vlSelf->ALU__DOT__count_28 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_29)));
        vlSelf->ALU__DOT__tocount_27 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x1bU)));
    } else {
        vlSelf->ALU__DOT__count_28 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_29));
        vlSelf->ALU__DOT__tocount_27 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_27) {
        vlSelf->ALU__DOT__count_27 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_28)));
        vlSelf->ALU__DOT__tocount_26 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x1aU)));
    } else {
        vlSelf->ALU__DOT__count_27 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_28));
        vlSelf->ALU__DOT__tocount_26 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_26) {
        vlSelf->ALU__DOT__count_26 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_27)));
        vlSelf->ALU__DOT__tocount_25 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x19U)));
    } else {
        vlSelf->ALU__DOT__count_26 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_27));
        vlSelf->ALU__DOT__tocount_25 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_25) {
        vlSelf->ALU__DOT__count_25 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_26)));
        vlSelf->ALU__DOT__tocount_24 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x18U)));
    } else {
        vlSelf->ALU__DOT__count_25 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_26));
        vlSelf->ALU__DOT__tocount_24 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_24) {
        vlSelf->ALU__DOT__count_24 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_25)));
        vlSelf->ALU__DOT__tocount_23 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x17U)));
    } else {
        vlSelf->ALU__DOT__count_24 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_25));
        vlSelf->ALU__DOT__tocount_23 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_23) {
        vlSelf->ALU__DOT__count_23 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_24)));
        vlSelf->ALU__DOT__tocount_22 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x16U)));
    } else {
        vlSelf->ALU__DOT__count_23 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_24));
        vlSelf->ALU__DOT__tocount_22 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_22) {
        vlSelf->ALU__DOT__count_22 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_23)));
        vlSelf->ALU__DOT__tocount_21 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x15U)));
    } else {
        vlSelf->ALU__DOT__count_22 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_23));
        vlSelf->ALU__DOT__tocount_21 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_21) {
        vlSelf->ALU__DOT__count_21 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_22)));
        vlSelf->ALU__DOT__tocount_20 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x14U)));
    } else {
        vlSelf->ALU__DOT__count_21 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_22));
        vlSelf->ALU__DOT__tocount_20 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_20) {
        vlSelf->ALU__DOT__count_20 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_21)));
        vlSelf->ALU__DOT__tocount_19 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x13U)));
    } else {
        vlSelf->ALU__DOT__count_20 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_21));
        vlSelf->ALU__DOT__tocount_19 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_19) {
        vlSelf->ALU__DOT__count_19 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_20)));
        vlSelf->ALU__DOT__tocount_18 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x12U)));
    } else {
        vlSelf->ALU__DOT__count_19 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_20));
        vlSelf->ALU__DOT__tocount_18 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_18) {
        vlSelf->ALU__DOT__count_18 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_19)));
        vlSelf->ALU__DOT__tocount_17 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x11U)));
    } else {
        vlSelf->ALU__DOT__count_18 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_19));
        vlSelf->ALU__DOT__tocount_17 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_17) {
        vlSelf->ALU__DOT__count_17 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_18)));
        vlSelf->ALU__DOT__tocount_16 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0x10U)));
    } else {
        vlSelf->ALU__DOT__count_17 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_18));
        vlSelf->ALU__DOT__tocount_16 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_16) {
        vlSelf->ALU__DOT__count_16 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_17)));
        vlSelf->ALU__DOT__tocount_15 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xfU)));
    } else {
        vlSelf->ALU__DOT__count_16 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_17));
        vlSelf->ALU__DOT__tocount_15 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_15) {
        vlSelf->ALU__DOT__count_15 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_16)));
        vlSelf->ALU__DOT__tocount_14 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xeU)));
    } else {
        vlSelf->ALU__DOT__count_15 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_16));
        vlSelf->ALU__DOT__tocount_14 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_14) {
        vlSelf->ALU__DOT__count_14 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_15)));
        vlSelf->ALU__DOT__tocount_13 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xdU)));
    } else {
        vlSelf->ALU__DOT__count_14 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_15));
        vlSelf->ALU__DOT__tocount_13 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_13) {
        vlSelf->ALU__DOT__count_13 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_14)));
        vlSelf->ALU__DOT__tocount_12 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xcU)));
    } else {
        vlSelf->ALU__DOT__count_13 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_14));
        vlSelf->ALU__DOT__tocount_12 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_12) {
        vlSelf->ALU__DOT__count_12 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_13)));
        vlSelf->ALU__DOT__tocount_11 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xbU)));
    } else {
        vlSelf->ALU__DOT__count_12 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_13));
        vlSelf->ALU__DOT__tocount_11 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_11) {
        vlSelf->ALU__DOT__count_11 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_12)));
        vlSelf->ALU__DOT__tocount_10 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                 >> 0xaU)));
    } else {
        vlSelf->ALU__DOT__count_11 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_12));
        vlSelf->ALU__DOT__tocount_10 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_10) {
        vlSelf->ALU__DOT__count_10 = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->ALU__DOT__count_11)));
        vlSelf->ALU__DOT__tocount_9 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 9U)));
    } else {
        vlSelf->ALU__DOT__count_10 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_11));
        vlSelf->ALU__DOT__tocount_9 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_9) {
        vlSelf->ALU__DOT__count_9 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_10)));
        vlSelf->ALU__DOT__tocount_8 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 8U)));
    } else {
        vlSelf->ALU__DOT__count_9 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_10));
        vlSelf->ALU__DOT__tocount_8 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_8) {
        vlSelf->ALU__DOT__count_8 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_9)));
        vlSelf->ALU__DOT__tocount_7 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 7U)));
    } else {
        vlSelf->ALU__DOT__count_8 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_9));
        vlSelf->ALU__DOT__tocount_7 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_7) {
        vlSelf->ALU__DOT__count_7 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_8)));
        vlSelf->ALU__DOT__tocount_6 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 6U)));
    } else {
        vlSelf->ALU__DOT__count_7 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_8));
        vlSelf->ALU__DOT__tocount_6 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_6) {
        vlSelf->ALU__DOT__count_6 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_7)));
        vlSelf->ALU__DOT__tocount_5 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 5U)));
    } else {
        vlSelf->ALU__DOT__count_6 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_7));
        vlSelf->ALU__DOT__tocount_5 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_5) {
        vlSelf->ALU__DOT__count_5 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_6)));
        vlSelf->ALU__DOT__tocount_4 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 4U)));
    } else {
        vlSelf->ALU__DOT__count_5 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_6));
        vlSelf->ALU__DOT__tocount_4 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_4) {
        vlSelf->ALU__DOT__count_4 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_5)));
        vlSelf->ALU__DOT__tocount_3 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 3U)));
    } else {
        vlSelf->ALU__DOT__count_4 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_5));
        vlSelf->ALU__DOT__tocount_3 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_3) {
        vlSelf->ALU__DOT__count_3 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_4)));
        vlSelf->ALU__DOT__tocount_2 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 2U)));
    } else {
        vlSelf->ALU__DOT__count_3 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_4));
        vlSelf->ALU__DOT__tocount_2 = 0U;
    }
    if (vlSelf->ALU__DOT__tocount_2) {
        vlSelf->ALU__DOT__count_2 = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_3)));
        vlSelf->ALU__DOT__tocount_1 = (1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                                >> 1U)));
    } else {
        vlSelf->ALU__DOT__count_2 = (0x3fU & (IData)(vlSelf->ALU__DOT__count_3));
        vlSelf->ALU__DOT__tocount_1 = 0U;
    }
    vlSelf->ALU__DOT__count_1 = (0x3fU & ((IData)(vlSelf->ALU__DOT__tocount_1)
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelf->ALU__DOT__count_2))
                                           : (IData)(vlSelf->ALU__DOT__count_2)));
    vlSelf->io_ALU_out = ((0U == (IData)(vlSelf->ALU__DOT__ctrl))
                           ? (0x3fU & (((IData)(vlSelf->ALU__DOT__tocount_1) 
                                        & (~ vlSelf->ALU__DOT__A_in_not))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->ALU__DOT__count_1))
                                        : (IData)(vlSelf->ALU__DOT__count_1)))
                           : ((1U == (IData)(vlSelf->ALU__DOT__ctrl))
                               ? (vlSelf->io_A_in ^ vlSelf->io_B_in)
                               : ((2U == (IData)(vlSelf->ALU__DOT__ctrl))
                                   ? ALU__DOT___io_ALU_out_T_1
                                   : ((3U == (IData)(vlSelf->ALU__DOT__ctrl))
                                       ? (~ ALU__DOT___io_ALU_out_T_1)
                                       : ((4U == (IData)(vlSelf->ALU__DOT__ctrl))
                                           ? (vlSelf->io_A_in 
                                              & vlSelf->io_B_in)
                                           : ((5U == (IData)(vlSelf->ALU__DOT__ctrl))
                                               ? (IData)(vlSelf->io_Less)
                                               : ((6U 
                                                   == (IData)(vlSelf->ALU__DOT__ctrl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->io_ALU_op))
                                                    ? 
                                                   ((((0x8000U 
                                                       & vlSelf->io_B_in)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->io_B_in))
                                                    : 
                                                   ((((0x80U 
                                                       & vlSelf->io_B_in)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->io_B_in)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ALU__DOT__ctrl))
                                                    ? (IData)(vlSelf->ALU__DOT__adder__DOT__res)
                                                    : 0U))))))));
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_ALU_op & 0xf0U))) {
        Verilated::overWidthError("io_ALU_op");}
}
#endif  // VL_DEBUG
