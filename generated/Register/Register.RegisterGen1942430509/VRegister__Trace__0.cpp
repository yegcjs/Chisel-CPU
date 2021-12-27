// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegister__Syms.h"


void VRegister___024root__trace_chg_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep);

void VRegister___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_chg_top_0\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRegister___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VRegister___024root__trace_chg_sub_0(VRegister___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->Register__DOT__reg_0_0),8);
        tracep->chgCData(oldp+1,(vlSelf->Register__DOT__reg_0_1),8);
        tracep->chgCData(oldp+2,(vlSelf->Register__DOT__reg_0_2),8);
        tracep->chgCData(oldp+3,(vlSelf->Register__DOT__reg_0_3),8);
        tracep->chgCData(oldp+4,(vlSelf->Register__DOT__reg_1_0),8);
        tracep->chgCData(oldp+5,(vlSelf->Register__DOT__reg_1_1),8);
        tracep->chgCData(oldp+6,(vlSelf->Register__DOT__reg_1_2),8);
        tracep->chgCData(oldp+7,(vlSelf->Register__DOT__reg_1_3),8);
        tracep->chgCData(oldp+8,(vlSelf->Register__DOT__reg_2_0),8);
        tracep->chgCData(oldp+9,(vlSelf->Register__DOT__reg_2_1),8);
        tracep->chgCData(oldp+10,(vlSelf->Register__DOT__reg_2_2),8);
        tracep->chgCData(oldp+11,(vlSelf->Register__DOT__reg_2_3),8);
        tracep->chgCData(oldp+12,(vlSelf->Register__DOT__reg_3_0),8);
        tracep->chgCData(oldp+13,(vlSelf->Register__DOT__reg_3_1),8);
        tracep->chgCData(oldp+14,(vlSelf->Register__DOT__reg_3_2),8);
        tracep->chgCData(oldp+15,(vlSelf->Register__DOT__reg_3_3),8);
        tracep->chgCData(oldp+16,(vlSelf->Register__DOT__reg_4_0),8);
        tracep->chgCData(oldp+17,(vlSelf->Register__DOT__reg_4_1),8);
        tracep->chgCData(oldp+18,(vlSelf->Register__DOT__reg_4_2),8);
        tracep->chgCData(oldp+19,(vlSelf->Register__DOT__reg_4_3),8);
        tracep->chgCData(oldp+20,(vlSelf->Register__DOT__reg_5_0),8);
        tracep->chgCData(oldp+21,(vlSelf->Register__DOT__reg_5_1),8);
        tracep->chgCData(oldp+22,(vlSelf->Register__DOT__reg_5_2),8);
        tracep->chgCData(oldp+23,(vlSelf->Register__DOT__reg_5_3),8);
        tracep->chgCData(oldp+24,(vlSelf->Register__DOT__reg_6_0),8);
        tracep->chgCData(oldp+25,(vlSelf->Register__DOT__reg_6_1),8);
        tracep->chgCData(oldp+26,(vlSelf->Register__DOT__reg_6_2),8);
        tracep->chgCData(oldp+27,(vlSelf->Register__DOT__reg_6_3),8);
        tracep->chgCData(oldp+28,(vlSelf->Register__DOT__reg_7_0),8);
        tracep->chgCData(oldp+29,(vlSelf->Register__DOT__reg_7_1),8);
        tracep->chgCData(oldp+30,(vlSelf->Register__DOT__reg_7_2),8);
        tracep->chgCData(oldp+31,(vlSelf->Register__DOT__reg_7_3),8);
        tracep->chgCData(oldp+32,(vlSelf->Register__DOT__reg_8_0),8);
        tracep->chgCData(oldp+33,(vlSelf->Register__DOT__reg_8_1),8);
        tracep->chgCData(oldp+34,(vlSelf->Register__DOT__reg_8_2),8);
        tracep->chgCData(oldp+35,(vlSelf->Register__DOT__reg_8_3),8);
        tracep->chgCData(oldp+36,(vlSelf->Register__DOT__reg_9_0),8);
        tracep->chgCData(oldp+37,(vlSelf->Register__DOT__reg_9_1),8);
        tracep->chgCData(oldp+38,(vlSelf->Register__DOT__reg_9_2),8);
        tracep->chgCData(oldp+39,(vlSelf->Register__DOT__reg_9_3),8);
        tracep->chgCData(oldp+40,(vlSelf->Register__DOT__reg_10_0),8);
        tracep->chgCData(oldp+41,(vlSelf->Register__DOT__reg_10_1),8);
        tracep->chgCData(oldp+42,(vlSelf->Register__DOT__reg_10_2),8);
        tracep->chgCData(oldp+43,(vlSelf->Register__DOT__reg_10_3),8);
        tracep->chgCData(oldp+44,(vlSelf->Register__DOT__reg_11_0),8);
        tracep->chgCData(oldp+45,(vlSelf->Register__DOT__reg_11_1),8);
        tracep->chgCData(oldp+46,(vlSelf->Register__DOT__reg_11_2),8);
        tracep->chgCData(oldp+47,(vlSelf->Register__DOT__reg_11_3),8);
        tracep->chgCData(oldp+48,(vlSelf->Register__DOT__reg_12_0),8);
        tracep->chgCData(oldp+49,(vlSelf->Register__DOT__reg_12_1),8);
        tracep->chgCData(oldp+50,(vlSelf->Register__DOT__reg_12_2),8);
        tracep->chgCData(oldp+51,(vlSelf->Register__DOT__reg_12_3),8);
        tracep->chgCData(oldp+52,(vlSelf->Register__DOT__reg_13_0),8);
        tracep->chgCData(oldp+53,(vlSelf->Register__DOT__reg_13_1),8);
        tracep->chgCData(oldp+54,(vlSelf->Register__DOT__reg_13_2),8);
        tracep->chgCData(oldp+55,(vlSelf->Register__DOT__reg_13_3),8);
        tracep->chgCData(oldp+56,(vlSelf->Register__DOT__reg_14_0),8);
        tracep->chgCData(oldp+57,(vlSelf->Register__DOT__reg_14_1),8);
        tracep->chgCData(oldp+58,(vlSelf->Register__DOT__reg_14_2),8);
        tracep->chgCData(oldp+59,(vlSelf->Register__DOT__reg_14_3),8);
        tracep->chgCData(oldp+60,(vlSelf->Register__DOT__reg_15_0),8);
        tracep->chgCData(oldp+61,(vlSelf->Register__DOT__reg_15_1),8);
        tracep->chgCData(oldp+62,(vlSelf->Register__DOT__reg_15_2),8);
        tracep->chgCData(oldp+63,(vlSelf->Register__DOT__reg_15_3),8);
        tracep->chgCData(oldp+64,(vlSelf->Register__DOT__reg_16_0),8);
        tracep->chgCData(oldp+65,(vlSelf->Register__DOT__reg_16_1),8);
        tracep->chgCData(oldp+66,(vlSelf->Register__DOT__reg_16_2),8);
        tracep->chgCData(oldp+67,(vlSelf->Register__DOT__reg_16_3),8);
        tracep->chgCData(oldp+68,(vlSelf->Register__DOT__reg_17_0),8);
        tracep->chgCData(oldp+69,(vlSelf->Register__DOT__reg_17_1),8);
        tracep->chgCData(oldp+70,(vlSelf->Register__DOT__reg_17_2),8);
        tracep->chgCData(oldp+71,(vlSelf->Register__DOT__reg_17_3),8);
        tracep->chgCData(oldp+72,(vlSelf->Register__DOT__reg_18_0),8);
        tracep->chgCData(oldp+73,(vlSelf->Register__DOT__reg_18_1),8);
        tracep->chgCData(oldp+74,(vlSelf->Register__DOT__reg_18_2),8);
        tracep->chgCData(oldp+75,(vlSelf->Register__DOT__reg_18_3),8);
        tracep->chgCData(oldp+76,(vlSelf->Register__DOT__reg_19_0),8);
        tracep->chgCData(oldp+77,(vlSelf->Register__DOT__reg_19_1),8);
        tracep->chgCData(oldp+78,(vlSelf->Register__DOT__reg_19_2),8);
        tracep->chgCData(oldp+79,(vlSelf->Register__DOT__reg_19_3),8);
        tracep->chgCData(oldp+80,(vlSelf->Register__DOT__reg_20_0),8);
        tracep->chgCData(oldp+81,(vlSelf->Register__DOT__reg_20_1),8);
        tracep->chgCData(oldp+82,(vlSelf->Register__DOT__reg_20_2),8);
        tracep->chgCData(oldp+83,(vlSelf->Register__DOT__reg_20_3),8);
        tracep->chgCData(oldp+84,(vlSelf->Register__DOT__reg_21_0),8);
        tracep->chgCData(oldp+85,(vlSelf->Register__DOT__reg_21_1),8);
        tracep->chgCData(oldp+86,(vlSelf->Register__DOT__reg_21_2),8);
        tracep->chgCData(oldp+87,(vlSelf->Register__DOT__reg_21_3),8);
        tracep->chgCData(oldp+88,(vlSelf->Register__DOT__reg_22_0),8);
        tracep->chgCData(oldp+89,(vlSelf->Register__DOT__reg_22_1),8);
        tracep->chgCData(oldp+90,(vlSelf->Register__DOT__reg_22_2),8);
        tracep->chgCData(oldp+91,(vlSelf->Register__DOT__reg_22_3),8);
        tracep->chgCData(oldp+92,(vlSelf->Register__DOT__reg_23_0),8);
        tracep->chgCData(oldp+93,(vlSelf->Register__DOT__reg_23_1),8);
        tracep->chgCData(oldp+94,(vlSelf->Register__DOT__reg_23_2),8);
        tracep->chgCData(oldp+95,(vlSelf->Register__DOT__reg_23_3),8);
        tracep->chgCData(oldp+96,(vlSelf->Register__DOT__reg_24_0),8);
        tracep->chgCData(oldp+97,(vlSelf->Register__DOT__reg_24_1),8);
        tracep->chgCData(oldp+98,(vlSelf->Register__DOT__reg_24_2),8);
        tracep->chgCData(oldp+99,(vlSelf->Register__DOT__reg_24_3),8);
        tracep->chgCData(oldp+100,(vlSelf->Register__DOT__reg_25_0),8);
        tracep->chgCData(oldp+101,(vlSelf->Register__DOT__reg_25_1),8);
        tracep->chgCData(oldp+102,(vlSelf->Register__DOT__reg_25_2),8);
        tracep->chgCData(oldp+103,(vlSelf->Register__DOT__reg_25_3),8);
        tracep->chgCData(oldp+104,(vlSelf->Register__DOT__reg_26_0),8);
        tracep->chgCData(oldp+105,(vlSelf->Register__DOT__reg_26_1),8);
        tracep->chgCData(oldp+106,(vlSelf->Register__DOT__reg_26_2),8);
        tracep->chgCData(oldp+107,(vlSelf->Register__DOT__reg_26_3),8);
        tracep->chgCData(oldp+108,(vlSelf->Register__DOT__reg_27_0),8);
        tracep->chgCData(oldp+109,(vlSelf->Register__DOT__reg_27_1),8);
        tracep->chgCData(oldp+110,(vlSelf->Register__DOT__reg_27_2),8);
        tracep->chgCData(oldp+111,(vlSelf->Register__DOT__reg_27_3),8);
        tracep->chgCData(oldp+112,(vlSelf->Register__DOT__reg_28_0),8);
        tracep->chgCData(oldp+113,(vlSelf->Register__DOT__reg_28_1),8);
        tracep->chgCData(oldp+114,(vlSelf->Register__DOT__reg_28_2),8);
        tracep->chgCData(oldp+115,(vlSelf->Register__DOT__reg_28_3),8);
        tracep->chgCData(oldp+116,(vlSelf->Register__DOT__reg_29_0),8);
        tracep->chgCData(oldp+117,(vlSelf->Register__DOT__reg_29_1),8);
        tracep->chgCData(oldp+118,(vlSelf->Register__DOT__reg_29_2),8);
        tracep->chgCData(oldp+119,(vlSelf->Register__DOT__reg_29_3),8);
        tracep->chgCData(oldp+120,(vlSelf->Register__DOT__reg_30_0),8);
        tracep->chgCData(oldp+121,(vlSelf->Register__DOT__reg_30_1),8);
        tracep->chgCData(oldp+122,(vlSelf->Register__DOT__reg_30_2),8);
        tracep->chgCData(oldp+123,(vlSelf->Register__DOT__reg_30_3),8);
        tracep->chgCData(oldp+124,(vlSelf->Register__DOT__reg_31_0),8);
        tracep->chgCData(oldp+125,(vlSelf->Register__DOT__reg_31_1),8);
        tracep->chgCData(oldp+126,(vlSelf->Register__DOT__reg_31_2),8);
        tracep->chgCData(oldp+127,(vlSelf->Register__DOT__reg_31_3),8);
    }
    tracep->chgBit(oldp+128,(vlSelf->clock));
    tracep->chgBit(oldp+129,(vlSelf->reset));
    tracep->chgCData(oldp+130,(vlSelf->io_Rs_addr),5);
    tracep->chgCData(oldp+131,(vlSelf->io_Rt_addr),5);
    tracep->chgCData(oldp+132,(vlSelf->io_Rd_addr),5);
    tracep->chgIData(oldp+133,(vlSelf->io_Rd_in),32);
    tracep->chgCData(oldp+134,(vlSelf->io_Rd_byte_w_en),4);
    tracep->chgIData(oldp+135,(vlSelf->io_Rs_out),32);
    tracep->chgIData(oldp+136,(vlSelf->io_Rt_out),32);
    tracep->chgIData(oldp+137,(vlSelf->Register__DOT__io_Rs_out_hi_1),24);
    tracep->chgIData(oldp+138,(vlSelf->Register__DOT__io_Rt_out_hi_1),24);
}

void VRegister___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister___024root__trace_cleanup\n"); );
    // Init
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
