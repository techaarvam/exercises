// --------------------------------------------------
// Copyright
// --------------------------------------------------
//
// Tech Aarvam
// Copyright (c) 2026 Tech Aarvam.
// Author: Ram (Ramasubramanian B)

`define EX_PING '{ \
    1,0,1,0, 1,0,1,0, \
    1,0,1,0, 1,0,1,0 \
}

`define EX_PONG '{ \
    0,1,0,1, 0,1,0,0, \
    0,1,0,1, 0,1,0,0 \
}

`define EX_ASSERTIONS \
    property pong_follows_ping; \
        @(posedge clk) disable iff (!rst) \
        ping |=> pong; \
    endproperty \
    property ping_happened; \
        @(posedge clk) disable iff (!rst) \
        ping; \
    endproperty \
    assert property(pong_follows_ping); \
    cover property(ping_happened);

`include "ebmc_example_base.svh"
