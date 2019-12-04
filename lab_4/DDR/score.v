module score (
    input i_clk,
    input wire signed [31:0] i_score,
    input wire signed [31:0] i_diff,    // difference between perfect and actual scores
    output reg [7:0] seg,
    output reg [3:0] an
);

    wire [7:0] ones_segment;
    // wire [7:0] tens_segment;
    wire [7:0] hundreds_segment;
    wire [7:0] thousands_segment;

    wire [3:0] diff_digit;
    wire [3:0] score_ones_digit;
    wire [3:0] score_tens_digit;

    reg [3:0] diff_digit_out;
    reg [3:0] score_ones_digit_out;
    reg [3:0] score_tens_digit_out;

    assign diff_digit = diff_digit_out;
    assign score_ones_digit = score_ones_digit_out;
    assign score_tens_digit = score_tens_digit_out;

    integer temp_score;

    always @(posedge i_clk) begin
        temp_score = i_score;
        score_ones_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;
        score_tens_digit_out <= temp_score % 10;
        temp_score = temp_score / 10;

        diff_digit_out = i_diff;
    end

    segment_display ones_display (
        .digit(diff_digit_out),
        .seg(ones_segment)
    );

    segment_display hundreds_display (
        .digit(score_ones_digit_out),
        .seg(hundreds_segment)
    );

    segment_display thousands_display (
        .digit(score_tens_digit_out),
        .seg(thousands_segment)
    );

    reg count = 1'b0;

    always @(posedge i_clk) begin
        if(count == 0) begin
            an <= 4'b0111;
            seg <= thousands_segment;
        end
        else if(count == 1) begin
            an <= 4'b1011;
            seg <= hundreds_segment;
        end
        // Always check if diff changes
        an <= 4'b1110;
        seg <= ones_segment;

        count <= count+1;
    end
endmodule
