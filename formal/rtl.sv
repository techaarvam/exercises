 module my_mod(input logic clk, input logic rst);

 logic ping;
 logic pong;
 logic net;
 logic [3:0] count;

 always_ff @(posedge clk)
 begin
   if (rst) begin
       ping <=0; pong <=0; 
   end else begin
      case (count) 
             0: 
                begin
                      ping<=1; net <=0; pong <=1;
                end
             1:
                begin
                      ping<=0; net<=0; pong <=1;
                end
             2:
                begin
                      ping<=0; net<=1; pong <=0;
                end
             3:
                begin
                      ping<=0; net<=0; pong <=1;
                end
             4:
                begin
                      ping<=1; net<=0; pong <=0;
                end
             5:
                begin
                      ping<=0; net<=1; pong <=0;
                end
             6:
                begin
                      ping<=0; net<=1; pong <=0;
                end
             7:
                begin
                      ping<=0; net<=0; pong <=1;
                end

      endcase

   end
 end

 always_ff @(posedge clk)
 begin
    if (rst) begin
        count <=0;
    end else
	if (count < 1)
          count <= count + 1;
        else count <= 0;
        
        
    
 end

 property pong_ping_together();
    @(posedge clk) disable iff (rst) ping |-> pong;
 endproperty
 assert property (pong_ping_together);

 property pong_follows_ping();
    @(posedge clk) disable iff (rst) ping |=> pong;
 endproperty
 assert property (pong_follows_ping);

 property net_start_1();
    @(posedge clk) disable iff (rst) ping |-> ##1 net[*] ##1 pong;
 endproperty
 assert property(net_start_1);




endmodule

