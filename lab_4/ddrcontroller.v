module ddrcontroller (
    input wire clk, // clk to handle seconds
    input wire rst, // if rst then clear the arrow array
    input wire state, // start state
    output pressed, // a signal to tell the score counter to increment, if unsuccessful then reset game
    output display, // outputs the game state to the VGA display
    output [2:0] [9:0] arrows, // array of 10 3-bit wires
    output reg [3:0] an, // controls the anode 

);
    wire rst_st; // reset button 

    debouncer reset_debouncer ( // handles the bebouncing of our button
        .clk(clk),
        .btn(rst),
        .state(rst_st)
    ); 

    wire onehz_clk; // one hertz clock that handles "time"
    wire comparison_output; // output from furn's comparison module

    clock clock_div (
        .clk(clk),
        .rst(rst),
        .onehz_clk(onehz_clk)
    );


    always @ (posedge onehz_clk) begin
        // if someone presses the reset button
        if (rst || comparison_output == 0) begin
            an <= 4b'0000 // reset score to 0000
            for(i = 0; i < 10; i = i + 1) begin
                arrows[i][2:0] = 100; // put everything as space/"blank"
            end
        end
        // logic for game
        reg [2:0] mem [1023:0]; // array notation, meaning that we can have 2 bit lines, up to 1024 lines

        integer z;
        // make sure mem is all blank
        for(z = 0; z < 1024; z = z + 1) begin
            mem[z][2:00] = 3b'100 // put blank into mem array
        end

        // get the input file and store into mem array
        $readmemb("partyintheusa.code", mem); 

        // make sure that there are 10 blank arrows in output array first
        integer j;
        for(j = 0; j < 10; j = j + 1) begin
            arrows[i][2:0] = 100; // put everything as space/"blank"
        end

        // loop through mem array and put it one by one into the output array
        integer k;
        // loop up until the last 10 symbols of mem array  
        for(k = 1; k <= mem[0]; k = k + 1) begin          
            integer h;
            for(h = 0; h < 10; h = h + 1) begin
                // puts the 10 symbols from mem to output array
                arrows[h][2:0] = mem[k+h][2:0] 
            end
        end
    end