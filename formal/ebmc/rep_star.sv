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
    0,0,0,0, 0,0,0,0 \
}

`define EX_PONG '{ \
    0,0,1,0, 0,0,0,0, \
    0,0,0,0, 0,0,0,0 \
}

// Uncomment these two lines if your property uses net1
`define EX_HAS_NET
`define EX_NET '{ \
     0,0,0,0, 0,0,0,0, \
     0,0,0,0, 0,0,0,0 \
}

// This demonstrats why net[*] can be useful
// Answers the question of why would calling out 0 or more cycles be
// useful.

`define EX_ASSERTIONS \
    property rep_star; \
        @(posedge clk) disable iff (!rst) \
        ping |=> net1[*0:$] ##1 pong; \
    endproperty \
    assert property(rep_star);

`include "ebmc_example_base.svh"
