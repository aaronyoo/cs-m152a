module clock_test;
    reg clk;
    reg rst;
    reg one_hz_output;
    integer clk_counter;
    
    clock uut (
        .clk(clk), 
        .rst(rst),
        .onehz_clk(one_hz_output)
    );

    always
        #10 clk = ~clk;
        // clk_counter = clk_counter + 1;

    initial begin
        clk = 0;
        rst = 1;
        #100;
        rst = 0;

        $monitor($time, "clk_counter = %d, one_hz_output = %b", clk_counter, one_hz_output);

        #10000;
        $finish;
    end
endmodule