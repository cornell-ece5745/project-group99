//===========================================
// SPI_TapeOutBlockVRTL
//===========================================

`include "SPI_v3/components/SPIstackVRTL.v"
// ADD INCLUDES HERE FOR YOUR MODULE

module tapeout_SPI_TapeOutBlockVRTL
#(
    parameter nbits = 32, // the size of the val/rdy msg for the SPI Minion (includes the two flow control bits)
    parameter num_entries = 5
)(
    input  logic clk,
    input  logic reset,

    input  logic loopthrough_sel,
    output logic minion_parity,
    output logic adapter_parity,

    // SPI Minion Ifc
    input  logic sclk,
    input  logic cs,
    input  logic mosi,
    output logic miso
);

//===============================================================================================
// TAPEOUT TASK: Create logics here to connect your module to the Send/Recv Ifc of the SPI stack
//===============================================================================================


// We add two to nbits for the two SPI minion flow control bits 
SPI_v3_components_SPIstackVRTL #(nbits, num_entries) SPIstack
(
    .clk(clk),
    .reset(reset),
    .loopthrough_sel(loopthrough_sel),
    .minion_parity(minion_parity),
    .adapter_parity(adapter_parity),

    // SPI Minion Ifc
    .sclk(sclk),
    .cs(cs),
    .mosi(mosi),
    .miso(miso),

    // Send/Recv Ifc
    .send_val(),
    .send_msg(),
    .send_rdy(),

    .recv_val(), 
    .recv_msg(), 
    .recv_rdy()
);

//=============================================================================
// TAPEOUT TASK: Instantiate your module below and connect it to the SPI stack
//=============================================================================

endmodule