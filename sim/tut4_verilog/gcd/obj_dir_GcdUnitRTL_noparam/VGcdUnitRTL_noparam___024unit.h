// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGcdUnitRTL_noparam.h for the primary calling header

#ifndef _VGCDUNITRTL_NOPARAM___024UNIT_H_
#define _VGCDUNITRTL_NOPARAM___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VGcdUnitRTL_noparam__Dpi.h"

//==========

class VGcdUnitRTL_noparam__Syms;

//----------

VL_MODULE(VGcdUnitRTL_noparam___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VGcdUnitRTL_noparam__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VGcdUnitRTL_noparam___024unit);  ///< Copying not allowed
  public:
    VGcdUnitRTL_noparam___024unit(const char* name = "TOP");
    ~VGcdUnitRTL_noparam___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VGcdUnitRTL_noparam__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
