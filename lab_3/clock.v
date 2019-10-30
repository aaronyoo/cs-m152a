module clock(
    input clk, rst,
    output reg twohz_clk, onehz_clk, fast_clk, blink_clk
);

integer onehz_idx;
integer twohz_idx;
integer fast_idx;
integer blink_idx;

always@ (posedge clk)
    begin
        if (rst) begin
            onehz_idx = 0;
            twohz_idx = 0;
            fast_idx = 0;
            blink_idx = 0;
        else
            onehz_idx = onehz_idx + 1;
            twohz_idx = twohz_idx + 1;
            fast_idx = fast_idx + 1;
            blink_idx = blink_idx + 1;

            if (onehz_idx == 100000000) begin
                onehz_idx = 0;
                onehz_clk <= 1;
            else
                onehz_clk <= 0;
            end
    end
endmodule