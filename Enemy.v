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
	reg [13:0]address; 
	rom_Car enemy (address, data_pix);
		
	
	always @(posedge logic_clk)
	begin
		if(!collision)
		begin
			if(enable) begin
				counter = 0;
			end
		
			if(offset_y+counter < 601)
			begin
				pos_y =offset_y+counter;
				counter = counter +1;
			end
			else begin
				pos_y=620;
			end
		end
		if(reset)
		begin
			counter=0;
			pos_y=610;
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
