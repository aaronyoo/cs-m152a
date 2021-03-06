`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:56:26 11/25/2019
// Design Name:   top
// Module Name:   C:/Users/152/Desktop/cs-m152a/lab_4/DDR/top-tb.v
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

module toptb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire o_vga_hsync;
	wire o_vga_vsync;
	wire [2:0] o_vga_r;
	wire [2:0] o_vga_g;
	wire [1:0] o_vga_b;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst), 
		.o_vga_hsync(o_vga_hsync), 
		.o_vga_vsync(o_vga_vsync), 
		.o_vga_r(o_vga_r), 
		.o_vga_g(o_vga_g), 
		.o_vga_b(o_vga_b)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst = 1;
		#1000;
		rst = 0;
		#1000
		forever begin
			clk = ~clk;
			#200;
		end

	end
      
endmodule

