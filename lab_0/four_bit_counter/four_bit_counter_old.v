`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:32:10 10/02/2019 
// Design Name: 
// Module Name:    four_bit_counter_old 
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
module four_bit_counter_old(
	clk,  // clock
	rst   // reset
);

input clk;
input rst;

reg a0;
reg a1;
reg a2;
reg a3;

always @ (posedge clk)
if (rst) 
	begin
	a0 <= 1'b0;
	a1 <= 1'b0;
	a2 <= 1'b0;
	a3 <= 1'b0;
	end
else
	begin
	a0 <= ~a0;
	a1 <= a0 ^ a1;
	a2 <= a2 ^ (a0 & a1);
	a3 <= a3 ^((a0 & a1) & a2);
	end

endmodule
