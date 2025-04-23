module sort_tb #(parameter NUM_VALS = 8, WIDTH = 4);
    reg [NUM_VALS*WIDTH-1:0] in;
    wire [NUM_VALS*WIDTH-1:0] out;
    integer i;

    sort #(.NUM_VALS(8), .WIDTH(4)) dut(.A(in), .B(out));

    localparam seed = 142857;
    initial begin
        $dumpfile("waveform.vcd"); // Set the name of the dump file.
        $dumpvars;
        // Save all signals to the dump file.
        in = $urandom(seed); // for Verilog $urandom always returns 32-bit
        #(NUM_VALS*NUM_VALS); // Delay time depends on the delay of sort()
        $write("In: ");
        for (i=0; i<NUM_VALS; i=i+1) $write("%0d ", in[32-i*WIDTH-1 -: 4]);
        $write("\nOut: ");
        for (i=0; i<NUM_VALS; i=i+1) $write("%0d ", out[32-i*WIDTH-1 -: 4]);
        $write("\n");
        $finish;
    end
endmodule
