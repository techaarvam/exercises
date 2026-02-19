// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    0,0,1,1, 1,1,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,1,1, 1,1,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_HAS_NET
`define EX_NET '{ \
    0,0,1,1, 1,1,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_ASSERTIONS \
    sequence ping_window; \
        ping[*4]; \
    endsequence \
    property pong_and_net_hold_throughout_ping_window; \
        @(posedge clk) disable iff (!rst) \
        $rose(ping) |-> ((pong && net1) throughout ping_window); \
    endproperty \
    assert property(pong_and_net_hold_throughout_ping_window);

`include "ebmc_example_base.svh"
