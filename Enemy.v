`timescale 1ns / 1ps
module Enemy(
	input clk,
	input [9:0] offset_x,
	input [9:0] offset_y,
	input [9:0] hcount,
	input [9:0] vcount,
	output[9:0] pos_x,
	output[9:0] pos_y,
	output [2:0]data
    );
	reg [9:0] tem_pos_y;
	assign pos_x = offset_x +80;
	assign pos_y = tem_pos_y;
	reg [13:0]address; 
	rom_Car enemy (address, data);
	
	always @(posedge clk)
	begin
		if(vcount <480)
		begin
			if(hcount < 640)
			begin
				if()
				address = address +1;
			end
		end
	end

endmodule
