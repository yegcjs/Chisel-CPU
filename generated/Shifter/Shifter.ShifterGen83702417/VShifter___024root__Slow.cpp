// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifter.h for the primary calling header

#include "verilated.h"

#include "VShifter__Syms.h"
#include "VShifter___024root.h"

void VShifter___024root___ctor_var_reset(VShifter___024root* vlSelf);

VShifter___024root::VShifter___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VShifter___024root___ctor_var_reset(this);
}

void VShifter___024root::__Vconfigure(VShifter__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VShifter___024root::~VShifter___024root() {
}
