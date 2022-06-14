from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class grp_99_SPI_TapeOutBlockRTL_32bits_5entries_from_verilog( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s ):

    # Port-based interface

    # s.in_ = InPort ( 8 )
    # s.out = OutPort( 8 )
    s.adapter_parity = OutPort(1)
    s.loopthrough_sel = InPort(1)
    s.minion_parity = OutPort(1)
    s.spi_min__cs = InPort(1)
    s.spi_min__miso = OutPort(1)
    s.spi_min__mosi = InPort(1)
    s.spi_min__sclk = InPort(1)