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

M1(.D(D));



endmodule
