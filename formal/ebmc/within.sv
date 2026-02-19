// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    1,1,1,1, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,1,1, 1,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_HAS_NET
`define EX_NET '{ \
    0,0,1,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_ASSERTIONS \
    sequence ping_window; \
        ping[*4]; \
    endsequence \
    sequence net_then_pong; \
        net1 ##1 pong; \
    endsequence \
    property net_then_pong_occurs_within_ping_window; \
        @(posedge clk) disable iff (!rst) \
        $rose(ping) |-> (net_then_pong within ping_window); \
    endproperty \
    assert property(net_then_pong_occurs_within_ping_window);

`include "ebmc_example_base.svh"
