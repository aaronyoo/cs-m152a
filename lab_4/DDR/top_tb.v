`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:14:08 11/20/2019
// Design Name:   top
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_4/DDR/top_tb.v
// Project Name:  DDR
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;

	// Outputs
	wire hsync;
	wire vsync;
	wire [2:0] o_vga_r;
	wire [2:0] o_vga_g;
	wire [1:0] o_vga_b;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.hsync(hsync), 
		.vsync(vsync), 
		.o_vga_r(o_vga_r), 
		.o_vga_g(o_vga_g), 
		.o_vga_b(o_vga_b)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		forever begin
			#100
			clk = ~clk;
		end

	end
      
endmodule

