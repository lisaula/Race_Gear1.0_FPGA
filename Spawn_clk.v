`timescale 1ns / 1ps
module Spawn_clk(
	 input clk,
	 input c_e,
	 output clk1hz
    );

	 reg [21:0] counter;
	 reg clk1hz_buff;
	 parameter 
		counter_limit = 25'h2625a0;
	 
	 assign clk1hz = clk1hz_buff;
	 
	 always @(posedge clk)
	 begin 
		if(c_e)
		begin
			counter = counter +1;
		end
		if(counter == (counter_limit))
		begin
			clk1hz_buff = !clk1hz_buff;
			counter = 22'h0;
		end
	end
	
	initial 
	begin
		clk1hz_buff=0;
		counter =0;
	end
endmodule
