module vga(
    input wire i_pixclk,        // pixel clock (25 MHz)
    input wire i_rst,           // reset/clear

    output wire o_hsync,        // horizontal sync
    output wire o_vsync,        // vertical sync
    output reg [2:0] o_red,     // red vga output
    output reg [2:0] o_green,   // green vga output
    output reg [1:0] o_blue     // blue vga output

    // TODO: need to add the games state to this interface
);

localparam HPIXELS = 800;  // horizontal pixels per line
localparam VLINES  = 521;  // vertical lines per frame
localparam HPULSE  = 96;   // hsync pulse length
localparam VPULSE  = 2;    // vsync pulse length
localparam HBP     = 144;  // end of horizontal back porch
localparam HFP     = 784;  // beginning of horizontal front porch
localparam VBP     = 31;   // end of vertical back porch
localparam VFP     = 511;  // beginning of vertical front porch

parameter HBP_REAL = 144 + ((640 - 240) >> 1);
parameter HFP_REAL = 784 - ((640 - 240) >> 1);

reg [9:0] h_count = 0;  // horizontal counter
reg [9:0] v_count = 0;  // vertical counter

always @(posedge i_pixclk or posedge i_rst) begin
    // If its a reset then we should zero the counters
    if (i_rst) begin
        h_count <= 0;
        v_count <= 0;
    end
    else begin
        // Count until the end of a horizontal line
        if (h_count < HPIXELS - 1) begin
            h_count <= h_count + 1;
        end
        else begin
            // Go to the next vertical line
            h_count <= 0;
            if (v_count < VLINES - 1) begin
                v_count <= v_count + 1;
            end
            else begin
                v_count <= 0;
                // TODO: This means we are on the next frame, idk if that
                // matters that much or not
            end
        end
    end
end

// Generate sync pulses
assign o_hsync = (h_count < HPULSE) ? 0 : 1;
assign o_vsync = (v_count < VPULSE) ? 0 : 1;

assign on_screen = (v_count >= VBP && v_count < VFP) &&
                    (h_count >= HBP_REAL && h_count < HFP_REAL);

integer x = 0;

always @ (posedge i_pixclk) begin
    if (on_screen) begin
        {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11101100;
    end
    else begin
        o_red = 0;
        o_green = 0;
        o_blue = 0;
    end
end

endmodule