// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep);

void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((0U == (IData)(vlSelf->ALU__DOT__adder__DOT__res))));
        tracep->chgBit(oldp+1,((1U & (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                              >> 0x20U)))));
        tracep->chgBit(oldp+2,(vlSelf->ALU__DOT__adder_io_overflow));
        tracep->chgBit(oldp+3,((1U & (IData)((vlSelf->ALU__DOT__adder__DOT__res 
                                              >> 0x1fU)))));
        tracep->chgIData(oldp+4,((IData)(vlSelf->ALU__DOT__adder__DOT__res)),32);
        tracep->chgCData(oldp+5,(vlSelf->ALU__DOT__ctrl),3);
        tracep->chgIData(oldp+6,(vlSelf->ALU__DOT__A_in_not),32);
        tracep->chgBit(oldp+7,((1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                         >> 0x1fU)))));
        tracep->chgBit(oldp+8,(vlSelf->ALU__DOT__tocount_30));
        tracep->chgBit(oldp+9,(vlSelf->ALU__DOT__tocount_29));
        tracep->chgBit(oldp+10,(vlSelf->ALU__DOT__tocount_28));
        tracep->chgBit(oldp+11,(vlSelf->ALU__DOT__tocount_27));
        tracep->chgBit(oldp+12,(vlSelf->ALU__DOT__tocount_26));
        tracep->chgBit(oldp+13,(vlSelf->ALU__DOT__tocount_25));
        tracep->chgBit(oldp+14,(vlSelf->ALU__DOT__tocount_24));
        tracep->chgBit(oldp+15,(vlSelf->ALU__DOT__tocount_23));
        tracep->chgBit(oldp+16,(vlSelf->ALU__DOT__tocount_22));
        tracep->chgBit(oldp+17,(vlSelf->ALU__DOT__tocount_21));
        tracep->chgBit(oldp+18,(vlSelf->ALU__DOT__tocount_20));
        tracep->chgBit(oldp+19,(vlSelf->ALU__DOT__tocount_19));
        tracep->chgBit(oldp+20,(vlSelf->ALU__DOT__tocount_18));
        tracep->chgBit(oldp+21,(vlSelf->ALU__DOT__tocount_17));
        tracep->chgBit(oldp+22,(vlSelf->ALU__DOT__tocount_16));
        tracep->chgBit(oldp+23,(vlSelf->ALU__DOT__tocount_15));
        tracep->chgBit(oldp+24,(vlSelf->ALU__DOT__tocount_14));
        tracep->chgBit(oldp+25,(vlSelf->ALU__DOT__tocount_13));
        tracep->chgBit(oldp+26,(vlSelf->ALU__DOT__tocount_12));
        tracep->chgBit(oldp+27,(vlSelf->ALU__DOT__tocount_11));
        tracep->chgBit(oldp+28,(vlSelf->ALU__DOT__tocount_10));
        tracep->chgBit(oldp+29,(vlSelf->ALU__DOT__tocount_9));
        tracep->chgBit(oldp+30,(vlSelf->ALU__DOT__tocount_8));
        tracep->chgBit(oldp+31,(vlSelf->ALU__DOT__tocount_7));
        tracep->chgBit(oldp+32,(vlSelf->ALU__DOT__tocount_6));
        tracep->chgBit(oldp+33,(vlSelf->ALU__DOT__tocount_5));
        tracep->chgBit(oldp+34,(vlSelf->ALU__DOT__tocount_4));
        tracep->chgBit(oldp+35,(vlSelf->ALU__DOT__tocount_3));
        tracep->chgBit(oldp+36,(vlSelf->ALU__DOT__tocount_2));
        tracep->chgBit(oldp+37,(vlSelf->ALU__DOT__tocount_1));
        tracep->chgBit(oldp+38,(((IData)(vlSelf->ALU__DOT__tocount_1) 
                                 & (~ vlSelf->ALU__DOT__A_in_not))));
        tracep->chgCData(oldp+39,((1U & (~ (vlSelf->ALU__DOT__A_in_not 
                                            >> 0x1fU)))),5);
        tracep->chgCData(oldp+40,(vlSelf->ALU__DOT__count_30),5);
        tracep->chgCData(oldp+41,(vlSelf->ALU__DOT__count_29),5);
        tracep->chgCData(oldp+42,(vlSelf->ALU__DOT__count_28),5);
        tracep->chgCData(oldp+43,(vlSelf->ALU__DOT__count_27),5);
        tracep->chgCData(oldp+44,(vlSelf->ALU__DOT__count_26),5);
        tracep->chgCData(oldp+45,(vlSelf->ALU__DOT__count_25),5);
        tracep->chgCData(oldp+46,(vlSelf->ALU__DOT__count_24),5);
        tracep->chgCData(oldp+47,(vlSelf->ALU__DOT__count_23),5);
        tracep->chgCData(oldp+48,(vlSelf->ALU__DOT__count_22),5);
        tracep->chgCData(oldp+49,(vlSelf->ALU__DOT__count_21),5);
        tracep->chgCData(oldp+50,(vlSelf->ALU__DOT__count_20),5);
        tracep->chgCData(oldp+51,(vlSelf->ALU__DOT__count_19),5);
        tracep->chgCData(oldp+52,(vlSelf->ALU__DOT__count_18),5);
        tracep->chgCData(oldp+53,(vlSelf->ALU__DOT__count_17),5);
        tracep->chgCData(oldp+54,(vlSelf->ALU__DOT__count_16),5);
        tracep->chgCData(oldp+55,(vlSelf->ALU__DOT__count_15),5);
        tracep->chgCData(oldp+56,(vlSelf->ALU__DOT__count_14),5);
        tracep->chgCData(oldp+57,(vlSelf->ALU__DOT__count_13),5);
        tracep->chgCData(oldp+58,(vlSelf->ALU__DOT__count_12),5);
        tracep->chgCData(oldp+59,(vlSelf->ALU__DOT__count_11),5);
        tracep->chgCData(oldp+60,(vlSelf->ALU__DOT__count_10),5);
        tracep->chgCData(oldp+61,(vlSelf->ALU__DOT__count_9),5);
        tracep->chgCData(oldp+62,(vlSelf->ALU__DOT__count_8),5);
        tracep->chgCData(oldp+63,(vlSelf->ALU__DOT__count_7),5);
        tracep->chgCData(oldp+64,(vlSelf->ALU__DOT__count_6),5);
        tracep->chgCData(oldp+65,(vlSelf->ALU__DOT__count_5),5);
        tracep->chgCData(oldp+66,(vlSelf->ALU__DOT__count_4),5);
        tracep->chgCData(oldp+67,(vlSelf->ALU__DOT__count_3),5);
        tracep->chgCData(oldp+68,(vlSelf->ALU__DOT__count_2),5);
        tracep->chgCData(oldp+69,(vlSelf->ALU__DOT__count_1),5);
        tracep->chgCData(oldp+70,((0x1fU & (((IData)(vlSelf->ALU__DOT__tocount_1) 
                                             & (~ vlSelf->ALU__DOT__A_in_not))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelf->ALU__DOT__count_1))
                                             : (IData)(vlSelf->ALU__DOT__count_1)))),5);
        tracep->chgIData(oldp+71,(vlSelf->ALU__DOT__adder__DOT__B_in_not),32);
        tracep->chgQData(oldp+72,(vlSelf->ALU__DOT__adder__DOT__res),34);
    }
    tracep->chgBit(oldp+74,(vlSelf->clock));
    tracep->chgBit(oldp+75,(vlSelf->reset));
    tracep->chgIData(oldp+76,(vlSelf->io_A_in),32);
    tracep->chgIData(oldp+77,(vlSelf->io_B_in),32);
    tracep->chgCData(oldp+78,(vlSelf->io_ALU_op),4);
    tracep->chgIData(oldp+79,(vlSelf->io_ALU_out),32);
    tracep->chgBit(oldp+80,(vlSelf->io_Zero));
    tracep->chgBit(oldp+81,(vlSelf->io_Less));
    tracep->chgBit(oldp+82,(vlSelf->io_Overflow_out));
    tracep->chgBit(oldp+83,((1U & (IData)(vlSelf->io_ALU_op))));
    tracep->chgBit(oldp+84,((1U & (((IData)((0U == 
                                             (0xaU 
                                              & (IData)(vlSelf->io_ALU_op)))) 
                                    | (IData)((5U == 
                                               (0xdU 
                                                & (IData)(vlSelf->io_ALU_op))))) 
                                   | (IData)((0xaU 
                                              == (0xaU 
                                                  & (IData)(vlSelf->io_ALU_op))))))));
    tracep->chgBit(oldp+85,((1U & ((((IData)((0U == 
                                              (0xeU 
                                               & (IData)(vlSelf->io_ALU_op)))) 
                                     | (IData)((8U 
                                                == 
                                                (0xdU 
                                                 & (IData)(vlSelf->io_ALU_op))))) 
                                    | (IData)((6U == 
                                               (7U 
                                                & (IData)(vlSelf->io_ALU_op))))) 
                                   | (IData)((0xaU 
                                              == (0xaU 
                                                  & (IData)(vlSelf->io_ALU_op))))))));
    tracep->chgBit(oldp+86,((1U & (((IData)((0U == 
                                             (6U & (IData)(vlSelf->io_ALU_op)))) 
                                    | (IData)((5U == 
                                               (0xdU 
                                                & (IData)(vlSelf->io_ALU_op))))) 
                                   | (IData)((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->io_ALU_op))))))));
    tracep->chgSData(oldp+87,(((0x8000U & vlSelf->io_B_in)
                                ? 0xffffU : 0U)),16);
    tracep->chgSData(oldp+88,((0xffffU & vlSelf->io_B_in)),16);
    tracep->chgIData(oldp+89,(((0x80U & vlSelf->io_B_in)
                                ? 0xffffffU : 0U)),24);
    tracep->chgCData(oldp+90,((0xffU & vlSelf->io_B_in)),8);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
