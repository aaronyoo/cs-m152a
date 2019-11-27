module clockdiv(
    input wire i_clk,

    output wire o_pixclk,   // pixel clock (25 MHz)
	output wire o_onehzclk
);

reg clk_25mhz = 0;
integer cnt_25mhz = 0;
always @(posedge i_clk) begin
    if (cnt_25mhz >= 1) begin
        cnt_25mhz = 0;
        clk_25mhz = ~clk_25mhz;
    end
	else begin
		cnt_25mhz = cnt_25mhz + 1;
	end
end
assign o_pixclk = clk_25mhz;

reg clk_1hz = 0;
integer cnt_1hz = 0;
always @(posedge i_clk) begin
	if (cnt_1hz >= 50000000) begin
		cnt_1hz = 0;
		clk_1hz = ~clk_1hz;
	end
	else begin
		cnt_1hz = cnt_1hz + 1;
	end
end
assign o_onehzclk = clk_1hz;

endmodule