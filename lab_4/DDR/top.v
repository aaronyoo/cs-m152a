module top(
    input wire clk,
    input wire rst,
	input wire btn_up,
	input wire btn_right,
	input wire btn_left,
	input wire btn_down,
	input wire btn_rst,
    output wire o_vga_hsync,
    output wire o_vga_vsync,
    output wire [2:0] o_vga_r,
    output wire [2:0] o_vga_g,
    output wire [1:0] o_vga_b,
    output wire[7:0] seg,
    output wire[3:0] an
);

    wire pixclk;
    wire movclk;
	wire onehzclk;
    wire fastclk;
    wire integer score;
    wire integer diff;
    // TODO: connect the score to the segment display.
    // - edit the ucf file to allow this
    // - to do the individual digits we just need to do % 10, % 100, % 1000 etc.
    // - then, pass these digits to the different segments like last time.

    clockdiv clock_controller(
        .i_clk(clk),
        .o_pixclk(pixclk),
        .o_onehzclk(onehzclk),
        .o_movclk(movclk),
        .o_fastclk(fastclk)
    );

    vga vga_controller(
        .i_pixclk(pixclk),
        .i_rst(rst),
        .i_btn_up(btn_up),
        .i_btn_right(btn_right),
        .i_btn_down(btn_down),
        .i_btn_left(btn_left),
        .i_btn_rst(btn_rst),
        .i_movclk(movclk),
        .o_hsync(o_vga_hsync),
        .o_vsync(o_vga_vsync),
        .o_red(o_vga_r),
        .o_green(o_vga_g),
        .o_blue(o_vga_b),
        .o_score(score),
        .o_diff(diff)
    );

    score score_display(
        .i_clk(fastclk),
        .i_score(score),
        .i_diff(diff),
        .seg(seg),
        .an(an)
    );

endmodule
