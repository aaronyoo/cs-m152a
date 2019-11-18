module stopwatch_counter(
    input wire rst,
    input wire adj,
    input wire sel,
    input wire norm_clk,
    input wire adj_clk,
    input wire pause,
    
    output wire[3:0] sec_ones_out,
    output wire[3:0] sec_tens_out,
    output wire[3:0] min_ones_out,
    output wire[3:0] min_tens_out
);

    reg [3:0] sec_ones = 4'd0;
    reg [3:0] sec_tens = 4'd0;
    reg [3:0] min_ones = 4'd0;
    reg [3:0] min_tens = 4'd0;

    // Do continuous assignment from the counters to the wires
    assign sec_ones_out = sec_ones;
    assign sec_tens_out = sec_tens;
    assign min_ones_out = min_ones;
    assign min_tens_out = min_tens;


    // Choose the correct clock based on the select input
    wire chosen_clock;
    assign chosen_clock = (adj == 0) ? norm_clk : adj_clk;

    always @ (posedge chosen_clock or posedge rst) begin
        if (rst) begin
            // We should reset the counter
            sec_ones <= 4'd0;
            sec_tens <= 4'd0;
            min_ones <= 4'd0;
            min_tens <= 4'd0;
        end
        else if (!adj && !pause) begin
            // We should start counting up normally
            // Make sure to take care of cascading carry
            // Otherwise, simply add 1 to wherever the carry stops
            if (sec_ones == 4'd9) begin
                sec_ones <= 4'd0;
                if (sec_tens == 4'd5) begin
                    sec_tens <= 4'd0;
                    if (min_ones == 4'd9) begin
                        min_ones <= 4'd0;
                        if (min_tens == 4'd5) begin
                            min_tens <= 4'd0;
                            // pause here (@ 00:00, after 59:59)
                            // TODO: pause = 1;
                        end
                        else begin
                            min_tens <= min_tens + 4'd1;
                        end
                    end
                    else begin
                        min_ones <= min_ones + 4'd1;
                    end
                end
                else begin
                    sec_tens <= sec_tens + 4'd1;
                end
            end
            else begin
                sec_ones <= sec_ones + 4'd1;
            end
        end
        else if (adj && sel == 1 && !pause) begin
            // Adjusting the seconds
            // Same logic as the ripple carry above
            if (sec_ones >= 4'd8) begin
                sec_ones <= 4'd0;
                if (sec_tens == 4'd5) begin
                    sec_tens <= 4'd0;
                end
                else begin
                    sec_tens <= sec_tens + 4'd1;
                end
            end
            else begin
                sec_ones <= sec_ones + 4'd2;
            end
        end
        else if (adj && sel == 0 && !pause) begin
            // Adjusting the minutes
            if (min_ones >= 4'd8) begin
                min_ones <= 4'd0;
                if (min_tens == 4'd5) begin
                    min_tens <= 4'd0;
                end
                else begin
                    min_tens <= min_tens + 4'd1;
                end
            end
            else begin
                min_ones <= min_ones + 4'd2;
            end
        end
    end

endmodule