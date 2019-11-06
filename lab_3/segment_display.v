module segment_display(digit, seg);

    input [3:0] digit;
    output [7:0] seg;


    reg [7:0] segment_reg;
    assign seg = segment_reg;

    always @(*)
    begin
        case (digit)
            4'b0000: segment_reg = 8'b11000000;
            4'b0001: segment_reg = 8'b11111001;
            4'b0010: segment_reg = 8'b10100100;
            4'b0011: segment_reg = 8'b10110000;
            4'b0100: segment_reg = 8'b10011001;
            4'b0101: segment_reg = 8'b10010010;
            4'b0110: segment_reg = 8'b10000010;
            4'b0111: segment_reg = 8'b11111000;
            4'b1000: segment_reg = 8'b10000000;
            4'b1001: segment_reg = 8'b10010000;
            default: segment_reg = 8'b11111111;
        endcase
    end

endmodule
