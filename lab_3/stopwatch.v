module stopwatch (
    input wire clk,
    input wire rst,
    input wire pause,
    input wire adj,
    input wire sel,
    output reg[7:0] seg,
	output reg[3:0] an
);

    wire [3:0] sec_ones;
    wire [3:0] sec_tens;
    wire [3:0] min_ones;
    wire [3:0] min_tens;

    wire [7:0] sec_ones_segment;
    wire [7:0] sec_tens_segment;
    wire [7:0] min_ones_segment;
    wire [7:0] min_tens_segment;
    wire [7:0] blank_segment;

    wire pause_st;
    wire rst_st;

    debouncer pause_debouncer (
        .clk(clk),
        .btn(pause),
        .state(pause_st)
    );

    debouncer reset_debouncer (
        .clk(clk),
        .btn(rst),
        .state(rst_st)
    );

    wire twohz_clk, onehz_clk, fast_clk, blink_clk;

    clock clock_divider (
        .clk(clk),
        .rst(rst),
        
        .twohz_clk(twohz_clk),
        .onehz_clk(onehz_clk),
        .fast_clk(fast_clk),
        .blink_clk(blink_clk)
    );

    initial begin
    $monitor($time, "onehz_clk = %d", onehz_clk);
    // $monitor($time, "twohz_clk = %d", twohz_clk);
    // $monitor($time, "fast_clk = %d", fast_clk);
    // $monitor($time, "blink_clk = %d", blink_clk);
    end

    reg is_paused = 0;
    always @ (posedge pause_st) begin
        is_paused <= ~is_paused;
    end

    stopwatch_counter counter (
        .rst(rst_st),
        .adj(adj),
        .sel(sel),
        .norm_clk(onehz_clk),
        .adj_clk(twohz_clk),
        .pause(is_paused),

        .sec_ones_out(sec_ones),
        .sec_tens_out(sec_tens),
        .min_ones_out(min_ones),
        .min_tens_out(min_tens)
    );

//	reg [3:0] temp;
//	assign sec_ones = temp;
//	always @(onehz_clk) begin
//		temp = temp + 4'd1;
//	end
//	
//	assign sec_tens = 2;
//	assign min_ones = 1;
//	assign min_tens = 0;

    segment_display sec_ones_display (
        .digit(sec_ones),
        .seg(sec_ones_segment)
    );

    segment_display sec_tens_display (
        .digit(sec_tens),
        .seg(sec_tens_segment)
    );

    segment_display min_ones_display (
        .digit(min_ones),
        .seg(min_ones_segment)
    );

    segment_display min_tens_display (
        .digit(min_tens),
        .seg(min_tens_segment)
    );

    segment_display blank (
        .digit(4'b1111),
        .seg(blank_segment)
    );

    reg [1:0] cnt = 2'b00;

    always @ (posedge fast_clk) begin
        // stopwatch behaves normally
        if(adj == 0) begin
            if(cnt == 0) begin
				an <= 4'b0111;
                seg <= min_tens_segment;
            end
            else if(cnt == 1) begin
				an <= 4'b1011;
                seg <= min_ones_segment;
            end
            else if(cnt == 2) begin
				an <= 4'b1101;
                seg <= sec_tens_segment;
            end
            else if(cnt == 3) begin
				an <= 4'b1110;
                seg <= sec_ones_segment;
            end
            cnt <= cnt + 1;
        end
        // stopwatch stops and ‘selected’ increases at 2Hz
        else begin
            // select is 'minutes'
            if(~sel) begin
                if(cnt == 0) begin // tens place in minutes
					an <= 4'b0111;
                    if(blink_clk)
                        seg <= min_tens_segment;
                    else
                        seg <= blank_segment;
                end
                else if(cnt == 1) begin // ones place in minutes
					an <= 4'b1011;
                    if(blink_clk)
                        seg <= min_ones_segment;
                    else
                        seg <= blank_segment;
                end
                else if(cnt == 2) begin // tens place in seconds
					an <= 4'b1101;
                    seg <= sec_tens_segment;
                end
                else if(cnt == 3) begin // ones place in seconds
					an <= 4'b1110;
                    seg <= sec_ones_segment;
                end
                cnt <= cnt + 1;
            end
            // select is 'seconds'
            else begin
                if(cnt == 0) begin // tens place in minutes
					an <= 4'b0111;
                    seg <= min_tens_segment;
                end
                else if(cnt == 1) begin // ones place in minutes
					an <= 4'b1011;
                    seg <= min_ones_segment;
                end
                else if(cnt == 2) begin // tens place in seconds
                    an <= 4'b1101;
					if(blink_clk)
                        seg <= sec_tens_segment;
                    else
                        seg <= blank_segment;
                end
                else if(cnt == 3) begin // ones place in seconds
					an <= 4'b1110;
                    if(blink_clk)
                        seg <= sec_ones_segment;
                    else
                        seg <= blank_segment;
                    end
                    cnt <= cnt + 1;
                end
            end
        end
endmodule
