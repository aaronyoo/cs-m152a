module comparison (
    input clk,
    input [2:0] first,
    input up_st,
    input down_st,
    input left_st,
    input right_st,
    output reg success
);
    always @(posedge clk) begin
        if(first == 3'b000 && up_st == 1) begin
            success = 1;
        end
        else if(first == 3'b001 && right_st == 1) begin
            success = 1;
        end
        else if(first == 3'b010 && down_st == 1) begin
            success = 1;
        end
        else if(first == 3'b011 && left_st == 1) begin
            success = 1;
        end
        else if(
                first == 3'b100 && up_st == 0 && right_st == 0
                && down_st == 0 && left_st == 0
        ) begin
            success = 1;
        end
        else begin
            success = 0;
        end
    end
endmodule
