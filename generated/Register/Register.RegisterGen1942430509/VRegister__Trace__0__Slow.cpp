// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegister__Syms.h"


VL_ATTR_COLD void VRegister___024root__trace_init_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegister___024root__trace_init_top(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_init_top\n"); );
    // Body
    VRegister___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegister___024root__trace_init_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBus(c+131,"io_Rs_addr", false,-1, 4,0);
    tracep->declBus(c+132,"io_Rt_addr", false,-1, 4,0);
    tracep->declBus(c+133,"io_Rd_addr", false,-1, 4,0);
    tracep->declBus(c+134,"io_Rd_in", false,-1, 31,0);
    tracep->declBus(c+135,"io_Rd_byte_w_en", false,-1, 3,0);
    tracep->declBus(c+136,"io_Rs_out", false,-1, 31,0);
    tracep->declBus(c+137,"io_Rt_out", false,-1, 31,0);
    tracep->declBit(c+129,"Register clock", false,-1);
    tracep->declBit(c+130,"Register reset", false,-1);
    tracep->declBus(c+131,"Register io_Rs_addr", false,-1, 4,0);
    tracep->declBus(c+132,"Register io_Rt_addr", false,-1, 4,0);
    tracep->declBus(c+133,"Register io_Rd_addr", false,-1, 4,0);
    tracep->declBus(c+134,"Register io_Rd_in", false,-1, 31,0);
    tracep->declBus(c+135,"Register io_Rd_byte_w_en", false,-1, 3,0);
    tracep->declBus(c+136,"Register io_Rs_out", false,-1, 31,0);
    tracep->declBus(c+137,"Register io_Rt_out", false,-1, 31,0);
    tracep->declBus(c+1,"Register reg_0_0", false,-1, 7,0);
    tracep->declBus(c+2,"Register reg_0_1", false,-1, 7,0);
    tracep->declBus(c+3,"Register reg_0_2", false,-1, 7,0);
    tracep->declBus(c+4,"Register reg_0_3", false,-1, 7,0);
    tracep->declBus(c+5,"Register reg_1_0", false,-1, 7,0);
    tracep->declBus(c+6,"Register reg_1_1", false,-1, 7,0);
    tracep->declBus(c+7,"Register reg_1_2", false,-1, 7,0);
    tracep->declBus(c+8,"Register reg_1_3", false,-1, 7,0);
    tracep->declBus(c+9,"Register reg_2_0", false,-1, 7,0);
    tracep->declBus(c+10,"Register reg_2_1", false,-1, 7,0);
    tracep->declBus(c+11,"Register reg_2_2", false,-1, 7,0);
    tracep->declBus(c+12,"Register reg_2_3", false,-1, 7,0);
    tracep->declBus(c+13,"Register reg_3_0", false,-1, 7,0);
    tracep->declBus(c+14,"Register reg_3_1", false,-1, 7,0);
    tracep->declBus(c+15,"Register reg_3_2", false,-1, 7,0);
    tracep->declBus(c+16,"Register reg_3_3", false,-1, 7,0);
    tracep->declBus(c+17,"Register reg_4_0", false,-1, 7,0);
    tracep->declBus(c+18,"Register reg_4_1", false,-1, 7,0);
    tracep->declBus(c+19,"Register reg_4_2", false,-1, 7,0);
    tracep->declBus(c+20,"Register reg_4_3", false,-1, 7,0);
    tracep->declBus(c+21,"Register reg_5_0", false,-1, 7,0);
    tracep->declBus(c+22,"Register reg_5_1", false,-1, 7,0);
    tracep->declBus(c+23,"Register reg_5_2", false,-1, 7,0);
    tracep->declBus(c+24,"Register reg_5_3", false,-1, 7,0);
    tracep->declBus(c+25,"Register reg_6_0", false,-1, 7,0);
    tracep->declBus(c+26,"Register reg_6_1", false,-1, 7,0);
    tracep->declBus(c+27,"Register reg_6_2", false,-1, 7,0);
    tracep->declBus(c+28,"Register reg_6_3", false,-1, 7,0);
    tracep->declBus(c+29,"Register reg_7_0", false,-1, 7,0);
    tracep->declBus(c+30,"Register reg_7_1", false,-1, 7,0);
    tracep->declBus(c+31,"Register reg_7_2", false,-1, 7,0);
    tracep->declBus(c+32,"Register reg_7_3", false,-1, 7,0);
    tracep->declBus(c+33,"Register reg_8_0", false,-1, 7,0);
    tracep->declBus(c+34,"Register reg_8_1", false,-1, 7,0);
    tracep->declBus(c+35,"Register reg_8_2", false,-1, 7,0);
    tracep->declBus(c+36,"Register reg_8_3", false,-1, 7,0);
    tracep->declBus(c+37,"Register reg_9_0", false,-1, 7,0);
    tracep->declBus(c+38,"Register reg_9_1", false,-1, 7,0);
    tracep->declBus(c+39,"Register reg_9_2", false,-1, 7,0);
    tracep->declBus(c+40,"Register reg_9_3", false,-1, 7,0);
    tracep->declBus(c+41,"Register reg_10_0", false,-1, 7,0);
    tracep->declBus(c+42,"Register reg_10_1", false,-1, 7,0);
    tracep->declBus(c+43,"Register reg_10_2", false,-1, 7,0);
    tracep->declBus(c+44,"Register reg_10_3", false,-1, 7,0);
    tracep->declBus(c+45,"Register reg_11_0", false,-1, 7,0);
    tracep->declBus(c+46,"Register reg_11_1", false,-1, 7,0);
    tracep->declBus(c+47,"Register reg_11_2", false,-1, 7,0);
    tracep->declBus(c+48,"Register reg_11_3", false,-1, 7,0);
    tracep->declBus(c+49,"Register reg_12_0", false,-1, 7,0);
    tracep->declBus(c+50,"Register reg_12_1", false,-1, 7,0);
    tracep->declBus(c+51,"Register reg_12_2", false,-1, 7,0);
    tracep->declBus(c+52,"Register reg_12_3", false,-1, 7,0);
    tracep->declBus(c+53,"Register reg_13_0", false,-1, 7,0);
    tracep->declBus(c+54,"Register reg_13_1", false,-1, 7,0);
    tracep->declBus(c+55,"Register reg_13_2", false,-1, 7,0);
    tracep->declBus(c+56,"Register reg_13_3", false,-1, 7,0);
    tracep->declBus(c+57,"Register reg_14_0", false,-1, 7,0);
    tracep->declBus(c+58,"Register reg_14_1", false,-1, 7,0);
    tracep->declBus(c+59,"Register reg_14_2", false,-1, 7,0);
    tracep->declBus(c+60,"Register reg_14_3", false,-1, 7,0);
    tracep->declBus(c+61,"Register reg_15_0", false,-1, 7,0);
    tracep->declBus(c+62,"Register reg_15_1", false,-1, 7,0);
    tracep->declBus(c+63,"Register reg_15_2", false,-1, 7,0);
    tracep->declBus(c+64,"Register reg_15_3", false,-1, 7,0);
    tracep->declBus(c+65,"Register reg_16_0", false,-1, 7,0);
    tracep->declBus(c+66,"Register reg_16_1", false,-1, 7,0);
    tracep->declBus(c+67,"Register reg_16_2", false,-1, 7,0);
    tracep->declBus(c+68,"Register reg_16_3", false,-1, 7,0);
    tracep->declBus(c+69,"Register reg_17_0", false,-1, 7,0);
    tracep->declBus(c+70,"Register reg_17_1", false,-1, 7,0);
    tracep->declBus(c+71,"Register reg_17_2", false,-1, 7,0);
    tracep->declBus(c+72,"Register reg_17_3", false,-1, 7,0);
    tracep->declBus(c+73,"Register reg_18_0", false,-1, 7,0);
    tracep->declBus(c+74,"Register reg_18_1", false,-1, 7,0);
    tracep->declBus(c+75,"Register reg_18_2", false,-1, 7,0);
    tracep->declBus(c+76,"Register reg_18_3", false,-1, 7,0);
    tracep->declBus(c+77,"Register reg_19_0", false,-1, 7,0);
    tracep->declBus(c+78,"Register reg_19_1", false,-1, 7,0);
    tracep->declBus(c+79,"Register reg_19_2", false,-1, 7,0);
    tracep->declBus(c+80,"Register reg_19_3", false,-1, 7,0);
    tracep->declBus(c+81,"Register reg_20_0", false,-1, 7,0);
    tracep->declBus(c+82,"Register reg_20_1", false,-1, 7,0);
    tracep->declBus(c+83,"Register reg_20_2", false,-1, 7,0);
    tracep->declBus(c+84,"Register reg_20_3", false,-1, 7,0);
    tracep->declBus(c+85,"Register reg_21_0", false,-1, 7,0);
    tracep->declBus(c+86,"Register reg_21_1", false,-1, 7,0);
    tracep->declBus(c+87,"Register reg_21_2", false,-1, 7,0);
    tracep->declBus(c+88,"Register reg_21_3", false,-1, 7,0);
    tracep->declBus(c+89,"Register reg_22_0", false,-1, 7,0);
    tracep->declBus(c+90,"Register reg_22_1", false,-1, 7,0);
    tracep->declBus(c+91,"Register reg_22_2", false,-1, 7,0);
    tracep->declBus(c+92,"Register reg_22_3", false,-1, 7,0);
    tracep->declBus(c+93,"Register reg_23_0", false,-1, 7,0);
    tracep->declBus(c+94,"Register reg_23_1", false,-1, 7,0);
    tracep->declBus(c+95,"Register reg_23_2", false,-1, 7,0);
    tracep->declBus(c+96,"Register reg_23_3", false,-1, 7,0);
    tracep->declBus(c+97,"Register reg_24_0", false,-1, 7,0);
    tracep->declBus(c+98,"Register reg_24_1", false,-1, 7,0);
    tracep->declBus(c+99,"Register reg_24_2", false,-1, 7,0);
    tracep->declBus(c+100,"Register reg_24_3", false,-1, 7,0);
    tracep->declBus(c+101,"Register reg_25_0", false,-1, 7,0);
    tracep->declBus(c+102,"Register reg_25_1", false,-1, 7,0);
    tracep->declBus(c+103,"Register reg_25_2", false,-1, 7,0);
    tracep->declBus(c+104,"Register reg_25_3", false,-1, 7,0);
    tracep->declBus(c+105,"Register reg_26_0", false,-1, 7,0);
    tracep->declBus(c+106,"Register reg_26_1", false,-1, 7,0);
    tracep->declBus(c+107,"Register reg_26_2", false,-1, 7,0);
    tracep->declBus(c+108,"Register reg_26_3", false,-1, 7,0);
    tracep->declBus(c+109,"Register reg_27_0", false,-1, 7,0);
    tracep->declBus(c+110,"Register reg_27_1", false,-1, 7,0);
    tracep->declBus(c+111,"Register reg_27_2", false,-1, 7,0);
    tracep->declBus(c+112,"Register reg_27_3", false,-1, 7,0);
    tracep->declBus(c+113,"Register reg_28_0", false,-1, 7,0);
    tracep->declBus(c+114,"Register reg_28_1", false,-1, 7,0);
    tracep->declBus(c+115,"Register reg_28_2", false,-1, 7,0);
    tracep->declBus(c+116,"Register reg_28_3", false,-1, 7,0);
    tracep->declBus(c+117,"Register reg_29_0", false,-1, 7,0);
    tracep->declBus(c+118,"Register reg_29_1", false,-1, 7,0);
    tracep->declBus(c+119,"Register reg_29_2", false,-1, 7,0);
    tracep->declBus(c+120,"Register reg_29_3", false,-1, 7,0);
    tracep->declBus(c+121,"Register reg_30_0", false,-1, 7,0);
    tracep->declBus(c+122,"Register reg_30_1", false,-1, 7,0);
    tracep->declBus(c+123,"Register reg_30_2", false,-1, 7,0);
    tracep->declBus(c+124,"Register reg_30_3", false,-1, 7,0);
    tracep->declBus(c+125,"Register reg_31_0", false,-1, 7,0);
    tracep->declBus(c+126,"Register reg_31_1", false,-1, 7,0);
    tracep->declBus(c+127,"Register reg_31_2", false,-1, 7,0);
    tracep->declBus(c+128,"Register reg_31_3", false,-1, 7,0);
    tracep->declBus(c+138,"Register io_Rs_out_hi_1", false,-1, 23,0);
    tracep->declBus(c+139,"Register io_Rt_out_hi_1", false,-1, 23,0);
}

