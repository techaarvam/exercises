// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

// Example stimulus arrays (16 entries each)
`define EX_PING '{ \
    0,0,0,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,0,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

// Uncomment these two lines if your property uses net1
// `define EX_HAS_NET
// `define EX_NET '{ \
//     0,0,0,0, 0,0,0,0, \
//     0,0,0,0, 0,0,0,0 \
// }

`define EX_ASSERTIONS \
    property user_property; \
        @(posedge clk) disable iff (!rst) \
        ping |=> pong; \
    endproperty \
    assert property(user_property);

`include "ebmc_example_base.svh"
