module clock_test;
    reg clk;
    reg rst;
    wire one_hz_output;
    integer clk_counter;
    
    clock uut (
        .clk(clk), 
        .rst(rst),
        .onehz_clk(one_hz_output)
    );

    always begin
        #10 clk = ~clk;
        clk_counter = clk_counter + 1;
    end

    initial begin
	    clk_counter = 0;
        clk = 0;
        rst = 1;
        #100;
        rst = 0;

        $monitor($time, "one_hz_output = %b", one_hz_output);

        #10000000000;
        $finish;
    end
endmodule
