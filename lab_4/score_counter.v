/*
Increment the score by 1 every time the game controller tells it to.
Push the updated score to the seven segment display.
*/
module score_counter (
    input wire pressed,
    input wire rst,

    output wire [3:0] ones_out,
    output wire [3:0] tens_out,
    output wire [3:0] hundreds_out,
    output wire [3:0] thousands_out
);

    reg [3:0] ones_digit = 4'd0;
    reg [3:0] tens_digit = 4'd0;
    reg [3:0] hundreds_digit = 4'd0;
    reg [3:0] thousands_digit = 4'd0;

    // Do continuous assignment from the counters to the wires
    assign ones_out = ones_digit;
    assign tens_out = tens_digit;
    assign hundreds_out = hundreds_digit;
    assign thousands_out = thousands_digit;

    always @ (posedge pressed) begin
        if(rst) begin
            ones_digit <= 4'd0;
            tens_digit <= 4'd0;
            hundreds_digit <= 4'd0;
            thousands_digit <= 4'd0;
        end
        else begin
            if (ones_digit == 4'd9) begin
                ones_digit <= 4'd0;
                if (tens_digit == 4'd9) begin
                    tens_digit <= 4'd0;
                    if(hundreds_digit == 4'd9) begin
                        hundreds_digit <= 4'd0;
                        if (thousands_digit == 4'd9) begin
                            thousands_digit <= 4'd0;
                        end
                        else begin
                            thousands_digit <= thousands_digit + 4'd1;
                        end
                    end
                    else begin
                        hundreds_digit <= hundreds_digit + 4'd1;
                    end
                end
                else begin
                    tens_digit <= tens_digit + 4'd1;
                end
            end
            else begin
                ones_digit <= ones_digit + 4'd1;
            end
        end
    end
endmodule
