module score (
    input wire signed [31:0] o_score,
    output reg [7:0] seg,
    output reg [3:0] an
);

    wire [7:0] ones_segment;
    wire [7:0] tens_segment;
    wire [7:0] hundreds_segment;
    wire [7:0] thousands_segment;

    // Combining 4 digits of the segment display into one array
    // Each digit is 4-bit long.
    // wire [15:0] digits;
    // wire [3:0] ones_digit;
    // wire [3:0] tens_digit;
    wire [3:0] hundreds_digit;
    wire [3:0] thousands_digit;

    // reg [3:0] tmp_ones_digit;
    // reg [3:0] tmp_tens_digit;
    reg [3:0] tmp_hundreds_digit;
    reg [3:0] tmp_thousands_digit;

    // assign ones_digit = tmp_ones_digit;
    // assign tens_digit = tmp_tens_digit;
    assign hundreds_digit = tmp_hundreds_digit;
    assign thousands_digit = tmp_thousands_digit;

    integer temp_score;

    always @(*) begin
        temp_score = o_score;
        tmp_hundreds_digit <= temp_score % 10;
        temp_score = temp_score / 10;
        tmp_thousands_digit <= temp_score % 10;
        temp_score = temp_score / 10;
    end

    // segment_display ones_display (
    //     .digit(ones_digit),
    //     .seg(ones_segment)
    // );
    //
    // segment_display tens_display (
    //     .digit(tens_digit),
    //     .seg(tens_segment)
    // );

    segment_display hundreds_display (
        .digit(tmp_hundreds_digit),
        .seg(hundreds_segment)
    );

    segment_display thousands_display (
        .digit(tmp_thousands_digit),
        .seg(thousands_segment)
    );

    reg [1:0] count = 2'b00;

    always @(*) begin
        if(count == 0) begin
            an <= 4'b0111;
            seg <= thousands_segment;
        end
        else if(count == 1) begin
            an <= 4'b1011;
            seg <= hundreds_segment;
        end
        // else if(count == 2) begin
        //     an <= 4'b1101;
        //     seg <= tens_segment;
        // end
        // else if(count == 3) begin
        //     an <= 4'b1110;
        //     seg <= ones_segment;
        // end
        count <= count+1;
    end
endmodule
