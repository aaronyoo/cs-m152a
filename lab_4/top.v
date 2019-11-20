module top(
    input wire clk,
    output wire o_vga_hsync,
    output wire o_vga_vsync,
    output wire [2:0] o_vga_r,
    output wire [2:0] o_vga_g,
    output wire [1:0] o_vga_b,
);

    reg [2:0] cnt;
    reg pix_stb;
    wire pix_clk;
    assign pix_clk = pix_stb;
    always @(posedge CLK)
        if (cnt >= 4):
            pix_stb <= 1;
        else:
            pix_stb <= 0;
            cnt <= cnt + 4'd1;

    always @(posedge pix_clk)
        o_vga_r = 3'b0;
        o_vga_g = 3'b0;
        o_vga_b = 2'b0;

    vga vgacontrol(.pix_clk(clk_25),
      .rst(rst_st),
      .hsync(hsync_out),
      .vsync(vsync_out),
    //   .pixel_x(pixel_x),
    //   .pixel_y(pixel_y),
    //   .vidon(vidon));

