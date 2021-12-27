// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VALU__Syms;
VL_MODULE(VALU___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_ALU_op,3,0);
        VL_OUT8(io_Zero,0,0);
        VL_OUT8(io_Less,0,0);
        VL_OUT8(io_Overflow_out,0,0);
        CData/*0:0*/ ALU__DOT__adder_io_overflow;
        CData/*2:0*/ ALU__DOT__ctrl;
        CData/*0:0*/ ALU__DOT__tocount_30;
        CData/*0:0*/ ALU__DOT__tocount_29;
        CData/*0:0*/ ALU__DOT__tocount_28;
        CData/*0:0*/ ALU__DOT__tocount_27;
        CData/*0:0*/ ALU__DOT__tocount_26;
        CData/*0:0*/ ALU__DOT__tocount_25;
        CData/*0:0*/ ALU__DOT__tocount_24;
        CData/*0:0*/ ALU__DOT__tocount_23;
        CData/*0:0*/ ALU__DOT__tocount_22;
        CData/*0:0*/ ALU__DOT__tocount_21;
        CData/*0:0*/ ALU__DOT__tocount_20;
        CData/*0:0*/ ALU__DOT__tocount_19;
        CData/*0:0*/ ALU__DOT__tocount_18;
        CData/*0:0*/ ALU__DOT__tocount_17;
        CData/*0:0*/ ALU__DOT__tocount_16;
        CData/*0:0*/ ALU__DOT__tocount_15;
        CData/*0:0*/ ALU__DOT__tocount_14;
        CData/*0:0*/ ALU__DOT__tocount_13;
        CData/*0:0*/ ALU__DOT__tocount_12;
        CData/*0:0*/ ALU__DOT__tocount_11;
        CData/*0:0*/ ALU__DOT__tocount_10;
        CData/*0:0*/ ALU__DOT__tocount_9;
        CData/*0:0*/ ALU__DOT__tocount_8;
        CData/*0:0*/ ALU__DOT__tocount_7;
        CData/*0:0*/ ALU__DOT__tocount_6;
        CData/*0:0*/ ALU__DOT__tocount_5;
        CData/*0:0*/ ALU__DOT__tocount_4;
        CData/*0:0*/ ALU__DOT__tocount_3;
        CData/*0:0*/ ALU__DOT__tocount_2;
        CData/*0:0*/ ALU__DOT__tocount_1;
        CData/*4:0*/ ALU__DOT__count_30;
        CData/*4:0*/ ALU__DOT__count_29;
        CData/*4:0*/ ALU__DOT__count_28;
        CData/*4:0*/ ALU__DOT__count_27;
        CData/*4:0*/ ALU__DOT__count_26;
        CData/*4:0*/ ALU__DOT__count_25;
        CData/*4:0*/ ALU__DOT__count_24;
        CData/*4:0*/ ALU__DOT__count_23;
        CData/*4:0*/ ALU__DOT__count_22;
        CData/*4:0*/ ALU__DOT__count_21;
        CData/*4:0*/ ALU__DOT__count_20;
        CData/*4:0*/ ALU__DOT__count_19;
        CData/*4:0*/ ALU__DOT__count_18;
        CData/*4:0*/ ALU__DOT__count_17;
        CData/*4:0*/ ALU__DOT__count_16;
        CData/*4:0*/ ALU__DOT__count_15;
        CData/*4:0*/ ALU__DOT__count_14;
        CData/*4:0*/ ALU__DOT__count_13;
        CData/*4:0*/ ALU__DOT__count_12;
        CData/*4:0*/ ALU__DOT__count_11;
        CData/*4:0*/ ALU__DOT__count_10;
        CData/*4:0*/ ALU__DOT__count_9;
        CData/*4:0*/ ALU__DOT__count_8;
        CData/*4:0*/ ALU__DOT__count_7;
        CData/*4:0*/ ALU__DOT__count_6;
        CData/*4:0*/ ALU__DOT__count_5;
    };
    struct {
        CData/*4:0*/ ALU__DOT__count_4;
        CData/*4:0*/ ALU__DOT__count_3;
        CData/*4:0*/ ALU__DOT__count_2;
        CData/*4:0*/ ALU__DOT__count_1;
        VL_IN(io_A_in,31,0);
        VL_IN(io_B_in,31,0);
        VL_OUT(io_ALU_out,31,0);
        IData/*31:0*/ ALU__DOT__A_in_not;
        IData/*31:0*/ ALU__DOT__adder__DOT__B_in_not;
        QData/*33:0*/ ALU__DOT__adder__DOT__res;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VALU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VALU___024root(const char* name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(VALU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
