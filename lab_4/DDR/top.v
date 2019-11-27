module top(
    input wire clk,
    input wire rst,
	input wire btn_up,
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
        pixclk, rst, btn_up, movclk, o_vga_hsync, o_vga_vsync, o_vga_r, o_vga_g, o_vga_b
    );

endmodule

