`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:47:34 10/14/2019 
// Design Name: 
// Module Name:    M3 
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
module M3(
	exp,  // 3 bit exponent
	mant, // 4 bit mantissa
	fifth, // 1 bit input fifth
	E, // 3 bit output exponent
	F
);

input [2:0] exp;
input [3:0] mant;
input	    fifth;

output reg [2:0] E;
output reg [3:0] F;

always @(*)
begin
	if (exp == 3'b111 && mant == 4'b1111 && fifth == 1'b1)
	begin
		// This is a max overflow so just use the biggest possible
		// floating point number.
		E = exp;
		F = mant;
	end
	else if (fifth == 1)
	begin
		if (mant == 4'b1111)  // We want to round up
		begin
			// Special case described in spec, shift 10000 right
			// and increase exponent by 1
		       F = 4'b1000;
		       E = exp[2:0] + 1'b1;
			// exp cannot overflow here or we would be in case 1
		end
		else
		begin
			// Just add one to the mantissa
			E = exp[2:0];
			F = mant[3:0] + 1'b1;
		end
	end
	else
	begin
		// No rounding
		E = exp[2:0];
		F = mant[3:0];
	end
end

endmodule