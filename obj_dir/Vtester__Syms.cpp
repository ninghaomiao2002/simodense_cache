// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtester__pch.h"
#include "Vtester.h"
#include "Vtester___024root.h"

// FUNCTIONS
Vtester__Syms::~Vtester__Syms()
{
}

Vtester__Syms::Vtester__Syms(VerilatedContext* contextp, const char* namep, Vtester* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tester__t__md.configure(this, name(), "tester.t.md", "md", -12, VerilatedScope::SCOPE_OTHER);
}
