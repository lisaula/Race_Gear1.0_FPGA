`timescale 1ns / 1ps

module testbench(
    );
	reg clk50mhz;
	reg reset;
	reg left;
	reg right;
   //input green_in,
   //input blue_in,
	//input reset,
	wire red_out;
   wire green_out;
   wire blue_out;
	wire hsync;
	wire vsync;
	Main m(clk50mhz,reset,left,right,red_out,green_out,blue_out,hsync,vsync);
	initial 
	begin
		clk50mhz=0;
		reset =0;
		left = 0;
		right =0;
	end
	
	always 
	begin
		#10
		clk50mhz = !clk50mhz;
	end

endmodule
