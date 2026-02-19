// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

`ifndef EBMC_EXAMPLE_BASE_SVH
`define EBMC_EXAMPLE_BASE_SVH

module top;
    logic clk, rst;
    logic boot_done;

    rtl dut (.clk(clk), .rst(rst));

    initial begin
        boot_done = 0;
        rst = 0;
    end

    // Release reset once; do not reassert.
    always @(posedge clk) begin
        if (!boot_done) begin
            rst <= 1;
            boot_done <= 1;
        end else begin
            rst <= 1;
        end
    end
endmodule

module rtl (clk, rst);
    input logic clk, rst;

    logic ping, pong, net1;
    logic [3:0] count;

    logic aPing[16] = `EX_PING;
    logic aPong[16] = `EX_PONG;
`ifdef EX_HAS_NET
    logic aNet[16] = `EX_NET;
`endif

    always @(posedge clk) begin
        if (!rst)
            count <= 0;
        else
            count <= count + 1;
    end

    always @(posedge clk) begin
        if (!rst) begin
            ping <= 0;
            pong <= 0;
            net1 <= 0;
        end else begin
            ping <= aPing[count];
            pong <= aPong[count];
`ifdef EX_HAS_NET
            net1 <= aNet[count];
`else
            net1 <= 0;
`endif
        end
    end

    `EX_ASSERTIONS

endmodule

`endif
