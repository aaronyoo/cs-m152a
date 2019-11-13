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
    twohz_clk = 0;
    fast_clk = 0;
    blink_clk = 0;
end

// This line is for simulation
//always@ (posedge clk or rst)
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

			// One hertz clock
			// if (onehz_idx == 50000000) begin // Too slow for simulator
			if (onehz_idx == 50000000) begin
				$display("IDX: %d, OneCLK: %d", onehz_idx, onehz_clk);
				onehz_idx = 0;
				onehz_clk = ~onehz_clk;
			end

			// Two hertz clock
			if (twohz_idx == 25000000) begin
				$display("IDX: %d, TwoCLK: %d", twohz_idx, twohz_clk);
				twohz_idx = 0;
				twohz_clk = ~twohz_clk;
			end

			// Fast clock
			if (fast_idx == 500000) begin
				// $display("IDX: %d, FastCLK: %d", fast_idx, fast_clk);
				fast_idx = 0;
				fast_clk = ~fast_clk;
			end

			// Blink Clock
			if (blink_idx == 600000) begin
				// $display("IDX: %d, SlowCLK: %d", blink_idx, blink_clk);
				blink_idx = 0;
				blink_clk = ~blink_clk;
			end
		end
    end
endmodule
