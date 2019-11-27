module segment_display_test;
    // Inputs
    reg [3:0] digit;
    // Output
    wire [7:0] seg;
    integer i;

    // Unit Under Test
    segment_display uut (
        .digit(digit),
        .seg(seg)
    );

    initial begin
        digit = 0;

    for (i = 0; i < 100; i = i + 1) begin
    // go through 0-100
        digit = i % 10;
        $monitor($time, "digit = %b, segment display = %b", digit, seg);
        #100;
    end

    #10000;
    $finish;

    end

endmodule
