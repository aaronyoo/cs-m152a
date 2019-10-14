`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:53:54 10/14/2019
// Design Name:   M3
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_1/compressor/M3_TB.v
// Project Name:  compressor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: M3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module M3_TB;

	// Inputs
	reg [2:0] exp;
	reg [3:0] mant;
	reg fifth;

	// Outputs
	wire [2:0] E;
	wire [3:0] F;

	// Instantiate the Unit Under Test (UUT)
	M3 uut (
		.exp(exp), 
		.mant(mant), 
		.fifth(fifth), 
		.E(E), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		exp = 3'b000;
		mant = 4'b1111;
		fifth = 1'b1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#250;
		$finish;

	end
      
endmodule

