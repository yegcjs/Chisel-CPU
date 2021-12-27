// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_init_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+75,"clock", false,-1);
    tracep->declBit(c+76,"reset", false,-1);
    tracep->declBus(c+77,"io_A_in", false,-1, 31,0);
    tracep->declBus(c+78,"io_B_in", false,-1, 31,0);
    tracep->declBus(c+79,"io_ALU_op", false,-1, 3,0);
    tracep->declBus(c+80,"io_ALU_out", false,-1, 31,0);
    tracep->declBit(c+81,"io_Zero", false,-1);
    tracep->declBit(c+82,"io_Less", false,-1);
    tracep->declBit(c+83,"io_Overflow_out", false,-1);
    tracep->declBit(c+75,"ALU clock", false,-1);
    tracep->declBit(c+76,"ALU reset", false,-1);
    tracep->declBus(c+77,"ALU io_A_in", false,-1, 31,0);
    tracep->declBus(c+78,"ALU io_B_in", false,-1, 31,0);
    tracep->declBus(c+79,"ALU io_ALU_op", false,-1, 3,0);
    tracep->declBus(c+80,"ALU io_ALU_out", false,-1, 31,0);
    tracep->declBit(c+81,"ALU io_Zero", false,-1);
    tracep->declBit(c+82,"ALU io_Less", false,-1);
    tracep->declBit(c+83,"ALU io_Overflow_out", false,-1);
    tracep->declBit(c+84,"ALU adder_io_cin", false,-1);
    tracep->declBus(c+77,"ALU adder_io_A_in", false,-1, 31,0);
    tracep->declBus(c+78,"ALU adder_io_B_in", false,-1, 31,0);
    tracep->declBit(c+1,"ALU adder_io_zero", false,-1);
    tracep->declBit(c+2,"ALU adder_io_carry", false,-1);
    tracep->declBit(c+3,"ALU adder_io_overflow", false,-1);
    tracep->declBit(c+4,"ALU adder_io_negative", false,-1);
    tracep->declBus(c+5,"ALU adder_io_O_out", false,-1, 31,0);
    tracep->declBit(c+85,"ALU ctrl_hi", false,-1);
    tracep->declBit(c+86,"ALU ctrl_hi_1", false,-1);
    tracep->declBit(c+87,"ALU ctrl_lo", false,-1);
    tracep->declBus(c+6,"ALU ctrl", false,-1, 2,0);
    tracep->declBus(c+7,"ALU A_in_not", false,-1, 31,0);
    tracep->declBit(c+8,"ALU tocount_31", false,-1);
    tracep->declBit(c+9,"ALU tocount_30", false,-1);
    tracep->declBit(c+10,"ALU tocount_29", false,-1);
    tracep->declBit(c+11,"ALU tocount_28", false,-1);
    tracep->declBit(c+12,"ALU tocount_27", false,-1);
    tracep->declBit(c+13,"ALU tocount_26", false,-1);
    tracep->declBit(c+14,"ALU tocount_25", false,-1);
    tracep->declBit(c+15,"ALU tocount_24", false,-1);
    tracep->declBit(c+16,"ALU tocount_23", false,-1);
    tracep->declBit(c+17,"ALU tocount_22", false,-1);
    tracep->declBit(c+18,"ALU tocount_21", false,-1);
    tracep->declBit(c+19,"ALU tocount_20", false,-1);
    tracep->declBit(c+20,"ALU tocount_19", false,-1);
    tracep->declBit(c+21,"ALU tocount_18", false,-1);
    tracep->declBit(c+22,"ALU tocount_17", false,-1);
    tracep->declBit(c+23,"ALU tocount_16", false,-1);
    tracep->declBit(c+24,"ALU tocount_15", false,-1);
    tracep->declBit(c+25,"ALU tocount_14", false,-1);
    tracep->declBit(c+26,"ALU tocount_13", false,-1);
    tracep->declBit(c+27,"ALU tocount_12", false,-1);
    tracep->declBit(c+28,"ALU tocount_11", false,-1);
    tracep->declBit(c+29,"ALU tocount_10", false,-1);
    tracep->declBit(c+30,"ALU tocount_9", false,-1);
    tracep->declBit(c+31,"ALU tocount_8", false,-1);
    tracep->declBit(c+32,"ALU tocount_7", false,-1);
    tracep->declBit(c+33,"ALU tocount_6", false,-1);
    tracep->declBit(c+34,"ALU tocount_5", false,-1);
    tracep->declBit(c+35,"ALU tocount_4", false,-1);
    tracep->declBit(c+36,"ALU tocount_3", false,-1);
    tracep->declBit(c+37,"ALU tocount_2", false,-1);
    tracep->declBit(c+38,"ALU tocount_1", false,-1);
    tracep->declBit(c+39,"ALU tocount_0", false,-1);
    tracep->declBus(c+40,"ALU count_31", false,-1, 4,0);
    tracep->declBus(c+41,"ALU count_30", false,-1, 4,0);
    tracep->declBus(c+42,"ALU count_29", false,-1, 4,0);
    tracep->declBus(c+43,"ALU count_28", false,-1, 4,0);
    tracep->declBus(c+44,"ALU count_27", false,-1, 4,0);
    tracep->declBus(c+45,"ALU count_26", false,-1, 4,0);
    tracep->declBus(c+46,"ALU count_25", false,-1, 4,0);
    tracep->declBus(c+47,"ALU count_24", false,-1, 4,0);
    tracep->declBus(c+48,"ALU count_23", false,-1, 4,0);
    tracep->declBus(c+49,"ALU count_22", false,-1, 4,0);
    tracep->declBus(c+50,"ALU count_21", false,-1, 4,0);
    tracep->declBus(c+51,"ALU count_20", false,-1, 4,0);
    tracep->declBus(c+52,"ALU count_19", false,-1, 4,0);
    tracep->declBus(c+53,"ALU count_18", false,-1, 4,0);
    tracep->declBus(c+54,"ALU count_17", false,-1, 4,0);
    tracep->declBus(c+55,"ALU count_16", false,-1, 4,0);
    tracep->declBus(c+56,"ALU count_15", false,-1, 4,0);
    tracep->declBus(c+57,"ALU count_14", false,-1, 4,0);
    tracep->declBus(c+58,"ALU count_13", false,-1, 4,0);
    tracep->declBus(c+59,"ALU count_12", false,-1, 4,0);
    tracep->declBus(c+60,"ALU count_11", false,-1, 4,0);
    tracep->declBus(c+61,"ALU count_10", false,-1, 4,0);
    tracep->declBus(c+62,"ALU count_9", false,-1, 4,0);
    tracep->declBus(c+63,"ALU count_8", false,-1, 4,0);
    tracep->declBus(c+64,"ALU count_7", false,-1, 4,0);
    tracep->declBus(c+65,"ALU count_6", false,-1, 4,0);
    tracep->declBus(c+66,"ALU count_5", false,-1, 4,0);
    tracep->declBus(c+67,"ALU count_4", false,-1, 4,0);
    tracep->declBus(c+68,"ALU count_3", false,-1, 4,0);
    tracep->declBus(c+69,"ALU count_2", false,-1, 4,0);
    tracep->declBus(c+70,"ALU count_1", false,-1, 4,0);
    tracep->declBus(c+71,"ALU count_0", false,-1, 4,0);
    tracep->declBus(c+88,"ALU io_ALU_out_hi", false,-1, 15,0);
    tracep->declBus(c+89,"ALU io_ALU_out_lo", false,-1, 15,0);
    tracep->declBus(c+90,"ALU io_ALU_out_hi_1", false,-1, 23,0);
    tracep->declBus(c+91,"ALU io_ALU_out_lo_1", false,-1, 7,0);
    tracep->declBit(c+84,"ALU adder io_cin", false,-1);
    tracep->declBus(c+77,"ALU adder io_A_in", false,-1, 31,0);
    tracep->declBus(c+78,"ALU adder io_B_in", false,-1, 31,0);
    tracep->declBit(c+1,"ALU adder io_zero", false,-1);
    tracep->declBit(c+2,"ALU adder io_carry", false,-1);
    tracep->declBit(c+3,"ALU adder io_overflow", false,-1);
    tracep->declBit(c+4,"ALU adder io_negative", false,-1);
    tracep->declBus(c+5,"ALU adder io_O_out", false,-1, 31,0);
    tracep->declBus(c+72,"ALU adder B_in_not", false,-1, 31,0);
    tracep->declQuad(c+73,"ALU adder res", false,-1, 33,0);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((0U == (IData)(vlSelf->ALU__DOT__adder__DOT__res))));
    tracep->fullBit(oldp+2,((1U & (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                           >> 0x20U)))));
    tracep->fullBit(oldp+3,(vlSelf->ALU__DOT__adder_io_overflow));
    tracep->fullBit(oldp+4,((1U & (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                           >> 0x1fU)))));
    tracep->fullIData(oldp+5,((IData)(vlSelf->ALU__DOT__adder__DOT__res)),32);
    tracep->fullCData(oldp+6,(vlSelf->ALU__DOT__ctrl),3);
    tracep->fullIData(oldp+7,(vlSelf->ALU__DOT__A_in_not),32);
    tracep->fullBit(oldp+8,((1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                      >> 0x1fU)))));
    tracep->fullBit(oldp+9,(vlSelf->ALU__DOT__tocount_30));
    tracep->fullBit(oldp+10,(vlSelf->ALU__DOT__tocount_29));
    tracep->fullBit(oldp+11,(vlSelf->ALU__DOT__tocount_28));
    tracep->fullBit(oldp+12,(vlSelf->ALU__DOT__tocount_27));
    tracep->fullBit(oldp+13,(vlSelf->ALU__DOT__tocount_26));
    tracep->fullBit(oldp+14,(vlSelf->ALU__DOT__tocount_25));
    tracep->fullBit(oldp+15,(vlSelf->ALU__DOT__tocount_24));
    tracep->fullBit(oldp+16,(vlSelf->ALU__DOT__tocount_23));
    tracep->fullBit(oldp+17,(vlSelf->ALU__DOT__tocount_22));
    tracep->fullBit(oldp+18,(vlSelf->ALU__DOT__tocount_21));
    tracep->fullBit(oldp+19,(vlSelf->ALU__DOT__tocount_20));
    tracep->fullBit(oldp+20,(vlSelf->ALU__DOT__tocount_19));
    tracep->fullBit(oldp+21,(vlSelf->ALU__DOT__tocount_18));
    tracep->fullBit(oldp+22,(vlSelf->ALU__DOT__tocount_17));
    tracep->fullBit(oldp+23,(vlSelf->ALU__DOT__tocount_16));
    tracep->fullBit(oldp+24,(vlSelf->ALU__DOT__tocount_15));
    tracep->fullBit(oldp+25,(vlSelf->ALU__DOT__tocount_14));
    tracep->fullBit(oldp+26,(vlSelf->ALU__DOT__tocount_13));
    tracep->fullBit(oldp+27,(vlSelf->ALU__DOT__tocount_12));
    tracep->fullBit(oldp+28,(vlSelf->ALU__DOT__tocount_11));
    tracep->fullBit(oldp+29,(vlSelf->ALU__DOT__tocount_10));
    tracep->fullBit(oldp+30,(vlSelf->ALU__DOT__tocount_9));
    tracep->fullBit(oldp+31,(vlSelf->ALU__DOT__tocount_8));
    tracep->fullBit(oldp+32,(vlSelf->ALU__DOT__tocount_7));
    tracep->fullBit(oldp+33,(vlSelf->ALU__DOT__tocount_6));
    tracep->fullBit(oldp+34,(vlSelf->ALU__DOT__tocount_5));
    tracep->fullBit(oldp+35,(vlSelf->ALU__DOT__tocount_4));
    tracep->fullBit(oldp+36,(vlSelf->ALU__DOT__tocount_3));
    tracep->fullBit(oldp+37,(vlSelf->ALU__DOT__tocount_2));
    tracep->fullBit(oldp+38,(vlSelf->ALU__DOT__tocount_1));
    tracep->fullBit(oldp+39,(((IData)(vlSelf->ALU__DOT__tocount_1) 
                              & (~ vlSelf->ALU__DOT__A_in_not))));
    tracep->fullCData(oldp+40,((1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                         >> 0x1fU)))),5);
    tracep->fullCData(oldp+41,(vlSelf->ALU__DOT__count_30),5);
    tracep->fullCData(oldp+42,(vlSelf->ALU__DOT__count_29),5);
    tracep->fullCData(oldp+43,(vlSelf->ALU__DOT__count_28),5);
    tracep->fullCData(oldp+44,(vlSelf->ALU__DOT__count_27),5);
    tracep->fullCData(oldp+45,(vlSelf->ALU__DOT__count_26),5);
    tracep->fullCData(oldp+46,(vlSelf->ALU__DOT__count_25),5);
    tracep->fullCData(oldp+47,(vlSelf->ALU__DOT__count_24),5);
    tracep->fullCData(oldp+48,(vlSelf->ALU__DOT__count_23),5);
    tracep->fullCData(oldp+49,(vlSelf->ALU__DOT__count_22),5);
    tracep->fullCData(oldp+50,(vlSelf->ALU__DOT__count_21),5);
    tracep->fullCData(oldp+51,(vlSelf->ALU__DOT__count_20),5);
    tracep->fullCData(oldp+52,(vlSelf->ALU__DOT__count_19),5);
    tracep->fullCData(oldp+53,(vlSelf->ALU__DOT__count_18),5);
    tracep->fullCData(oldp+54,(vlSelf->ALU__DOT__count_17),5);
    tracep->fullCData(oldp+55,(vlSelf->ALU__DOT__count_16),5);
    tracep->fullCData(oldp+56,(vlSelf->ALU__DOT__count_15),5);
    tracep->fullCData(oldp+57,(vlSelf->ALU__DOT__count_14),5);
    tracep->fullCData(oldp+58,(vlSelf->ALU__DOT__count_13),5);
    tracep->fullCData(oldp+59,(vlSelf->ALU__DOT__count_12),5);
    tracep->fullCData(oldp+60,(vlSelf->ALU__DOT__count_11),5);
    tracep->fullCData(oldp+61,(vlSelf->ALU__DOT__count_10),5);
    tracep->fullCData(oldp+62,(vlSelf->ALU__DOT__count_9),5);
    tracep->fullCData(oldp+63,(vlSelf->ALU__DOT__count_8),5);
    tracep->fullCData(oldp+64,(vlSelf->ALU__DOT__count_7),5);
    tracep->fullCData(oldp+65,(vlSelf->ALU__DOT__count_6),5);
    tracep->fullCData(oldp+66,(vlSelf->ALU__DOT__count_5),5);
    tracep->fullCData(oldp+67,(vlSelf->ALU__DOT__count_4),5);
    tracep->fullCData(oldp+68,(vlSelf->ALU__DOT__count_3),5);
    tracep->fullCData(oldp+69,(vlSelf->ALU__DOT__count_2),5);
    tracep->fullCData(oldp+70,(vlSelf->ALU__DOT__count_1),5);
    tracep->fullCData(oldp+71,((0x1fU & (((IData)(vlSelf->ALU__DOT__tocount_1) 
                                          & (~ vlSelf->ALU__DOT__A_in_not))
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->ALU__DOT__count_1))
                                          : (IData)(vlSelf->ALU__DOT__count_1)))),5);
    tracep->fullIData(oldp+72,(vlSelf->ALU__DOT__adder__DOT__B_in_not),32);
    tracep->fullQData(oldp+73,(vlSelf->ALU__DOT__adder__DOT__res),34);
    tracep->fullBit(oldp+75,(vlSelf->clock));
    tracep->fullBit(oldp+76,(vlSelf->reset));
    tracep->fullIData(oldp+77,(vlSelf->io_A_in),32);
    tracep->fullIData(oldp+78,(vlSelf->io_B_in),32);
    tracep->fullCData(oldp+79,(vlSelf->io_ALU_op),4);
    tracep->fullIData(oldp+80,(vlSelf->io_ALU_out),32);
    tracep->fullBit(oldp+81,(vlSelf->io_Zero));
    tracep->fullBit(oldp+82,(vlSelf->io_Less));
    tracep->fullBit(oldp+83,(vlSelf->io_Overflow_out));
    tracep->fullBit(oldp+84,((1U & (IData)(vlSelf->io_ALU_op))));
    tracep->fullBit(oldp+85,((1U & (((IData)((0U == 
                                              (0xaU 
                                               & (IData)(vlSelf->io_ALU_op)))) 
                                     | (IData)((5U 
                                                == 
                                                (0xdU 
                                                 & (IData)(vlSelf->io_ALU_op))))) 
                                    | (IData)((0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSelf->io_ALU_op))))))));
    tracep->fullBit(oldp+86,((1U & ((((IData)((0U == 
                                               (0xeU 
                                                & (IData)(vlSelf->io_ALU_op)))) 
                                      | (IData)((8U 
                                                 == 
                                                 (0xdU 
                                                  & (IData)(vlSelf->io_ALU_op))))) 
                                     | (IData)((6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_ALU_op))))) 
                                    | (IData)((0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSelf->io_ALU_op))))))));
    tracep->fullBit(oldp+87,((1U & (((IData)((0U == 
                                              (6U & (IData)(vlSelf->io_ALU_op)))) 
                                     | (IData)((5U 
                                                == 
                                                (0xdU 
                                                 & (IData)(vlSelf->io_ALU_op))))) 
                                    | (IData)((0xeU 
                                               == (0xeU 
                                                   & (IData)(vlSelf->io_ALU_op))))))));
    tracep->fullSData(oldp+88,(((0x8000U & vlSelf->io_B_in)
                                 ? 0xffffU : 0U)),16);
    tracep->fullSData(oldp+89,((0xffffU & vlSelf->io_B_in)),16);
    tracep->fullIData(oldp+90,(((0x80U & vlSelf->io_B_in)
                                 ? 0xffffffU : 0U)),24);
    tracep->fullCData(oldp+91,((0xffU & vlSelf->io_B_in)),8);
}
