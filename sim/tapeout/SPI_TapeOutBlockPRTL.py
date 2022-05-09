'''
==========================================================================
SPI_TapeOutBlockPRTL.py
==========================================================================
A composition module combining the SPI stack (SPI Minion, SPI Minion Adapter, and Loopthrough)
that connects to the individual project group's block module. This was used for the 
efabless tapeout in Spring 2022.

Author : Jack Brzozowski
  Date : May 9th, 2022

'''

from pymtl3 import *
from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL
from pymtl3.passes.backends.verilog import *
from pymtl3.passes.backends.yosys import *

from SPI_v3.components.SPIstackRTL import SPIstackRTL


class SPI_TapeOutBlockPRTL( Component ):

  #=======================================================================
  # Constructor
  #=======================================================================

  def construct( s, nbits=32, num_entries=5):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'grp_99_SPI_TapeOutBlockRTL_{nbits}bits_{num_entries}entries' )
    s.set_metadata( YosysTranslationPass.explicit_module_name,   f'grp_99_SPI_TapeOutBlockRTL_{nbits}bits_{num_entries}entries' )

    #---------------------------------------------------------------------
    # Interface
    #---------------------------------------------------------------------
    
    s.cs              = InPort()
    s.sclk            = InPort()
    s.mosi            = InPort()
    s.miso            = OutPort()
    s.loopthrough_sel = InPort()
    s.minion_parity   = OutPort()
    s.adapter_parity  = OutPort()
 
    #--------------------------------------------------------------------- 
    # Module Instantiation
    #---------------------------------------------------------------------
    
    s.spi_min_stack = ms = SPIstackRTL(nbits + 2, num_entries)
    ms.spi_min.cs      //= s.cs
    ms.spi_min.sclk    //= s.sclk
    ms.spi_min.mosi    //= s.mosi
    ms.spi_min.miso    //= s.miso
    ms.loopthrough_sel //= s.loopthrough_sel
    ms.minion_parity   //= s.minion_parity
    ms.adapter_parity  //= s.adapter_parity

    #=====================================================================================================
    # TAPEOUT TASK Instantiate your PyMTL Module Here and connect it to the SPIstack Send/Recv interfaces
    #=====================================================================================================

    # ms.recv //=  #Connect to this interface
    # ms.send //=  #Connect to this interface
    
  #=======================================================================
  # Line tracing
  #=======================================================================

  def line_trace( s ):

    return ""