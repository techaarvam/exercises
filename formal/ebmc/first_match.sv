// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    0,1,0,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,1,1, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

// Uncomment these two lines if your property uses net1
`define EX_HAS_NET
`define EX_NET '{ \
    0,0,0,1, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}
// Failing (net not right after first-match of pong)
//`define EX_HAS_NET
//`define EX_NET '{ \
//    0,0,0,0, 1,0,0,0, \
//    0,0,0,0, 0,0,0,0 \
//}

`define EX_ASSERTIONS \
    property net1_follows_first_ping_to_pong_match; \
        @(posedge clk) disable iff (!rst) \
        first_match(ping ##[1:5] pong) |=> net1; \
    endproperty \
    assert property(net1_follows_first_ping_to_pong_match);

`include "ebmc_example_base.svh"
