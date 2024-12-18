// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTER__SYMS_H_
#define VERILATED_VTESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtester.h"

// INCLUDE MODULE CLASSES
#include "Vtester___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtester* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtester___024root              TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tester__t__md;

    // CONSTRUCTORS
    Vtester__Syms(VerilatedContext* contextp, const char* namep, Vtester* modelp);
    ~Vtester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
