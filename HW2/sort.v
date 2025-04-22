module sort#(parameter NUM_VALS = 8, WIDTH = 4)
    (input [NUM_VALS*WIDTH-1:0] A, output [NUM_VALS*WIDTH-1:0] B);
    integer i;
    integer j;
    reg [WIDTH-1:0] tmp [NUM_VALS];
    
    always@ * begin
        // store input in a reg
        for(i = 0; i < NUM_VALS; i+=1) begin
            tmp[NUM_VALS-1-i] = A[((i+1)*WIDTH-1) -: WIDTH];
        end
        
        // sort the reg
        for(i = 0; i < NUM_VALS; i+=1) begin
            #1; // delay for stimulation
            for(j = 1; j < NUM_VALS-i; j+=1) begin
                {tmp[j-1], tmp[j]} = tmp[j-1] > tmp[j] ? {tmp[j-1], tmp[j]} : {tmp[j], tmp[j-1]};
            end
        end
        
    end

    generate
        genvar k;
        for(k = 0; k < NUM_VALS; k+=1) begin
            assign B[((k+1)*WIDTH-1) -: WIDTH] = tmp[NUM_VALS-1-k];
        end    
    endgenerate

endmodule
