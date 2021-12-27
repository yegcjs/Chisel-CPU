// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister.h"
#include "VRegister__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegister::VRegister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VRegister__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_Rs_addr{vlSymsp->TOP.io_Rs_addr}
    , io_Rt_addr{vlSymsp->TOP.io_Rt_addr}
    , io_Rd_addr{vlSymsp->TOP.io_Rd_addr}
    , io_Rd_byte_w_en{vlSymsp->TOP.io_Rd_byte_w_en}
    , io_Rd_in{vlSymsp->TOP.io_Rd_in}
    , io_Rs_out{vlSymsp->TOP.io_Rs_out}
    , io_Rt_out{vlSymsp->TOP.io_Rt_out}
    , rootp{&(vlSymsp->TOP)}
{
}

VRegister::VRegister(const char* _vcname__)
    : VRegister(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VRegister::~VRegister() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRegister___024root___eval_initial(VRegister___024root* vlSelf);
void VRegister___024root___eval_settle(VRegister___024root* vlSelf);
void VRegister___024root___eval(VRegister___024root* vlSelf);
#ifdef VL_DEBUG
void VRegister___024root___eval_debug_assertions(VRegister___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister___024root___final(VRegister___024root* vlSelf);

static void _eval_initial_loop(VRegister__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRegister___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRegister___024root___eval_settle(&(vlSymsp->TOP));
        VRegister___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRegister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRegister___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Invoke final blocks

void VRegister::final() {
    VRegister___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VRegister::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VRegister::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VRegister___024root__trace_init_top(VRegister___024root* vlSelf, VerilatedVcd* tracep);

static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegister___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister___024root*>(voidSelf);
    VRegister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRegister___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VRegister___024root__trace_register(VRegister___024root* vlSelf, VerilatedVcd* tracep);

void VRegister::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRegister___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
