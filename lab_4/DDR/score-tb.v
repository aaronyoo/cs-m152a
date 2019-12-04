`timescale 1ns/1ps

module score_tb;
    // Inputs
    reg clk;
    integer score;

    // Outputs
    wire [7:0] seg;
    wire [3:0] an;

    score uut (
        .i_clk(clk),
        .i_score(score),
        .seg(seg),
        .an(an)
    );

    initial begin
        clk = 0;
        score = 0;
        #1000

        $display("Running...");
        #1000 clk = ~clk;
        #1000 clk = ~clk;
        score = 11;
        #1000 clk = ~clk;
        #1000 clk = ~clk;
        $display("score = %d, seg = %b", score, seg);
        score = 22;
        $display("score = %d, seg = %b", score, seg);
        #100 $finish;
    end

endmodule
