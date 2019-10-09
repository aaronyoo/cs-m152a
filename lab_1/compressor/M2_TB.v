`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:01:20 10/09/2019
// Design Name:   M2
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_1/compressor/M2_TB.v
// Project Name:  compressor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: M2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module M2_TB;

	// Inputs
	reg [10:0] Z;

	// Outputs
	wire [2:0] E;
	wire [3:0] M;
	wire T;

	// Instantiate the Unit Under Test (UUT)
	M2 uut (
		.Z(Z), 
		.E(E), 
		.M(M), 
		.T(T)
	);

	initial begin
		// Initialize Inputs
		Z = 'b00010010000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#200;
		$finish;
	end
      
endmodule

