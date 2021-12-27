// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class VRegister__Syms;
VL_MODULE(VRegister___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_Rs_addr,4,0);
        VL_IN8(io_Rt_addr,4,0);
        VL_IN8(io_Rd_addr,4,0);
        VL_IN8(io_Rd_byte_w_en,3,0);
        CData/*7:0*/ Register__DOT__reg_0_0;
        CData/*7:0*/ Register__DOT__reg_0_1;
        CData/*7:0*/ Register__DOT__reg_0_2;
        CData/*7:0*/ Register__DOT__reg_0_3;
        CData/*7:0*/ Register__DOT__reg_1_0;
        CData/*7:0*/ Register__DOT__reg_1_1;
        CData/*7:0*/ Register__DOT__reg_1_2;
        CData/*7:0*/ Register__DOT__reg_1_3;
        CData/*7:0*/ Register__DOT__reg_2_0;
        CData/*7:0*/ Register__DOT__reg_2_1;
        CData/*7:0*/ Register__DOT__reg_2_2;
        CData/*7:0*/ Register__DOT__reg_2_3;
        CData/*7:0*/ Register__DOT__reg_3_0;
        CData/*7:0*/ Register__DOT__reg_3_1;
        CData/*7:0*/ Register__DOT__reg_3_2;
        CData/*7:0*/ Register__DOT__reg_3_3;
        CData/*7:0*/ Register__DOT__reg_4_0;
        CData/*7:0*/ Register__DOT__reg_4_1;
        CData/*7:0*/ Register__DOT__reg_4_2;
        CData/*7:0*/ Register__DOT__reg_4_3;
        CData/*7:0*/ Register__DOT__reg_5_0;
        CData/*7:0*/ Register__DOT__reg_5_1;
        CData/*7:0*/ Register__DOT__reg_5_2;
        CData/*7:0*/ Register__DOT__reg_5_3;
        CData/*7:0*/ Register__DOT__reg_6_0;
        CData/*7:0*/ Register__DOT__reg_6_1;
        CData/*7:0*/ Register__DOT__reg_6_2;
        CData/*7:0*/ Register__DOT__reg_6_3;
        CData/*7:0*/ Register__DOT__reg_7_0;
        CData/*7:0*/ Register__DOT__reg_7_1;
        CData/*7:0*/ Register__DOT__reg_7_2;
        CData/*7:0*/ Register__DOT__reg_7_3;
        CData/*7:0*/ Register__DOT__reg_8_0;
        CData/*7:0*/ Register__DOT__reg_8_1;
        CData/*7:0*/ Register__DOT__reg_8_2;
        CData/*7:0*/ Register__DOT__reg_8_3;
        CData/*7:0*/ Register__DOT__reg_9_0;
        CData/*7:0*/ Register__DOT__reg_9_1;
        CData/*7:0*/ Register__DOT__reg_9_2;
        CData/*7:0*/ Register__DOT__reg_9_3;
        CData/*7:0*/ Register__DOT__reg_10_0;
        CData/*7:0*/ Register__DOT__reg_10_1;
        CData/*7:0*/ Register__DOT__reg_10_2;
        CData/*7:0*/ Register__DOT__reg_10_3;
        CData/*7:0*/ Register__DOT__reg_11_0;
        CData/*7:0*/ Register__DOT__reg_11_1;
        CData/*7:0*/ Register__DOT__reg_11_2;
        CData/*7:0*/ Register__DOT__reg_11_3;
        CData/*7:0*/ Register__DOT__reg_12_0;
        CData/*7:0*/ Register__DOT__reg_12_1;
        CData/*7:0*/ Register__DOT__reg_12_2;
        CData/*7:0*/ Register__DOT__reg_12_3;
        CData/*7:0*/ Register__DOT__reg_13_0;
        CData/*7:0*/ Register__DOT__reg_13_1;
        CData/*7:0*/ Register__DOT__reg_13_2;
        CData/*7:0*/ Register__DOT__reg_13_3;
        CData/*7:0*/ Register__DOT__reg_14_0;
        CData/*7:0*/ Register__DOT__reg_14_1;
    };
    struct {
        CData/*7:0*/ Register__DOT__reg_14_2;
        CData/*7:0*/ Register__DOT__reg_14_3;
        CData/*7:0*/ Register__DOT__reg_15_0;
        CData/*7:0*/ Register__DOT__reg_15_1;
        CData/*7:0*/ Register__DOT__reg_15_2;
        CData/*7:0*/ Register__DOT__reg_15_3;
        CData/*7:0*/ Register__DOT__reg_16_0;
        CData/*7:0*/ Register__DOT__reg_16_1;
        CData/*7:0*/ Register__DOT__reg_16_2;
        CData/*7:0*/ Register__DOT__reg_16_3;
        CData/*7:0*/ Register__DOT__reg_17_0;
        CData/*7:0*/ Register__DOT__reg_17_1;
        CData/*7:0*/ Register__DOT__reg_17_2;
        CData/*7:0*/ Register__DOT__reg_17_3;
        CData/*7:0*/ Register__DOT__reg_18_0;
        CData/*7:0*/ Register__DOT__reg_18_1;
        CData/*7:0*/ Register__DOT__reg_18_2;
        CData/*7:0*/ Register__DOT__reg_18_3;
        CData/*7:0*/ Register__DOT__reg_19_0;
        CData/*7:0*/ Register__DOT__reg_19_1;
        CData/*7:0*/ Register__DOT__reg_19_2;
        CData/*7:0*/ Register__DOT__reg_19_3;
        CData/*7:0*/ Register__DOT__reg_20_0;
        CData/*7:0*/ Register__DOT__reg_20_1;
        CData/*7:0*/ Register__DOT__reg_20_2;
        CData/*7:0*/ Register__DOT__reg_20_3;
        CData/*7:0*/ Register__DOT__reg_21_0;
        CData/*7:0*/ Register__DOT__reg_21_1;
        CData/*7:0*/ Register__DOT__reg_21_2;
        CData/*7:0*/ Register__DOT__reg_21_3;
        CData/*7:0*/ Register__DOT__reg_22_0;
        CData/*7:0*/ Register__DOT__reg_22_1;
        CData/*7:0*/ Register__DOT__reg_22_2;
        CData/*7:0*/ Register__DOT__reg_22_3;
        CData/*7:0*/ Register__DOT__reg_23_0;
        CData/*7:0*/ Register__DOT__reg_23_1;
        CData/*7:0*/ Register__DOT__reg_23_2;
        CData/*7:0*/ Register__DOT__reg_23_3;
        CData/*7:0*/ Register__DOT__reg_24_0;
        CData/*7:0*/ Register__DOT__reg_24_1;
        CData/*7:0*/ Register__DOT__reg_24_2;
        CData/*7:0*/ Register__DOT__reg_24_3;
        CData/*7:0*/ Register__DOT__reg_25_0;
        CData/*7:0*/ Register__DOT__reg_25_1;
        CData/*7:0*/ Register__DOT__reg_25_2;
        CData/*7:0*/ Register__DOT__reg_25_3;
        CData/*7:0*/ Register__DOT__reg_26_0;
        CData/*7:0*/ Register__DOT__reg_26_1;
        CData/*7:0*/ Register__DOT__reg_26_2;
        CData/*7:0*/ Register__DOT__reg_26_3;
        CData/*7:0*/ Register__DOT__reg_27_0;
        CData/*7:0*/ Register__DOT__reg_27_1;
        CData/*7:0*/ Register__DOT__reg_27_2;
        CData/*7:0*/ Register__DOT__reg_27_3;
        CData/*7:0*/ Register__DOT__reg_28_0;
        CData/*7:0*/ Register__DOT__reg_28_1;
        CData/*7:0*/ Register__DOT__reg_28_2;
        CData/*7:0*/ Register__DOT__reg_28_3;
        CData/*7:0*/ Register__DOT__reg_29_0;
        CData/*7:0*/ Register__DOT__reg_29_1;
        CData/*7:0*/ Register__DOT__reg_29_2;
        CData/*7:0*/ Register__DOT__reg_29_3;
        CData/*7:0*/ Register__DOT__reg_30_0;
        CData/*7:0*/ Register__DOT__reg_30_1;
    };
    struct {
        CData/*7:0*/ Register__DOT__reg_30_2;
        CData/*7:0*/ Register__DOT__reg_30_3;
        CData/*7:0*/ Register__DOT__reg_31_0;
        CData/*7:0*/ Register__DOT__reg_31_1;
        CData/*7:0*/ Register__DOT__reg_31_2;
        CData/*7:0*/ Register__DOT__reg_31_3;
        CData/*0:0*/ __Vclklast__TOP__clock;
        VL_IN(io_Rd_in,31,0);
        VL_OUT(io_Rs_out,31,0);
        VL_OUT(io_Rt_out,31,0);
        IData/*23:0*/ Register__DOT__io_Rs_out_hi_1;
        IData/*23:0*/ Register__DOT__io_Rt_out_hi_1;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VRegister__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRegister___024root(const char* name);
    ~VRegister___024root();
    VL_UNCOPYABLE(VRegister___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRegister__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
