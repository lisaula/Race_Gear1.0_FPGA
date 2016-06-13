`timescale 1ns / 1ps
module Main(
	input clk50mhz,
	input reset,
	input left,
	input right,
	output red_out,
   output green_out,
   output blue_out,
	output hsync,
	output vsync
	 );
	wire vga_clk;
	//assign vga_clk = clk50mhz;
	wire logic_clk;
	
	//VGA counters
	wire [9:0]hcount;
	wire [9:0]vcount;
	
	//Data variable of VGA
	reg [2:0] data;
	
	//Cars data color variables
	reg [13:0] address;
	wire [2:0] data_pix;	
	reg [9:0]offset_car_x;
	reg [9:0]offset_car_y;
	
	//Bars left data color variables
	reg [13:0] address_bars_left;
	wire [2:0] data_Bars_l;	
	//Bars right data color variables
	reg [13:0] address_bars_right;
	wire [2:0] data_Bars_r;	
	
// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm (.CLKIN(clk50mhz),.CLKFX(vga_clk));
	
	
	CLK_Divider #(.counter_limit(31'h2625a0))clk(.clk(clk50mhz),.clk1hz(logic_clk));
	//CLK_Divider #(.counter_limit(31'h2faf080))clk2(.clk(clk50mhz),.clk1hz(logic_clk));
	//setting image CarBlue
	rom_Car rom(address,data_pix);
	//setting image Bars
	rom_Bars rom2(address_bars_left,data_Bars_l);
	rom_Bars rom3(address_bars_right,data_Bars_r);
	VGA_LOGIC vga(vga_clk,data,red_out,green_out,blue_out,hsync,vsync,hcount, vcount);

	always @(posedge logic_clk)
	begin
		offset_car_y = 357;
		if(left) begin
					if(offset_car_x == 279) begin
							offset_car_x = 197;
						end
					else if(offset_car_x == 361) begin
							offset_car_x = 279;
						end
					end
		else if(right) begin
					if(offset_car_x == 279) begin
							offset_car_x = 361;
						end
					else if(offset_car_x == 197) begin
							offset_car_x = 279;
						end
					end
		else if(reset) begin
						offset_car_x = 279;
					end
	end
	
	always @(posedge vga_clk)
	begin
		if(vcount <480)
		begin
			if(hcount < 640)
			begin
				//seting green color in all the screen
				data = 3'b010;
				//setting racetrack bars bounderies
				if(hcount >=167 && hcount < 197)
				begin 
					address_bars_left = address_bars_left +1;
					data[0] = data_Bars_l[2];
					data[1] = data_Bars_l[1];
					data[2] = data_Bars_l[0];
				end
				else if(hcount >=443 && hcount < 473)begin
					address_bars_right = address_bars_right +1;
					data[0] = data_Bars_r[2];
					data[1] = data_Bars_r[1];
					data[2] = data_Bars_r[0];
				end
				//setting racetrack bounderies
				if(hcount >= 197 && hcount < 443) begin
							data = 3'b111;
				end
				//Cars bounderies
				if(vcount >= offset_car_y && vcount< offset_car_y + 121)
				begin
					if(hcount >= offset_car_x && hcount < offset_car_x + 80)
					begin
						address = address +1;
						data[0] = data_pix[2];
						data[1] = data_pix[1];
						data[2] = data_pix[0];
					end
				end
				else begin
					address=0;
				end
			end
		end
		else 
		begin 
			address_bars_left=0;
			address_bars_right=0;
		end
	end //always
	
endmodule
