module vga(
    input wire i_pixclk,        // pixel clock (25 MHz)
    input wire i_rst,           // reset/clear
	input wire i_btnpress,		// indicated button press
    input wire i_movclk,

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
                    (h_count >= HBP && h_count < HFP);

assign center = (464 - 80 < h_count && h_count < 464 + 80);

// These positions refer to the vertical positions of the containers.
// They denote the center of the container and each container is 80 pixels.
integer c5 = 40;
integer c4 = 40 + 80;
integer c3 = 40 + 80 + 80;
integer c2 = 40 + 80 + 80 + 80;
integer c1 = 40 + 80 + 80 + 80 + 80;
integer c0 = 40 + 80 + 80 + 80 + 80 + 80; 

// Increment the positions of the containers on the move clock.
always @(posedge i_movclk) begin
    c5 = c5 + 1;
    c4 = c4 + 1;
    c3 = c3 + 1;
    c2 = c2 + 1;
    c1 = c1 + 1;
    c0 = c0 + 1;
end

always @ (posedge i_pixclk) begin
    if (on_screen) begin

        // background color
        {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11101100;

        if (center && c5 - 40 < v_count && v_count < c5 + 40) begin
           {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b00000000; 
        end

        // if (464 - 50 < h_count && h_count < 464 + 50 &&
        //     271 - 50 < v_count && v_count < 271 + 50) begin
        //     {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b00000000;
        // end
        // else begin
        //     {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11101100;
        // end
		
		// if (HBP + 50 < h_count && h_count < HFP - 50 && VFP - 50 < v_count) begin
		// 	{o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b00000000;
		// end
		
		// if (i_btnpress && 
		// 	464 - 30 < h_count && h_count < 464 + 30 &&
		// 	271 - 30 < v_count && v_count < 271 + 30) begin
		// 	{o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11111111;
		// end
    end
    else begin
        o_red = 0;
        o_green = 0;
        o_blue = 0;
    end
end

endmodule