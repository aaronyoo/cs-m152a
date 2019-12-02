`timescale 1ns/1ps

module score_tb;
    // Inputs
    integer score;

    // Outputs
    wire [7:0] seg;
    wire [3:0] an;

    score uut (
        .o_score(score),
        .seg(seg),
        .an(an)
    );

    initial begin
        $display("Running...");
        score = 11;
        $display("score = %d, seg = %b", score, seg);
        score = 19;
        $display("score = %d, seg = %b", score, seg);
        #10 $finish;
    end

endmodule
