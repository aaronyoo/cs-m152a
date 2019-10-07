`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:54:19 10/07/2019 
// Design Name: 
// Module Name:    counter 
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
module counter(
	led,  // light
	clk,  // clock
	rst   // reset
);

input clk;
input rst;

output reg led;

reg [27:0] a;

always @ (posedge clk)
begin
	if (rst)
		begin
		a <= 28'h0000000;
		end
	else
		begin
			if (a == 28'd50000000)
				begin
				led = ~led;
				a <= 28'h0000000;
				end
			else
				begin
				a <= a + 1'b1;
				end
		end
end

endmodule