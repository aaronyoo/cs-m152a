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
	
input [11:0] Z;

output reg [2:0] E;
output reg [3:0] M;
output reg T;

reg [4:0] pos;  // position of the highest one
reg [4:0] leading_zeroes;
reg [11:0] TZ;  // temporary Z for shifting
integer i;

always@* begin
	for (i=0; i <= 12; i=i+1) begin
		if (Z[i]) pos = i;
	end

	leading_zeroes = 12 - pos - 1;
	if (leading_zeroes <= 8)
		E = 8 - leading_zeroes;
	else
		E = 0;
	
	if (E == 0) begin
		// Edge case, exponent is zero
		TZ = Z;
		M = TZ[3:0];
		T = 1'b0;
	end
	else begin
		// Normal case
		TZ = Z << leading_zeroes;
		M = TZ[11:8];
		T = TZ[7];
	end
end


endmodule
