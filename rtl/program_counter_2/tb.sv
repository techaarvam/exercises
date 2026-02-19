interface rtl_intf;
    logic clk;
    logic nrst;
    logic [31:0] overwrite_pc; 
    logic overwrite_valid;
    logic [31:0] pc;
endinterface 

class driver;
    virtual rtl_intf intf_inst;
    function new( );
    endfunction

    function void set_intf(virtual rtl_intf i);
        intf_inst = i;
    endfunction

    task drive_reset();
        intf_inst.nrst <= 0;
        intf_inst.overwrite_pc <= 0;
        intf_inst.overwrite_valid <= 0;
        #20 intf_inst.nrst <= 1;
    endtask
    
    task drive_overwrite(integer new_addr);
        intf_inst.overwrite_pc <= new_addr;
        intf_inst.overwrite_valid <= 1;
        #1;
        intf_inst.overwrite_valid <=0; 
    endtask

    task drive_signals();
        fork
        begin
            forever begin
                #5 $display("%x %x", intf_inst.pc, intf_inst.clk );
            end
        end
      
        begin
            drive_reset();
            #6000;
            drive_overwrite(32'h3000);
            #3000; 
            $finish();
        end

        join

    endtask
    
endclass

module tb;
    rtl_intf i();
    driver d;
    program_counter pc_inst ( .clk(i.clk), .nrst(i.nrst),
                              .overwrite_pc(i.overwrite_pc),
                              .overwrite_valid(i.overwrite_valid),
                              .pc (i.pc) );

    initial
    begin
        i.clk = 0;
        d = new(); 
        d.set_intf(i);
        d.drive_signals();
    end
    always begin
        #5 i.clk= ~i.clk;
    end

    always @(posedge i.clk) begin
        if (i.nrst)
            $display("t=%0t pc=%h", $time, i.pc);
    end

endmodule;
