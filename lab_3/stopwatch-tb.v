`timescale 1ns/1ps

module stopwatch_tb;
    // Inputs
    reg clk;
    reg rst;
    reg pause;
    reg adj;
    reg sel;

    // Outputs
    wire [3:0] counter;
    wire [7:0] seg;

    stopwatch uut (
        .clk(clk),
        .rst(rst),
        .pause(pause),
        .adj(adj),
        .sel(sel),
        .seg(seg)
    );

    initial begin
        $display("Running...");
        clk = 0;
        rst = 0;
        pause = 0;
        adj = 0;
        sel = 0;

        #1000
		rst = 1;
		#1000
		rst = 0;
		#1000

        forever #1000 clk = ~clk;
        $monitor($time, "segment = %b", seg);
        
    end

endmodule