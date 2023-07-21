#=========================================================================
# GcdUnitRTL_test
#=========================================================================

import pytest
import os

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_sim

from tut3_pymtl.gcd.GcdUnitRTL import GcdUnitRTL

# Reuse tests from FL model

from tut3_pymtl.gcd.test.GcdUnitFL_test import TestHarness, test_case_table
from tapeout.chip_test.SPI_TestHarness_Output import SPITestHarness
# from SPI_v3.components.SPITestHarness import SPITestHarness
from tapeout.SPI_TapeOutBlockRTL import SPI_TapeOutBlockRTL
# from tapeout.grp_99_SPI_TapeOutBlockRTL_32bits_5entries import grp_99_SPI_TapeOutBlockRTL_32bits_5entries

#-------------------------------------------------------------------------
# Test cases
#-------------------------------------------------------------------------

# @pytest.mark.parametrize( **test_case_table )
# def test_gcd_rtl( test_params, cmdline_opts ):
def test_gcd_rtl( cmdline_opts ):
#   harness = SPITestHarness(grp_99_SPI_TapeOutBlockRTL_32bits_5entries(),    1,           34,   cmdline_opts)
  harness = SPITestHarness(SPI_TapeOutBlockRTL(),    1,           34,   cmdline_opts)

  harness.dut.loopthrough_sel @= 0 # passthrough mode

#   requests  = [] # Create empty list for requests
#   responses = [] # Create empty list for responses

#   requests  = test_params.msgs[::2]
#   responses = test_params.msgs[1::2]
 
#   for i in range(len(requests)):
#       requests[i] = concat(requests[i].a, requests[i].b)
  
#   for i in range(len(responses)):
#       responses[i] = sext(responses[i], 32)
#   requests, responses = get_req_resp("/home/acm289/project-group99/sim/tapeout/chip_test/GCD_Data.txt")

#   harness.t_mult_msg(32, requests, 32, responses)
  file_dir = os.path.dirname(os.path.realpath(__file__))
  harness.test_and_dump( os.path.join( file_dir, "GCD_Data.txt" ), 32, 32, "messages.txt")