VL_ATTR_COLD void VRegister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRegister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRegister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegister___024root__trace_register(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRegister___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRegister___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRegister___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegister___024root__trace_full_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegister___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_full_top_0\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRegister___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VRegister___024root__trace_full_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->Register__DOT__reg_0_0),8);
    tracep->fullCData(oldp+2,(vlSelf->Register__DOT__reg_0_1),8);
    tracep->fullCData(oldp+3,(vlSelf->Register__DOT__reg_0_2),8);
    tracep->fullCData(oldp+4,(vlSelf->Register__DOT__reg_0_3),8);
    tracep->fullCData(oldp+5,(vlSelf->Register__DOT__reg_1_0),8);
    tracep->fullCData(oldp+6,(vlSelf->Register__DOT__reg_1_1),8);
    tracep->fullCData(oldp+7,(vlSelf->Register__DOT__reg_1_2),8);
    tracep->fullCData(oldp+8,(vlSelf->Register__DOT__reg_1_3),8);
    tracep->fullCData(oldp+9,(vlSelf->Register__DOT__reg_2_0),8);
    tracep->fullCData(oldp+10,(vlSelf->Register__DOT__reg_2_1),8);
    tracep->fullCData(oldp+11,(vlSelf->Register__DOT__reg_2_2),8);
    tracep->fullCData(oldp+12,(vlSelf->Register__DOT__reg_2_3),8);
    tracep->fullCData(oldp+13,(vlSelf->Register__DOT__reg_3_0),8);
    tracep->fullCData(oldp+14,(vlSelf->Register__DOT__reg_3_1),8);
    tracep->fullCData(oldp+15,(vlSelf->Register__DOT__reg_3_2),8);
    tracep->fullCData(oldp+16,(vlSelf->Register__DOT__reg_3_3),8);
    tracep->fullCData(oldp+17,(vlSelf->Register__DOT__reg_4_0),8);
    tracep->fullCData(oldp+18,(vlSelf->Register__DOT__reg_4_1),8);
    tracep->fullCData(oldp+19,(vlSelf->Register__DOT__reg_4_2),8);
    tracep->fullCData(oldp+20,(vlSelf->Register__DOT__reg_4_3),8);
    tracep->fullCData(oldp+21,(vlSelf->Register__DOT__reg_5_0),8);
    tracep->fullCData(oldp+22,(vlSelf->Register__DOT__reg_5_1),8);
    tracep->fullCData(oldp+23,(vlSelf->Register__DOT__reg_5_2),8);
    tracep->fullCData(oldp+24,(vlSelf->Register__DOT__reg_5_3),8);
    tracep->fullCData(oldp+25,(vlSelf->Register__DOT__reg_6_0),8);
    tracep->fullCData(oldp+26,(vlSelf->Register__DOT__reg_6_1),8);
    tracep->fullCData(oldp+27,(vlSelf->Register__DOT__reg_6_2),8);
    tracep->fullCData(oldp+28,(vlSelf->Register__DOT__reg_6_3),8);
    tracep->fullCData(oldp+29,(vlSelf->Register__DOT__reg_7_0),8);
    tracep->fullCData(oldp+30,(vlSelf->Register__DOT__reg_7_1),8);
    tracep->fullCData(oldp+31,(vlSelf->Register__DOT__reg_7_2),8);
    tracep->fullCData(oldp+32,(vlSelf->Register__DOT__reg_7_3),8);
    tracep->fullCData(oldp+33,(vlSelf->Register__DOT__reg_8_0),8);
    tracep->fullCData(oldp+34,(vlSelf->Register__DOT__reg_8_1),8);
    tracep->fullCData(oldp+35,(vlSelf->Register__DOT__reg_8_2),8);
    tracep->fullCData(oldp+36,(vlSelf->Register__DOT__reg_8_3),8);
    tracep->fullCData(oldp+37,(vlSelf->Register__DOT__reg_9_0),8);
    tracep->fullCData(oldp+38,(vlSelf->Register__DOT__reg_9_1),8);
    tracep->fullCData(oldp+39,(vlSelf->Register__DOT__reg_9_2),8);
    tracep->fullCData(oldp+40,(vlSelf->Register__DOT__reg_9_3),8);
    tracep->fullCData(oldp+41,(vlSelf->Register__DOT__reg_10_0),8);
    tracep->fullCData(oldp+42,(vlSelf->Register__DOT__reg_10_1),8);
    tracep->fullCData(oldp+43,(vlSelf->Register__DOT__reg_10_2),8);
    tracep->fullCData(oldp+44,(vlSelf->Register__DOT__reg_10_3),8);
    tracep->fullCData(oldp+45,(vlSelf->Register__DOT__reg_11_0),8);
    tracep->fullCData(oldp+46,(vlSelf->Register__DOT__reg_11_1),8);
    tracep->fullCData(oldp+47,(vlSelf->Register__DOT__reg_11_2),8);
    tracep->fullCData(oldp+48,(vlSelf->Register__DOT__reg_11_3),8);
    tracep->fullCData(oldp+49,(vlSelf->Register__DOT__reg_12_0),8);
    tracep->fullCData(oldp+50,(vlSelf->Register__DOT__reg_12_1),8);
    tracep->fullCData(oldp+51,(vlSelf->Register__DOT__reg_12_2),8);
    tracep->fullCData(oldp+52,(vlSelf->Register__DOT__reg_12_3),8);
    tracep->fullCData(oldp+53,(vlSelf->Register__DOT__reg_13_0),8);
    tracep->fullCData(oldp+54,(vlSelf->Register__DOT__reg_13_1),8);
    tracep->fullCData(oldp+55,(vlSelf->Register__DOT__reg_13_2),8);
    tracep->fullCData(oldp+56,(vlSelf->Register__DOT__reg_13_3),8);
    tracep->fullCData(oldp+57,(vlSelf->Register__DOT__reg_14_0),8);
    tracep->fullCData(oldp+58,(vlSelf->Register__DOT__reg_14_1),8);
    tracep->fullCData(oldp+59,(vlSelf->Register__DOT__reg_14_2),8);
    tracep->fullCData(oldp+60,(vlSelf->Register__DOT__reg_14_3),8);
    tracep->fullCData(oldp+61,(vlSelf->Register__DOT__reg_15_0),8);
    tracep->fullCData(oldp+62,(vlSelf->Register__DOT__reg_15_1),8);
    tracep->fullCData(oldp+63,(vlSelf->Register__DOT__reg_15_2),8);
    tracep->fullCData(oldp+64,(vlSelf->Register__DOT__reg_15_3),8);
    tracep->fullCData(oldp+65,(vlSelf->Register__DOT__reg_16_0),8);
    tracep->fullCData(oldp+66,(vlSelf->Register__DOT__reg_16_1),8);
    tracep->fullCData(oldp+67,(vlSelf->Register__DOT__reg_16_2),8);
    tracep->fullCData(oldp+68,(vlSelf->Register__DOT__reg_16_3),8);
    tracep->fullCData(oldp+69,(vlSelf->Register__DOT__reg_17_0),8);
    tracep->fullCData(oldp+70,(vlSelf->Register__DOT__reg_17_1),8);
    tracep->fullCData(oldp+71,(vlSelf->Register__DOT__reg_17_2),8);
    tracep->fullCData(oldp+72,(vlSelf->Register__DOT__reg_17_3),8);
    tracep->fullCData(oldp+73,(vlSelf->Register__DOT__reg_18_0),8);
    tracep->fullCData(oldp+74,(vlSelf->Register__DOT__reg_18_1),8);
    tracep->fullCData(oldp+75,(vlSelf->Register__DOT__reg_18_2),8);
    tracep->fullCData(oldp+76,(vlSelf->Register__DOT__reg_18_3),8);
    tracep->fullCData(oldp+77,(vlSelf->Register__DOT__reg_19_0),8);
    tracep->fullCData(oldp+78,(vlSelf->Register__DOT__reg_19_1),8);
    tracep->fullCData(oldp+79,(vlSelf->Register__DOT__reg_19_2),8);
    tracep->fullCData(oldp+80,(vlSelf->Register__DOT__reg_19_3),8);
    tracep->fullCData(oldp+81,(vlSelf->Register__DOT__reg_20_0),8);
    tracep->fullCData(oldp+82,(vlSelf->Register__DOT__reg_20_1),8);
    tracep->fullCData(oldp+83,(vlSelf->Register__DOT__reg_20_2),8);
    tracep->fullCData(oldp+84,(vlSelf->Register__DOT__reg_20_3),8);
    tracep->fullCData(oldp+85,(vlSelf->Register__DOT__reg_21_0),8);
    tracep->fullCData(oldp+86,(vlSelf->Register__DOT__reg_21_1),8);
    tracep->fullCData(oldp+87,(vlSelf->Register__DOT__reg_21_2),8);
    tracep->fullCData(oldp+88,(vlSelf->Register__DOT__reg_21_3),8);
    tracep->fullCData(oldp+89,(vlSelf->Register__DOT__reg_22_0),8);
    tracep->fullCData(oldp+90,(vlSelf->Register__DOT__reg_22_1),8);
    tracep->fullCData(oldp+91,(vlSelf->Register__DOT__reg_22_2),8);
    tracep->fullCData(oldp+92,(vlSelf->Register__DOT__reg_22_3),8);
    tracep->fullCData(oldp+93,(vlSelf->Register__DOT__reg_23_0),8);
    tracep->fullCData(oldp+94,(vlSelf->Register__DOT__reg_23_1),8);
    tracep->fullCData(oldp+95,(vlSelf->Register__DOT__reg_23_2),8);
    tracep->fullCData(oldp+96,(vlSelf->Register__DOT__reg_23_3),8);
    tracep->fullCData(oldp+97,(vlSelf->Register__DOT__reg_24_0),8);
    tracep->fullCData(oldp+98,(vlSelf->Register__DOT__reg_24_1),8);
    tracep->fullCData(oldp+99,(vlSelf->Register__DOT__reg_24_2),8);
    tracep->fullCData(oldp+100,(vlSelf->Register__DOT__reg_24_3),8);
    tracep->fullCData(oldp+101,(vlSelf->Register__DOT__reg_25_0),8);
    tracep->fullCData(oldp+102,(vlSelf->Register__DOT__reg_25_1),8);
    tracep->fullCData(oldp+103,(vlSelf->Register__DOT__reg_25_2),8);
    tracep->fullCData(oldp+104,(vlSelf->Register__DOT__reg_25_3),8);
    tracep->fullCData(oldp+105,(vlSelf->Register__DOT__reg_26_0),8);
    tracep->fullCData(oldp+106,(vlSelf->Register__DOT__reg_26_1),8);
    tracep->fullCData(oldp+107,(vlSelf->Register__DOT__reg_26_2),8);
    tracep->fullCData(oldp+108,(vlSelf->Register__DOT__reg_26_3),8);
    tracep->fullCData(oldp+109,(vlSelf->Register__DOT__reg_27_0),8);
    tracep->fullCData(oldp+110,(vlSelf->Register__DOT__reg_27_1),8);
    tracep->fullCData(oldp+111,(vlSelf->Register__DOT__reg_27_2),8);
    tracep->fullCData(oldp+112,(vlSelf->Register__DOT__reg_27_3),8);
    tracep->fullCData(oldp+113,(vlSelf->Register__DOT__reg_28_0),8);
    tracep->fullCData(oldp+114,(vlSelf->Register__DOT__reg_28_1),8);
    tracep->fullCData(oldp+115,(vlSelf->Register__DOT__reg_28_2),8);
    tracep->fullCData(oldp+116,(vlSelf->Register__DOT__reg_28_3),8);
    tracep->fullCData(oldp+117,(vlSelf->Register__DOT__reg_29_0),8);
    tracep->fullCData(oldp+118,(vlSelf->Register__DOT__reg_29_1),8);
    tracep->fullCData(oldp+119,(vlSelf->Register__DOT__reg_29_2),8);
    tracep->fullCData(oldp+120,(vlSelf->Register__DOT__reg_29_3),8);
    tracep->fullCData(oldp+121,(vlSelf->Register__DOT__reg_30_0),8);
    tracep->fullCData(oldp+122,(vlSelf->Register__DOT__reg_30_1),8);
    tracep->fullCData(oldp+123,(vlSelf->Register__DOT__reg_30_2),8);
    tracep->fullCData(oldp+124,(vlSelf->Register__DOT__reg_30_3),8);
    tracep->fullCData(oldp+125,(vlSelf->Register__DOT__reg_31_0),8);
    tracep->fullCData(oldp+126,(vlSelf->Register__DOT__reg_31_1),8);
    tracep->fullCData(oldp+127,(vlSelf->Register__DOT__reg_31_2),8);
    tracep->fullCData(oldp+128,(vlSelf->Register__DOT__reg_31_3),8);
    tracep->fullBit(oldp+129,(vlSelf->clock));
    tracep->fullBit(oldp+130,(vlSelf->reset));
    tracep->fullCData(oldp+131,(vlSelf->io_Rs_addr),5);
    tracep->fullCData(oldp+132,(vlSelf->io_Rt_addr),5);
    tracep->fullCData(oldp+133,(vlSelf->io_Rd_addr),5);
    tracep->fullIData(oldp+134,(vlSelf->io_Rd_in),32);
    tracep->fullCData(oldp+135,(vlSelf->io_Rd_byte_w_en),4);
    tracep->fullIData(oldp+136,(vlSelf->io_Rs_out),32);
    tracep->fullIData(oldp+137,(vlSelf->io_Rt_out),32);
    tracep->fullIData(oldp+138,(vlSelf->Register__DOT__io_Rs_out_hi_1),24);
    tracep->fullIData(oldp+139,(vlSelf->Register__DOT__io_Rt_out_hi_1),24);
}
