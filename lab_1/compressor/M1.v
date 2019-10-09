`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:44:38 10/09/2019 
// Design Name: 
// Module Name:    M1 
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
module M1(
	D,  // two's complement input
	Z,  // signed magnitude
	S
    );

input [11:0] D;
output reg [10:0] Z;
output reg S;

always @*
if (D[11])
begin
	if (D == 'b100000000000)
	begin
		// special case
		S = 1'b1;
		Z = 'b11111111111;
	end
	else
	begin
		// X is negative
		S = D[11];
		Z = (~D[10:0] + 1'b1);
	end
end
else
begin
	// D is positive
	S = D[11];
	Z = D[10:0];
end

endmodule
