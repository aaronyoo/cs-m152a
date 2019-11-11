module debouncer(
  input clk,
  input btn,
  output reg pressed
);

  // Code inspired from:
  // https://www.eecs.umich.edu/courses/eecs270/270lab/270_docs/debounce.html
  reg [15:0] counter;

  reg sync0;
  always @ (posedge clk) begin
    sync0 <= btn;
  end

  reg sync1;
  always @ (posedge clk) begin
    sync1 <= sync0;
  end

  always @ (posedge clk) begin
    if (pressed == sync1) begin
  		counter <= 0;
  	end
  	else begin
  		counter <= counter + 1'b1;
  		if (counter == 16'hffff) begin
  	     		pressed <= ~pressed;
  		end
    end
  end

endmodule
