// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    1,0,0,0, 0,0,0,0, \
    1,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    1,0,0,0, 0,0,0,0, \
    1,0,0,0, 0,0,0,0 \
}

// Uncomment these two lines if your property uses net1
// `define EX_HAS_NET
// `define EX_NET '{ \
//     0,0,0,0, 0,0,0,0, \
//     0,0,0,0, 0,0,0,0 \
// }

`define EX_ASSERTIONS \
    property ping_implies_pong_same_cycle; \
        @(posedge clk) disable iff (!rst) \
        ping |-> pong; \
    endproperty \
    assert property(ping_implies_pong_same_cycle);

`include "ebmc_example_base.svh"
