`timescale 1ns / 1ps
module Main(
	input clk50mhz,
	input reset,
	input left,
	input right,
   //input green_in,
   //input blue_in,
	//input reset,
	output red_out,
   output green_out,
   output blue_out,
	output hsync,
	output vsync
	 );
	 
	wire vga_clk;
	//wire logic_clk;
	wire [9:0]hcount;
	wire [9:0]vcount;
	reg [13:0] address;
	reg [2:0] data;
	wire [2:0] data_pix;
	
	reg [9:0]offset_car_x;
	reg [9:0]offset_car_y;
	
// synthesis attribute CLKFX_DIVIDE of vga_clock_dcm is 4
// synthesis attribute CLKFX_MULTIPLY of vga_clock_dcm is 2
	DCM vga_clock_dcm (.CLKIN(clk50mhz),.CLKFX(vga_clk));
	
	
	//CLK_Divider #(.counter_limit(31'h77359400))clk(.clk(clk50mhz),.clk1hz(vga_clk));
	//CLK_Divider #(.counter_limit(31'h2faf080))clk2(.clk(clk50mhz),.clk1hz(logic_clk));
	//setting image CarBlue
	rom_Car rom(address,data_pix);
	VGA_LOGIC vga(vga_clk,data,red_out,green_out,blue_out,hsync,vsync,hcount, vcount);

	always @(posedge vga_clk)
	begin
		/*if(reset)begin
			//address=0;
			offset_car_x = 10'h117;
			offset_car_y = 10'h156;
		end*/
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
		if(hcount < 640 && vcount <480)
		begin
			if(vcount >= offset_car_y && vcount< offset_car_y + 121)
			begin
				if(hcount >= offset_car_x && hcount < offset_car_x + 80)
				begin
					address = address +1;
					data[0] = data_pix[2];
					data[1] = data_pix[1];
					data[2] = data_pix[0];
				end
				else begin
					data = 3'b010;
					if(hcount >= 197 && hcount < 443) begin
						data = 3'b111;
					end
				end
			end
			else begin
				address=0;
				data = 3'b010;
				if(hcount >= 197 && hcount < 443) begin
					data = 3'b111;
				end
			end
			
		end else begin
			/*offset_car_x = 279;
			offset_car_y = 357;*/
		end
	end
endmodule
