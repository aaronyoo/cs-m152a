module score (
    input wire i_clk,
    input wire signed [31:0] i_score,
    output reg [7:0] seg,
    output reg [3:0] an
);

    wire [7:0] ones_segment;
    wire [7:0] tens_segment;
    wire [7:0] hundreds_segment;
    wire [7:0] thousands_segment;

    wire [3:0] ones_digit;
    wire [3:0] tens_digit;
    wire [3:0] hundreds_digit;
    wire [3:0] thousands_digit;

    reg [3:0] ones_digit_out;
    reg [3:0] tens_digit_out;
    reg [3:0] hundreds_digit_out;
    reg [3:0] thousands_digit_out;

    assign ones_digit = ones_digit_out;
    assign tens_digit = tens_digit_out;
    assign hundreds_digit = hundreds_digit_out;
    assign thousands_digit = thousands_digit_out;

    integer temp_score;

    always @(posedge i_clk) begin
        temp_score = i_score;
        ones_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;
        tens_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;
        hundreds_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;
        thousands_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;
    end

    segment_display ones_display (
        .digit(ones_digit),
        .seg(ones_segment)
    );

    segment_display tens_display (
        .digit(tens_digit),
        .seg(tens_segment)
    );

    segment_display hundreds_display (
        .digit(hundreds_digit),
        .seg(hundreds_segment)
    );

    segment_display thousands_display (
        .digit(thousands_digit),
        .seg(thousands_segment)
    );

    reg [1:0] count = 2'b0;

    always @(posedge i_clk) begin
        if(count == 0) begin
            an <= 4'b0111;
            seg <= thousands_segment;
        end
        else if(count == 1) begin
            an <= 4'b1011;
            seg <= hundreds_segment;
        end
        else if(count == 2) begin an <= 4'b1101;
            seg <= tens_segment;
        end
        else begin
            an <= 4'b1110;
            seg <= ones_segment;
        end
        count <= count+1;
    end
endmodule
