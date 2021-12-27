// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShifter.h for the primary calling header

#ifndef VERILATED_VSHIFTER___024ROOT_H_
#define VERILATED_VSHIFTER___024ROOT_H_  // guard

#include "verilated.h"

class VShifter__Syms;
VL_MODULE(VShifter___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_amount,4,0);
    VL_IN8(io_operation,1,0);
    VL_IN(io_in,31,0);
    VL_OUT(io_out,31,0);

    // INTERNAL VARIABLES
    VShifter__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VShifter___024root(const char* name);
    ~VShifter___024root();
    VL_UNCOPYABLE(VShifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(VShifter__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
