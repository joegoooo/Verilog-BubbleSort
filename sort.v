module sort#(parameter NUM_VALS = 8, WIDTH = 4)
    (input [NUM_VALS * WIDTH - 1 : 0] A, output [NUM_VALS * WIDTH - 1 : 0] B);
    integer i;
    integer j;
    reg [WIDTH - 1 : 0] crkrt [NUM_VALS];
    reg [WIDTH - 1 : 0] tmp;
    
    always @(*) begin
        for(i = 0; i < NUM_VALS; i += 1) begin
            crkrt[NUM_VALS - 1- i] = A[((i + 1) * WIDTH - 1) -: WIDTH];
        end

        for(i = 0; i < NUM_VALS; i += 1) begin
            #1;
            for (j = 0; j < NUM_VALS - i - 1; j = j + 1) begin
                if (crkrt[j] < crkrt[j + 1]) begin : CnS
                    tmp = crkrt[j];
                    crkrt[j] = crkrt[j + 1];
                    crkrt[j + 1] = tmp;
                end
            end
        end
    end

    generate
        genvar k;
        for(k = 0; k < NUM_VALS; k += 1) begin
            assign B[((k + 1) * WIDTH - 1) -: WIDTH] = crkrt[NUM_VALS - 1 - k];
        end
    endgenerate

endmodule
