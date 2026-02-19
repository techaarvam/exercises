module tb;
    logic clk;
    logic nrst;
    logic [31:0] overwrite_pc;
    logic overwrite_valid;
    logic [31:0] pc;
    
    program_counter pc_inst ( .clk (clk),
                         .nrst (nrst),
                         .overwrite_pc (overwrite_pc),
                         .overwrite_valid (overwrite_valid),
                         .pc (pc) ); 

    initial begin
        clk = 0;
        nrst= 0;
        #10 nrst = 1; //deassert the reset 
        #6000 $finish();
    end
    always begin
        #5 clk <= ~clk;
        $display ("time:%x, pc = %x, ", $time(), pc);
        #100 overwrite_pc <=6000;
        overwrite_valid <= 1;
    end

endmodule
