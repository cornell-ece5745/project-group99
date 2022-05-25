#=========================================================================
# GcdUnitRTL_test
#=========================================================================

import pytest

from pymtl3 import *
from pymtl3.stdlib.test_utils import run_sim

from tut3_pymtl.gcd.GcdUnitRTL import GcdUnitRTL

# Reuse tests from FL model

from tut3_pymtl.gcd.test.GcdUnitFL_test import TestHarness, test_case_table
from SPI_v3.components.SPITestHarness import SPITestHarness
from tapeout.SPI_TapeOutBlockRTL import SPI_TapeOutBlockRTL

#-------------------------------------------------------------------------
# Test cases
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_table )
def test_gcd_rtl( test_params, cmdline_opts ):
  harness = SPITestHarness(SPI_TapeOutBlockRTL(32, 5),    1,           34,   cmdline_opts)

  harness.dut.loopthrough_sel @= 0 # passthrough mode

  requests  = [] # Create empty list for requests
  responses = [] # Create empty list for responses

  requests  = test_params.msgs[::2]
  responses = test_params.msgs[1::2]

  for i in range(len(requests)):
      requests[i] = concat(requests[i].a, requests[i].b)
  
  for i in range(len(responses)):
      responses[i] = sext(responses[i], 32)

#   requests.append(0xDEADBEEF)
#   responses.append(0xDEADBEEF)

  harness.t_mult_msg(32, requests, 32, responses)


#   th.set_param("top.src.construct",
#     msgs=test_params.msgs[::2],
#     initial_delay=test_params.src_delay,
#     interval_delay=test_params.src_delay )

#   th.set_param("top.sink.construct",
#     msgs=test_params.msgs[1::2],
#     initial_delay=test_params.sink_delay,
#     interval_delay=test_params.sink_delay )

#   run_sim( th, cmdline_opts, duts=['gcd'] )
