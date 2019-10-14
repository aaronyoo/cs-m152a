`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:58:03 10/14/2019
// Design Name:   FPCVT
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_1/compressor/FPCVT_TB.v
// Project Name:  compressor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_TB;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire S;
	wire [2:0] E;
	wire [3:0] F;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D), 
		.S(S), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		D = 12'b000000101100;
		#10;
		D = 12'b000000101101;
		#10;
		D = 12'b000000101110;
		#10;
		D = 12'b000000101111;
		#10;
		D = 12'b111111111111;
		#10;
		#100

		D = 12'b000001111101;
		#10
		D = 12'b011111111111;
		#10
        
		$finish;

	end
      
endmodule

