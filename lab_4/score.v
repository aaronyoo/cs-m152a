module score (
    input wire clk,
    input wire rst,
    input wire up,
    input wire down,
    input wire left,
    input wire right,
    output reg [7:0] seg,
    output reg [3:0] an
);

    wire up_st, down_st, left_st, right_st;

    wire [7:0] ones_segment;
    wire [7:0] tens_segment;
    wire [7:0] hundreds_segment;
    wire [7:0] thousands_segment;

    wire [3:0] ones_digit;
    wire [3:0] tens_digit;
    wire [3:0] hundreds_digit;
    wire [3:0] thousands_digit;

    debouncer up_debouncer (
        .clk(clk),
        .btn(up),
        .state(up_st)
    );

    debouncer down_debouncer (
        .clk(clk),
        .btn(down),
        .state(down_st)
    );

    debouncer left_debouncer (
        .clk(clk),
        .btn(left),
        .state(left_st)
    );

    debouncer right_debouncer (
        .clk(clk),
        .btn(right),
        .state(right_st)
    );

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

    score_counter counter (
        .pressed(pressed_signal),
        .rst(rst),

        .ones_out(ones_digit),
        .tens_out(tens_digit),
        .hundreds_out(hundreds_digit),
        .thousands_out(thousands_digit)
    );

    reg [1:0] count = 2'b00;

    always @ (posedge clk) begin
        if(cnt == 0) begin
            an <= 4'b0111;
            seg <= thousands_segment;
        end
        else if(cnt == 1) begin
            an <= 4'b1011;
            seg <= hundreds_segment;
        end
        else if(cnt == 2) begin
            an <= 4'b1101;
            seg <= tens_segment;
        end
        else if(cnt == 3) begin
            an <= 4'b1110;
            seg <= ones_segment;
        end
        cnt <= cnt+1;
    end
endmodule
