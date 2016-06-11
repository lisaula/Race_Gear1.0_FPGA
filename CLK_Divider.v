`timescale 1ns / 1ps

module CLK_Divider(
    input clk,
	 output clk1hz
	 );
	 
	 reg [30:0] counter;
	 reg clk1hz_buff;
	 parameter 
		counter_limit = 31'h17d7840;
	 
	 assign clk1hz = clk1hz_buff;
	 
	 always @(posedge clk)
	 begin 
	 
		counter = counter +1;
		
		if(counter == (counter_limit))
		begin
			clk1hz_buff = !clk1hz_buff;
			counter = 31'h0;
		end
	end
endmodule
