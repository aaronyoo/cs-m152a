module comparison (
    input clk,
    input [2:0] first,
    input up,
    input down,
    input left,
    input right,
    output reg success
);
    always @(posedge clk) begin
        success = 0;
        if(first == 3'b000 && up) begin
            success = 1;
        end
        else if(first == 3'b001 && right) begin
            success = 1;
        end
        else if(first == 3'b010 && down) begin
            success = 1;
        end
        else if(first == 3'b011 && left) begin
            success = 1;
        end
        else if(first == 3'b100 && !right && !left && !up && !down) begin
                success = 1;
        end
        else begin
            success = 0;
        end
    end
endmodule
