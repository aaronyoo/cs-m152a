module clockdiv(
    input wire i_clk,

    output wire o_pixclk,   // pixel clock (25 MHz)
	output wire o_onehzclk, // a onehz clock (1Hz)
	output wire o_movclk,   // clock to control arrow movement
    output wire o_fastclk
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

reg clk_mov = 0;
integer cnt_mov = 0;
always @(posedge i_clk) begin
	if (cnt_mov >= 312500) begin  // right now its 160 Hz
		cnt_mov = 0;
		clk_mov = ~clk_mov;
	end
	else begin
		cnt_mov = cnt_mov + 1;
	end
end
assign o_movclk = clk_mov;

reg clk_fast = 0;
integer cnt_fast = 0;
always @(posedge i_clk) begin
    if(cnt_fast >= 5000) begin
        cnt_fast = 0;
        clk_fast = ~clk_fast;
    end
    else begin
        cnt_fast = cnt_fast + 1;
    end
end
assign o_fastclk = clk_fast;

endmodule
