module debouncer(
    input clk,
    input btn,
    output state
);

    // Code inspired from:
    // https://www.eecs.umich.edu/courses/eecs270/270lab/270_docs/debounce.html
    reg [15:0] counter = 0;
	reg temp_state = 0;
	assign state = temp_state;
	
    always @ (posedge clk) begin
    if (btn == 0) begin
        counter <= 0;
		temp_state <= 0;
    end
    else begin
        counter <= counter + 1'b1;
        if (counter == 16'hffff) begin
                temp_state <= 1;
				counter <= 0;
        end
    end
    end

endmodule