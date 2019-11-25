module clockdiv(
    input wire i_clk,

    output wire o_pixclk   // pixel clock (25 MHz)
);

reg clk_25mhz = 0;
integer cnt;
always @(posedge i_clk) begin
    if (cnt >= 1) begin
        cnt = 0;
        clk_25mhz = ~clk_25mhz;
    end
end

assign o_pixclk = clk_25mhz;

endmodule