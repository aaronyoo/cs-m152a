module counter_test;
    // Inputs
    reg clk;
    reg rst;
    // Outputs
    wire [3:0] counter_output;
    integer i;

    // Instantiate the Unit Under Test (UUT)
    counter uut (
        .clk(clk),
        .rst(rst),
        .counter_output(counter_output)
    );
    always
    #10 clk= ~ clk;

    initial begin
    $display("Beginning...");
    $printtimescale;
    clk=0;
    // Initialize Inputs
    rst = 1;
    #100;
    rst = 0;

    for (i = 0; i < 15; i = i + 1) begin
        // #500000000; 5 seconds
        $display("Counter is %04b", counter_output);
        #100;
    end

    // Wait 100 ns for global reset to finish
    #100;
    $finish;
    end
endmodule