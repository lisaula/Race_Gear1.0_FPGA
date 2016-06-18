`timescale 1ns / 1ps

module testbench(
    );
	reg clk50mhz;
	reg reset;
	reg left;
	reg right;
	//reg [2:0]rgb_in;
   //input green_in,
   //input blue_in,
	//input reset,
	wire red_out;
   wire green_out;
   wire blue_out;
	wire hsync;
	wire vsync;
	Main m(clk50mhz,reset,left,right,red_out,green_out,blue_out,hsync,vsync);
	//VGA_LOGIC vga(clk50mhz,rgb_in, red_out,green_out,blue_out,hsync,vsync,hcount,vcount);
	//reg [13:0] address;
	//wire [2:0]data;
	//rom_Bars rom (address, data);
	initial 
	begin
		clk50mhz=0;
		//address =0;
		reset =0;
		left =0;
		right =0;
		#20
		reset =1;
		left =0;
		right =0;
		#50
		reset =0;
		left =1;
		right =0;
		#50
		reset =0;
		left =0;
		right =1;
		#50
		reset =0;
		left =0;
		right =1;
		#50
		reset =0;
		left =0;
		right =1;
		#50
		reset =0;
		left =1;
		right =0;
		
		//rgb_in[0]=1;
		//rgb_in[1]=1;
		//rgb_in[2]=1;
	end	
	always 
	begin
		#10
		clk50mhz = !clk50mhz;
	end

endmodule
