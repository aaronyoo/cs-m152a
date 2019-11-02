module clock(
    input clk, rst,
    output reg twohz_clk, onehz_clk, fast_clk, blink_clk
);

integer onehz_idx;
integer twohz_idx;
integer fast_idx;
integer blink_idx;

initial begin
    onehz_clk = 0;
end

always@ (posedge clk)
    begin
        if (rst) begin
            onehz_idx = 0;
            twohz_idx = 0;
            fast_idx = 0;
            blink_idx = 0;
	end
	else begin
            onehz_idx = onehz_idx + 1;
            twohz_idx = twohz_idx + 1;
            fast_idx = fast_idx + 1;
            blink_idx = blink_idx + 1;

	    // Too slow for simulator
            // if (onehz_idx == 50000000) begin
	    if (onehz_idx == 600000) begin
		$display("IDX: %d, CLK: %d", onehz_idx, onehz_clk);
		onehz_idx = 0;
		onehz_clk = ~onehz_clk;
            end
	end
    end
endmodule
