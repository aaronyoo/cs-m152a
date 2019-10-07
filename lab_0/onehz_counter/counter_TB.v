`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:54:42 10/07/2019
// Design Name:   counter
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_0/onehz_counter/counter_TB.v
// Project Name:  onehz_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_TB;


	// Inputs
	reg clk;
	reg rst;
	wire led_T;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.led(led_T),
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

