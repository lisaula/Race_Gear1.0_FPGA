`timescale 1ns / 1ps
module Enemy(
	input clk,
	input logic_clk,
	input reset,
	input enable,
	input [9:0] offset_x,
	input [9:0] offset_y,
	input [9:0] hcount,
	input [9:0] vcount,
	input collision,
	output [9:0] pos_x,
	output reg[9:0] pos_y,
	output reg [2:0]data
    );
	assign pos_x = offset_x;
	reg [9:0]counter;
	wire [2:0] data_pix;
	reg [9:0]cualquiera;
	reg [13:0]address; 
	rom_Car enemy (address, data_pix);
		
//	assign cualquiera = (offset_y==610)?0:620;
	
	always @(posedge logic_clk)
	begin
		if(offset_y==610)
			cualquiera=0;
		else
			cualquiera=620;
	
		if(!collision)
		begin
			if(cualquiera+counter < 601)
			begin
				pos_y =cualquiera+counter;
				counter = counter +1;
			end
			else begin
				pos_y =pos_y;
			end
			if(enable)
			begin
				if(pos_y==600)
				begin
					pos_y=0;
					counter=0;
				end
			end
			else begin
				pos_y=620;
			end
		end
		if(reset)
		begin
			counter=0;
			pos_y=620;
		end
	end
	
	
	always @(posedge clk)
	begin
		if(vcount <480)
		begin
			if(hcount < 640)
			begin
				if(vcount >= pos_y && vcount< pos_y + 121)
				begin
					if(hcount >= pos_x && hcount < pos_x + 80)
					begin
						address = address +1;
						data[0] = data_pix[0];
						data[1] = data_pix[1];
						data[2] = data_pix[2];
					end
				end
				else begin
					address=0;
				end
			end
		end
	end
	initial 
	begin
		counter=0;
	end
endmodule
