// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VGCDUNITRTL_NOPARAM__SYMS_H_
#define _VGCDUNITRTL_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VGcdUnitRTL_noparam.h"
#include "VGcdUnitRTL_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VGcdUnitRTL_noparam__Vcb_line_trace_t) (VGcdUnitRTL_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VGcdUnitRTL_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VGcdUnitRTL_noparam*           TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_GcdUnitRTL_noparam__v;
    
    // CREATORS
    VGcdUnitRTL_noparam__Syms(VGcdUnitRTL_noparam* topp, const char* namep);
    ~VGcdUnitRTL_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
