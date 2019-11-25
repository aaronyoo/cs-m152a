`timescale 1ns/1ps

module comparison_tb;
    // Inputs
    reg clk;
    reg [2:0] first;
    reg up;
    reg down;
    reg left;
    reg right;

    // Outputs
    wire success;

    comparison uut (
        .clk(clk),
        .first(first),
        .up(up),
        .down(down),
        .left(left),
        .right(right),
        .success(success)
    );

    initial begin
        $display("Running...");
        clk = 1;
        first = 3'b000;
        up = 0;
        down = 0;
        left = 0;
        right = 0;

		up = 1;
        #1000 clk = ~clk;
        $display($time, "first = %b, up = %b, success = %b", first, up, success);

        up = 0;
        first = 3'b100; // blank
        right = 1;
        #1000 clk = ~clk;
        #1000 clk = ~clk;
        $display($time, "first = %b, right = %b, success = %b", first, right, success);

        first = 3'b010; // down
        down = 1;
        right = 0;
        #1000 clk = ~clk;
        #1000 clk = ~clk;
        $display($time, "first = %b, down = %b, success = %b", first, down, success);
    end

endmodule
