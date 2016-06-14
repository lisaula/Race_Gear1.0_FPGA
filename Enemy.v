`timescale 1ns / 1ps
module Enemy(
	input clk,
	input reset,
	input [9:0] offset_x,
	input [9:0] offset_y,
	input [9:0] hcount,
	input [9:0] vcount,
	output [9:0] pos_x,
	output reg[9:0] pos_y,
	output reg [2:0]data
    );
	assign pos_x = offset_x;
	reg [9:0]counter;
	wire [2:0] data_pix;
	reg [13:0]address; 
	rom_Car enemy (address, data_pix);
	
	//setting clock of 1s 
	wire logic_clk;
	CLK_Divider #(.counter_limit(25'h2625a0))clk2(.clk(clk),.clk1hz(logic_clk));
	
	always @(posedge logic_clk)
	begin
		if(offset_y +counter < 601)
		begin
			pos_y =offset_y+counter;
			counter = counter +1;
		end
		if(reset)
		begin
			counter=0;
			pos_y=0;
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
