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
    output wire [1:0] o_vga_b
);

    wire pixclk;
    wire movclk;
	wire onehzclk;

    clockdiv clock_controller(
        clk, pixclk, onehzclk, movclk
    );

    vga vga_controller(
        pixclk, rst, btn_up, btn_right, btn_down, btn_left, btn_rst, movclk, o_vga_hsync, o_vga_vsync, o_vga_r, o_vga_g, o_vga_b
    );

endmodule

