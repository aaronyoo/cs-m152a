`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:20:18 10/09/2019 
// Design Name: 
// Module Name:    M2 
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
module M2(
	Z,  // 11 bit signed magnitude
	E,  // exponent
	M,  // mantissa
	T   // fifth bit
    );
	
input [10:0] Z;

output reg [2:0] E;
output reg [3:0] M;
output reg T;

reg [4:0] pos;  // position of the highest one
reg [4:0] leading_zeroes;
reg [10:0] TZ;  // temporary Z for shifting
integer i;

always@* begin
	for (i=0; i <= 11; i=i+1) begin
		if (Z[i]) pos = i;
	end

	leading_zeroes = 11 - pos - 1;
	if (leading_zeroes <= 8)
		E = 8 - leading_zeroes;
	else
		E = 0;
	
	TZ = Z << leading_zeroes;
	M = TZ[10:7];
	T = TZ[6]; //TODO : edge case
end


endmodule
