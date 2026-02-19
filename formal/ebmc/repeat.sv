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
    0,1,1,0, 0,0,0,0, \
    0,1,1,1, 1,1,1,0 \
}

// Uncomment these two lines if your property uses net1
// `define EX_HAS_NET
// `define EX_NET '{ \
//     0,0,0,0, 0,0,0,0, \
//     0,0,0,0, 0,0,0,0 \
// }

`define EX_ASSERTIONS \
    property repeat_fmt1; \
        @(posedge clk) disable iff (!rst) \
        ping |=> pong[*2]; \
    endproperty \
    assert property(repeat_fmt1); \
\
    property repeat_fmt2; \
        @(posedge clk) disable iff (!rst) \
        ping |=> pong[+]; \
    endproperty \
    assert property(repeat_fmt2);\
\
    property repeat_fmt3; \
        @(posedge clk) disable iff (!rst) \
        ping |=> pong[*1:3]; \
    endproperty \
    assert property(repeat_fmt3);


`include "ebmc_example_base.svh"
