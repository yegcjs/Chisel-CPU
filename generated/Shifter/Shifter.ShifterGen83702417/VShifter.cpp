// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShifter.h"
#include "VShifter__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VShifter::VShifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VShifter__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_amount{vlSymsp->TOP.io_amount}
    , io_operation{vlSymsp->TOP.io_operation}
    , io_in{vlSymsp->TOP.io_in}
    , io_out{vlSymsp->TOP.io_out}
    , rootp{&(vlSymsp->TOP)}
{
}

VShifter::VShifter(const char* _vcname__)
    : VShifter(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VShifter::~VShifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VShifter___024root___eval_initial(VShifter___024root* vlSelf);
void VShifter___024root___eval_settle(VShifter___024root* vlSelf);
void VShifter___024root___eval(VShifter___024root* vlSelf);
#ifdef VL_DEBUG
void VShifter___024root___eval_debug_assertions(VShifter___024root* vlSelf);
#endif  // VL_DEBUG
void VShifter___024root___final(VShifter___024root* vlSelf);

static void _eval_initial_loop(VShifter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VShifter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VShifter___024root___eval_settle(&(vlSymsp->TOP));
        VShifter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VShifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VShifter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Invoke final blocks

void VShifter::final() {
    VShifter___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VShifter::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VShifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VShifter___024root__trace_init_top(VShifter___024root* vlSelf, VerilatedVcd* tracep);

static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShifter___024root*>(voidSelf);
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShifter___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VShifter___024root__trace_register(VShifter___024root* vlSelf, VerilatedVcd* tracep);

void VShifter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VShifter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
