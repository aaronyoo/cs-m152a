`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:36:38 10/09/2019 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT(
	D,  // Two's complement representation D0(LSB) D11(MSB)
	S,   // Sign bit of floating point representation
	E,  // 3-bit exponent
	F  // 4-bit mantissa
);

input [11:0] D;

output       S;
output [2:0] E;
output [3:0] F;

// M1 -- converts 2's complemented to signed magnitude
// M2 -- counts leading zeroes
// M3 -- rounding

wire [10:0] w_z; 	// connects M1 to M2
wire [2:0] w_exp; 	// connects M2 to M3
wire [3:0] w_mant; 	// connects M2 to M3
wire w_fifth 		// connects M2 to M3

M1(.D(D), .S(S), .Z(w_z));
M2(.Z(w_z), .E(w_exp), .M(w_mant), .T(w_fifth))
// TODO: call to M3

endmodule
