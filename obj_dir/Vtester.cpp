// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtester__pch.h"

//============================================================
// Constructors

Vtester::Vtester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtester__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , finished{vlSymsp->TOP.finished}
    , fpuen{vlSymsp->TOP.fpuen}
    , fpu1in{vlSymsp->TOP.fpu1in}
    , fpu2in{vlSymsp->TOP.fpu2in}
    , fpuout{vlSymsp->TOP.fpuout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtester::Vtester(const char* _vcname__)
    : Vtester(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtester::~Vtester() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtester___024root___eval_debug_assertions(Vtester___024root* vlSelf);
#endif  // VL_DEBUG
void Vtester___024root___eval_static(Vtester___024root* vlSelf);
void Vtester___024root___eval_initial(Vtester___024root* vlSelf);
void Vtester___024root___eval_settle(Vtester___024root* vlSelf);
void Vtester___024root___eval(Vtester___024root* vlSelf);

void Vtester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtester___024root___eval_static(&(vlSymsp->TOP));
        Vtester___024root___eval_initial(&(vlSymsp->TOP));
        Vtester___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtester___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtester::eventsPending() { return false; }

uint64_t Vtester::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtester___024root___eval_final(Vtester___024root* vlSelf);

VL_ATTR_COLD void Vtester::final() {
    Vtester___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtester::hierName() const { return vlSymsp->name(); }
const char* Vtester::modelName() const { return "Vtester"; }
unsigned Vtester::threads() const { return 1; }
void Vtester::prepareClone() const { contextp()->prepareClone(); }
void Vtester::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtester::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtester::trace()' called on model that was Verilated without --trace option");
}
