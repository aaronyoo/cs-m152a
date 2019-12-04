module vga(
    input wire i_pixclk,        // pixel clock (25 MHz)
    input wire i_rst,           // reset/clear
	input wire i_btn_up,
	input wire i_btn_right,
	input wire i_btn_down,
	input wire i_btn_left,
	input wire i_btn_rst,
    input wire i_movclk,
    output wire o_hsync,        // horizontal sync
    output wire o_vsync,        // vertical sync
    output reg [2:0] o_red,     // red vga output
    output reg [2:0] o_green,   // green vga output
    output reg [1:0] o_blue,    // blue vga output

    output wire integer o_score,
	output wire integer o_diff
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

reg [2:0] mem [200:0];

integer z;
integer k;
initial begin
	for (z = 0; z < 100; z = z + 1) begin
		mem[z][2:0] = z % 5;
	end

	$readmemb("partyintheusa.code", mem);
end

integer mem_idx = 1;

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
reg [7:0] WHITE = 8'b11111111;
reg [7:0] RED = 8'b11100000;
reg [7:0] GREEN = 8'b00011100;
reg [7:0] BLUE = 8'b00000011;

// These positions refer to the vertical positions of the containers.
// They denote the center of the container and each container is 80 pixels.
integer c5 = VBP + 40;
integer c4 = VBP + 40 + 80;
integer c3 = VBP + 40 + 80 + 80;
integer c2 = VBP + 40 + 80 + 80 + 80;
integer c1 = VBP + 40 + 80 + 80 + 80 + 80;
integer c0 = VBP + 40 + 80 + 80 + 80 + 80 + 80;

// Define the 'types' of the arrows (which symbol they should contain)
integer c5_type = 4;
integer c4_type = 4;
integer c3_type = 4;
integer c2_type = 4;
integer c1_type = 4;
integer c0_type = 4;

// Define the drawing regions for each symbol and each type
assign c5_block = (center && c5 - 40 < v_count && v_count < c5 + 40);
assign c4_block = (center && c4 - 40 < v_count && v_count < c4 + 40);
assign c3_block = (center && c3 - 40 < v_count && v_count < c3 + 40);
assign c2_block = (center && c2 - 40 < v_count && v_count < c2 + 40);
assign c1_block = (center && c1 - 40 < v_count && v_count < c1 + 40);
assign c0_block = (center && c0 - 40 < v_count && v_count < c0 + 40);


integer perfect_score = 0;
integer real_score = 0;
assign score = real_score;
reg reset_me = 0;

// Increment the positions of the containers on the move clock.
always @(posedge i_movclk) begin
	// If the game has ended then we need to reset the containers
	// to their original position.
	if (!game_alive) begin
		c5 = VBP + 40;
		c4 = VBP + 40 + 80;
		c3 = VBP + 40 + 80 + 80;
		c2 = VBP + 40 + 80 + 80 + 80;
		c1 = VBP + 40 + 80 + 80 + 80 + 80;
		c0 = VBP + 40 + 80 + 80 + 80 + 80 + 80;

		if (i_btn_rst) begin
			mem_idx = 1;
			reset_me = 1;

			// reset all the ctypes to blank
			c5_type = 4;
			c4_type = 4;
			c3_type = 4;
			c2_type = 4;
			c1_type = 4;
			c0_type = 4;
		end
	end
	else begin
		reset_me = 0;
		if (c5 == VFP - 40) begin
			c5_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

		if (c4 == VFP - 40) begin
			c4_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

		if (c3 == VFP - 40) begin
			c3_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

		if (c2 == VFP - 40) begin
			c2_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

		if (c1 == VFP - 40) begin
			c1_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

		if (c0 == VFP - 40) begin
			c0_type = mem[mem_idx];
			mem_idx = mem_idx + 1;
		end

	    c5 = (c5 < VFP - 40) ? c5 + 1 : VBP + 40;
		c4 = (c4 < VFP - 40) ? c4 + 1 : VBP + 40;
		c3 = (c3 < VFP - 40) ? c3 + 1 : VBP + 40;
		c2 = (c2 < VFP - 40) ? c2 + 1 : VBP + 40;
		c1 = (c1 < VFP - 40) ? c1 + 1 : VBP + 40;
		c0 = (c0 < VFP - 40) ? c0 + 1 : VBP + 40;
	end
end

/***************************/
/* Drawing the Push Ranges */
/***************************/

reg push_range_c5 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c5) begin
		push_range_c5 = 1;
	end
	else begin
		push_range_c5 = 0;
	end
end

reg push_range_c4 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c4) begin
		push_range_c4 = 1;
	end
	else begin
		push_range_c4 = 0;
	end
end

reg push_range_c3 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c3) begin
		push_range_c3 = 1;
	end
	else begin
		push_range_c3 = 0;
	end
end

reg push_range_c2 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c2) begin
		push_range_c2 = 1;
	end
	else begin
		push_range_c2 = 0;
	end
end

reg push_range_c1 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c1) begin
		push_range_c1 = 1;
	end
	else begin
		push_range_c1 = 0;
	end
end

reg push_range_c0 = 0;
always @(*) begin
	if (VFP - 40 - 25 < c0) begin
		push_range_c0 = 1;
	end
	else begin
		push_range_c0 = 0;
	end
end




reg game_alive = 1;
always @ (posedge i_pixclk) begin
    if (on_screen && game_alive) begin

        // background color
        {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11101100;

        // draw target square
        if (
            (((464 - 50 < h_count && h_count < 464 - 40) || (464 + 40 < h_count && h_count < 464 + 50)) ||
            ((VFP - 120 < v_count && v_count < VFP - 110) || (VFP - 30 < v_count && v_count < VFP - 20)))
            && (464 - 50 < h_count && 464 + 50 > h_count)
            && (VFP - 120 < v_count && v_count < VFP - 20)
        ) begin
            {o_red[2:0], o_green[2:0], o_blue[1:0]} = 8'b11111111;
        end

		// draw block c5
        if (c5_block) begin
			case (c5_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end

         // draw block c4
        if (c4_block) begin
			case (c4_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end

		// draw block c3
        if (c3_block) begin
			case (c3_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end

		// draw block c2
        if (c2_block) begin
			case (c2_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end

		// draw block c1
        if (c1_block) begin
			case (c1_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end

		// draw block c0
        if (c0_block) begin
			case (c0_type)
				0: {o_red[2:0], o_green[2:0], o_blue[1:0]} = RED;
				1: {o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
				2: {o_red[2:0], o_green[2:0], o_blue[1:0]} = GREEN;
				3: {o_red[2:0], o_green[2:0], o_blue[1:0]} = BLUE;
			endcase
        end


		// draw the push_range indicator
        if (push_range_c5 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c5_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c4 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c4_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c3 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c3_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c2 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c2_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c2 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c2_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c1 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c1_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
        end

		if (push_range_c0 &&
           HBP < h_count && h_count < HBP + 25 &&
           VFP - 25 < v_count && v_count < VFP)
        begin
			case (c0_type)
				0:
				begin
					if (i_btn_up) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				1:
				begin
					if (i_btn_right) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				2:
				begin
					if (i_btn_down) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end

				3:
				begin
					if (i_btn_left) begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = WHITE;
						game_alive = 1;
					end
					else begin
						{o_red[2:0], o_green[2:0], o_blue[1:0]} = BLACK;
						game_alive = 0;
					end
				end
				default: game_alive = 1;
			endcase
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
		if (reset_me == 1) begin
			game_alive = 1;
		end
    end
end



endmodule
