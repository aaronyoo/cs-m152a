module top(
    input wire clk,
    output wire hsync,
    output wire vsync,
    output wire [2:0] o_vga_r,
    output wire [2:0] o_vga_g,
    output wire [1:0] o_vga_b
);

    reg [2:0] cnt = 4'b0;
    reg pix_stb;
    wire pix_clk;
    assign pix_clk = pix_stb;
    always @(posedge clk) begin
        if (cnt >= 4) begin
            pix_stb <= 1;
			cnt <= 0;
		end
        else begin
            pix_stb <= 0;
            cnt <= cnt + 4'd1;
		end
	end
	
	assign o_vga_r = 4'b0;
	assign o_vga_g = 4'b0;
	assign o_vga_b = 4'b0;

    vga vgacontrol(.pix_clk(pix_clk),
      .rst(rst_st),
      .hsync(hsync),
      .vsync(vsync)
	 );
    //   .pixel_x(pixel_x),
    //   .pixel_y(pixel_y),
    //   .vidon(vidon));

endmodule