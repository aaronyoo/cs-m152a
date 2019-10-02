`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:48 10/02/2019 
// Design Name: 
// Module Name:    four_bit_counter_modern 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module four_bit_counter_modern(
	clk,  // clock
	rst   // reset
);

input clk;
input rst;

reg [3:0] a;

always @ (posedge clk)
if (rst)
	a <= 4'b0000;
else
	a <= a + 1'b1;


endmodule
