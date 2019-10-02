`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:44:14 10/02/2019
// Design Name:   four_bit_counter_old
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_0/four_bit_counter/four_bit_counter_old_TB.v
// Project Name:  four_bit_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_counter_old
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_counter_old_TB;

	// Inputs
	reg clk;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	four_bit_counter_old uut (
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		
		#20
		
		rst = 1;
		
		#20
		
		rst = 0;
	end
	
	always begin
		#5 clk = ~clk;
	end;
      
endmodule

