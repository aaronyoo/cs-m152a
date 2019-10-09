`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:01:04 10/09/2019
// Design Name:   M1
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_1/compressor/M1_TB.v
// Project Name:  compressor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: M1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module M1_TB;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire [10:0] Z;
	wire S;

	// Instantiate the Unit Under Test (UUT)
	M1 uut (
		.D(D), 
		.Z(Z),
		.S(S)
	);

	initial begin
		// Initialize Inputs
		D = 'b1111111111111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#500;
		$finish;

	end
      
endmodule

