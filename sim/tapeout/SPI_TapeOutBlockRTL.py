#=========================================================================
# Choose PyMTL or Verilog version
#=========================================================================
# Set this variable to 'pymtl' if you are using PyMTL for your RTL design
# (i.e., your design is in IntMulBasePRTL) or set this variable to
# 'verilog' if you are using Verilog for your RTL design (i.e., your
# design is in IntMulBaseVRTL).

rtl_language = 'pymtl'

#-------------------------------------------------------------------------
# Do not edit below this line
#-------------------------------------------------------------------------

# PyMTL wrappers for the corresponding Verilog RTL models.

from os import path
from pymtl3 import *
from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL
from pymtl3.passes.backends.verilog import *
from pymtl3.passes.backends.yosys import *

from SPI_v3.components.SPIstackRTL import SPIstackRTL
from SPI_v3.interfaces.SPIIfc import SPIMinionIfc

class SPI_TapeOutBlockVRTL( VerilogPlaceholder, Component ):

  #=======================================================================
  # Constructor
  #=======================================================================

  def construct( s, nbits=32, num_entries=5):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'grp_99_SPI_TapeOutBlockRTL_{nbits}bits_{num_entries}entries' )
    s.set_metadata( YosysTranslationPass.explicit_module_name,   f'grp_99_SPI_TapeOutBlockRTL_{nbits}bits_{num_entries}entries' )

    #---------------------------------------------------------------------
    # Interface
    #---------------------------------------------------------------------
    
    s.spi_min         = SPIMinionIfc()
    s.loopthrough_sel = InPort()
    s.minion_parity   = OutPort()
    s.adapter_parity  = OutPort()
 
    s.set_metadata( VerilogPlaceholderPass.params, { 
      'nbits'       : (nbits + 2), 
      'num_entries' : num_entries
    })
    s.set_metadata( VerilogPlaceholderPass.port_map, {

      s.loopthrough_sel     : 'loopthrough_sel',
      s.minion_parity       : 'minion_parity',
      s.adapter_parity      : 'adapter_parity',

      s.spi_min.cs          : 'cs',
      s.spi_min.mosi        : 'mosi',
      s.spi_min.miso        : 'miso',
      s.spi_min.sclk        : 'sclk',
    })
    
  #=======================================================================
  # Line tracing
  #=======================================================================

  def line_trace( s ):

    return ""

# For to force testing a specific RTL language
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPI_TapeOutBlockPRTL import SPI_TapeOutBlockPRTL as SPI_TapeOutBlockRTL
elif rtl_language == 'verilog':
#   SPI_TapeOutBlockRTL = SPI_TapeOutBlockVRTL
  from .grp_99_SPI_TapeOutBlockRTL_32bits_5entries_from_verilog import grp_99_SPI_TapeOutBlockRTL_32bits_5entries_from_verilog as SPI_TapeOutBlockRTL
else:
  raise Exception("Invalid RTL language!")