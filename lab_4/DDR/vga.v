module vga(
    input wire i_pixclk,        // pixel clock (25 MHz)
    input wire i_rst,           // reset/clear
	input wire i_btnpress,		// indicated button press
    input wire i_movclk,

    output wire o_hsync,        // horizontal sync
    output wire o_vsync,        // vertical sync
    output reg [2:0] o_red,     // red vga output
    output reg [2:0] o_green,   // green vga output
    output reg [1:0] o_blue,    // blue vga output

    // TODO: need to add the games state to this interface
    output reg o_point          // high when player scores a point
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

assign center = (464 - 40 < h_count && h_count < 464 + 40);
reg [7:0] BLACK = 8'b00000000;

// These positions refer to the vertical positions of the containers.
// They denote the center of the container and each container is 80 pixels.
integer c5 = VBP + 40;
integer c4 = VBP + 40 + 80;
integer c3 = VBP + 40 + 80 + 80;
integer c2 = VBP + 40 + 80 + 80 + 80;
integer c1 = VBP + 40 + 80 + 80 + 80 + 80;
integer c0 = VBP + 40 + 80 + 80 + 80 + 80 + 80;

// Define the 'types' of the arrows (which symbol they should contain)
integer c5_type = 0;
integer c4_type = 5;
integer c3_type = 5;
integer c2_type = 5;
integer c1_type = 5;
integer c0_type = 5;

// Increment the positions of the containers on the move clock.
always @(posedge i_movclk) begin
    c5 = (c5 < VFP - 40) ? c5 + 1 : VBP + 40;
	c4 = (c4 < VFP - 40) ? c4 + 1 : VBP + 40;
	c3 = (c3 < VFP - 40) ? c3 + 1 : VBP + 40;
	c2 = (c2 < VFP - 40) ? c2 + 1 : VBP + 40;
	c1 = (c1 < VFP - 40) ? c1 + 1 : VBP + 40;
	c0 = (c0 < VFP - 40) ? c0 + 1 : VBP + 40;
end

reg push_range = 0;
always @(*) begin
	if (VFP - 40 - 20 < c5) begin
		push_range = 1;
	end
	else begin
		push_range = 0;
	end
end

always @ (posedge i_pixclk) begin
    if (on_screen) begin

        // background color
        {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11101100;

        // draw target square
        if (
            ((464 - 50 < h_count && h_count < 464 - 40) || (464 + 40 < h_count && h_count < 464 + 50)) &&
            ((VFP - 120 < v_count && v_count < VFP - 110) || (VFP - 30 < v_count && v_count < VFP - 20))
        ) begin
            {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11111111;
        end

		// draw block c5
        if (center && c5 - 40 < v_count && v_count < c5 + 40) begin
            if (c5_type == 0) begin
                {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
            end
            else begin
                {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11111111;
            end
        end

        // // draw block c4
        // if (center && c4 - 40 < v_count && v_count < c4 + 40) begin
        //    {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
        // end
		
		// draw block c3
		if (center && c3 - 40 < v_count && v_count < c3 + 40) begin
           {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
        end

        // draw block c2
        if (center && c2 - 40 < v_count && v_count < c2 + 40) begin
           {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
        end
		
		// draw block c1
		if (center && c1 - 40 < v_count && v_count < c1 + 40) begin
           {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
        end
		
        // draw block c0
        if (center && c0 - 40 < v_count && v_count < c0 + 40) begin
           {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK; 
        end

		// draw the push_range indicator
        if (push_range && 
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
            if (i_btnpress) begin
                {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11111111;
            end
            else begin
                {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
            end
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