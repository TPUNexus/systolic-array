// Top-level design file for the icebreaker FPGA board // NOT MY WORK. Credit to Dustin Richmond, UCSC.  module top (input [0:0] clk_12mhz_i
module top
  (input [0:0] clk_12mhz_i
  ,input [0:0] reset_n_async_unsafe_i
   // n: Negative Polarity (0 when pressed, 1 otherwise)
   // async: Not synchronized to clock
   // unsafe: Not De-Bounced
  ,input [3:1] button_async_unsafe_i
   // async: Not synchronized to clock
   // unsafe: Not De-Bounced
  ,output [7:0] ssd_o
  ,output [5:1] led_o);

  localparam width_p = 8;
  localparam array_width_p = 2;
  localparam array_height_p = 2;
  localparam num_macs_p = array_width_p * array_height_p;

   // These two D Flip Flops form what is known as a Synchronizer. We
   // will learn about these in Week 5, but you can see more here:
   // https://inst.eecs.berkeley.edu/~cs150/sp12/agenda/lec/lec16-synch.pdf
   wire reset_n_sync_r;
   wire reset_sync_r;
   wire reset_r; // Use this as your reset_signal
   wire en_w, data_w;

   dff
     #()
   sync_a
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(reset_n_async_unsafe_i)
     ,.q_o(reset_n_sync_r));

   inv
     #()
   inv
     (.a_i(reset_n_sync_r)
     ,.b_o(reset_sync_r));

   dff
     #()
   sync_b
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(reset_sync_r)
     ,.q_o(reset_r));
   
   edge_detector
   #(.rising_edge_p(1'b1))
   btn_2_edge_detector_inst
   (.clk_i(clk_12mhz_i)
   ,.d_i(button_async_unsafe_i[2])
   ,.q_o(en_w)
   );

   dff
     #()
   sync_btn_1
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(button_async_unsafe_i[1])
     ,.q_o(data_w));

wire [0:0] sipo_valid_w;
wire [width_p-1:0] sipo_data_w;
// Trickle in SIPO accepts one bit at a time.
sipo
#(.width_p(1)
,.depth_p(width_p))
sipo_inst
(.clk_i(clk_12mhz_i)
,.reset_i(reset_r)
,.valid_i(en_w)
,.data_i(data_w)
,.valid_o(sipo_valid_w)
,.data_o(sipo_data_w)
);

// Edge detect sipo_valid_w so only one value gets read from memory.
wire [0:0] sipo_edge_a_w, sipo_edge_b_w, single_sipo_valid_w;
   dff
     #()
   single_valid_a_dff_inst
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(sipo_valid_w)
     ,.q_o(sipo_edge_a_w));

   dff
     #()
   single_valid_b_dff_inst
     (.clk_i(clk_12mhz_i)
     ,.reset_i(1'b0)
     ,.d_i(sipo_edge_a_w)
     ,.q_o(sipo_edge_b_w));

// Since I only have two working buttons, just count if
// array_width_p + array_height_p numbers have been entered then
// automatically display the matrix values.
// wire [$clog2(array_width_p + array_height_p + 1)-1:0] entry_count_w;
wire [3-1:0] entry_count_w;
wire [0:0] entry_count_max_w;
assign entry_count_max_w = (entry_count_w == (array_width_p + array_height_p));

counter
// #(.width_p($clog2(array_width_p + array_height_p + 1)))
#(.width_p(3))
entry_counter_inst
(.clk_i(clk_12mhz_i)
,.en_i(1'b1)
,.reset_i(reset_r || entry_count_max_w)
,.count_o(entry_count_w)
);

assign single_sipo_valid_w = sipo_edge_a_w & ~sipo_edge_b_w;
wire [0:0] sys_ready_w, sys_valid_w, sys_yumi_w;
wire [width_p-1:0] sys_data_w;
/*

systolic_array
#(.width_p(width_p)
,.array_width_p(array_width_p)
,.array_height_p(array_height_p))
systolic_array_inst
(.clk_i(clk_12mhz_i)
,.reset_i(reset_r)
,.en_i(1'b1)
,.ready_o(sys_ready_w)
,.valid_i(single_sipo_valid_w)
,.data_i(sipo_data_w)
,.valid_o(sys_valid_w)
,.yumi_i(1'b1)
,.data_o(sys_data_w)
);

// Matrix output to FIFO
wire [0:0] fifo_ready_w, fifo_yumi_w, fifo_valid_w;
wire [width_p-1:0] matrix_data_w;

fifo
#(.width_p(width_p)
,.depth_p(num_macs_p))
fifo_inst
(.clk_i(clk_12mhz_i)
,.reset_i(reset_r)
,.ready_o(fifo_ready_w)
,.valid_i(sys_valid_w)
,.data_i(sys_data_w)
,.yumi_i(fifo_yumi_w)
,.valid_o()
,.data_o(matrix_data_w)
);

wire five_sec_w, five_sec_sync_w;
clock_divider
#(.width_p(26))
clock_divider
(.clk_i(clk_12mhz_i)
,.en_i(1'b1)
,.reset_i(reset_r)
,.slow_clk_o(five_sec_w)
);

// Edge detect five_sec_w to consume one piece of matrix data every five
// seconds.
dff
 #()
fifo_sync_dff_inst
 (.clk_i(clk_12mhz_i)
 ,.reset_i(1'b0)
 ,.d_i(five_sec_w)
 ,.q_o(five_sec_sync_w));

dff
 #()
fifo_edge_dff_inst
 (.clk_i(clk_12mhz_i)
 ,.reset_i(1'b0)
 ,.d_i(five_sec_sync_w)
 ,.q_o(fifo_yumi_w));

wire clk_91hz_w;
clock_divider
#(.width_p(17))
clock_divider
(.clk_i(clk_12mhz_i)
,.en_i(1'b1)
,.reset_i(reset_r)
,.slow_clk_o(clk_91hz_w)
);

two_ssd
#()
two_ssd_inst
(.clk_50hz_i(clk_91hz_w)
,.right_digit_i(matrix_data_w[3:0])
,.left_digit_i(matrix_data_w[7:4])
,.ssd_o(ssd_o)
);
*/

// assign ssd_o = ~(sipo_data_w & {width_p{sipo_valid_w}});
assign ssd_o = ~sipo_data_w; 
// assign ssd_o = ~sys_data_w; 

// Disable leds for now.
// assign led_o = 5'b00000;
assign led_o[1] = sipo_valid_w;
assign led_o[2] = sys_ready_w;
assign led_o[3] = sys_valid_w;
assign led_o[4] = single_sipo_valid_w;

endmodule
