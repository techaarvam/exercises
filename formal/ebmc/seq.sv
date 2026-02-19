// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

`define EX_PING '{ \
    1,0,0,0, 1,0,0,0, \
    1,0,0,0, 1,0,0,0 \
}

`define EX_PONG '{ \
    0,0,0,1, 0,0,0,1, \
    0,0,0,1, 0,0,0,1 \
}

`define EX_HAS_NET
`define EX_NET '{ \
    0,0,0,1, 0,0,0,0, \
    0,0,0,1, 0,0,0,1 \
}

`define EX_ASSERTIONS \
    sequence ping_dot_dot_pong; \
        ping ##3 pong; \
    endsequence \
    property net1_follows_ping_pong; \
        @(posedge clk) disable iff (!rst) \
        ping_dot_dot_pong |-> net1; \
    endproperty \
    assert property(net1_follows_ping_pong);

`include "ebmc_example_base.svh"
