`timescale 1ns/1ps

module score_tb;
    // Inputs
    reg clk;
    integer score;
    integer diff;

    // Outputs
    wire [7:0] seg;
    wire [3:0] an;

    score uut (
        .i_clk(clk),
        .i_score(score),
        .i_diff(diff),
        .seg(seg),
        .an(an)
    );

    initial begin
        clk = 0;
        score = 0;
        diff = 5;
        #1000

        $display("Running...");
        #10 clk = ~clk;
        #10 clk = ~clk;
        score = 11;
        #10 clk = ~clk;
        #10 clk = ~clk;
        $monitor("score = %d, seg = %b", score, seg);
        score = 22;
        #10 clk = ~clk;
        #10 clk = ~clk;
//        forever begin
//            #10 clk = ~clk;
//        end
        #100 $finish;
    end

endmodule
