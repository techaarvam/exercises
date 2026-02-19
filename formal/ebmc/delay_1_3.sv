// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    0,0,1,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,0,0, 1,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_ASSERTIONS \
    property delay_1_to_3; \
        @(posedge clk) disable iff (!rst) \
        $rose(ping) |-> ##[1:3] pong; \
    endproperty \
    assert property(delay_1_to_3);

`include "ebmc_example_base.svh"
