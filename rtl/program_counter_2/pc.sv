module program_counter(input logic clk, 
                       input logic nrst,
                       input logic [31:0] overwrite_pc, 
                       input logic overwrite_valid ,
                       output logic [31:0] pc
                        ) ;

logic [31:0] counter;
always @(posedge clk)
begin
    $display ("clk: %x, nrst: %x, counter: %x", clk, nrst, counter);
    if (!nrst) begin
        counter <= 0; 
    end else
    begin
        if (!overwrite_valid) begin
            counter <= counter + 4;
        end else
            counter <= overwrite_pc;
    end
end

endmodule
