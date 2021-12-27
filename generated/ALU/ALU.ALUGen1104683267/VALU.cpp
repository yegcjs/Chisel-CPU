// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU.h"
#include "VALU__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU::VALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VALU__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ALU_op{vlSymsp->TOP.io_ALU_op}
    , io_Zero{vlSymsp->TOP.io_Zero}
    , io_Less{vlSymsp->TOP.io_Less}
    , io_Overflow_out{vlSymsp->TOP.io_Overflow_out}
    , io_A_in{vlSymsp->TOP.io_A_in}
    , io_B_in{vlSymsp->TOP.io_B_in}
    , io_ALU_out{vlSymsp->TOP.io_ALU_out}
    , rootp{&(vlSymsp->TOP)}
{
}

VALU::VALU(const char* _vcname__)
    : VALU(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VALU::~VALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VALU___024root___eval_initial(VALU___024root* vlSelf);
void VALU___024root___eval_settle(VALU___024root* vlSelf);
void VALU___024root___eval(VALU___024root* vlSelf);
#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___final(VALU___024root* vlSelf);

static void _eval_initial_loop(VALU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VALU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VALU___024root___eval_settle(&(vlSymsp->TOP));
        VALU___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VALU___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Invoke final blocks

void VALU::final() {
    VALU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VALU::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep);

static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VALU___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep);

void VALU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALU___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
