`timescale 1ns / 1ps

module ALU(
	input clk,
	input reset,
	input [9:0]enemy_pos_x,
	input [9:0]enemy_pos_y,
	input [9:0]enemy_pos_x2,
	input [9:0]enemy_pos_y2,
	input [9:0]car_pos_x,
	input [9:0]car_pos_y,
	output reg collision
    );
	 
	 always @(posedge clk)
	 begin
		if (!collision)
		begin
			if(car_pos_x >= enemy_pos_x && car_pos_x <= enemy_pos_x+80 &&//validate collision
				car_pos_y >= enemy_pos_y && car_pos_y <= enemy_pos_y+121)
			begin
				collision = 1;
			end
			else if(enemy_pos_x>=car_pos_x && enemy_pos_x <= car_pos_x+80 &&
					enemy_pos_y >=car_pos_y && enemy_pos_y <=car_pos_y +121)
			begin
				collision = 1;
			end
			else if(car_pos_x >= enemy_pos_x2 && car_pos_x <= enemy_pos_x2+80 &&//validate collision
				car_pos_y >= enemy_pos_y2 && car_pos_y <= enemy_pos_y2+121)
			begin
				collision = 1;
			end
			else if(enemy_pos_x2>=car_pos_x && enemy_pos_x2 <= car_pos_x+80 &&
					enemy_pos_y2 >=car_pos_y && enemy_pos_y2 <=car_pos_y +121)
			begin
				collision = 1;
			end
			else
			begin
				collision = 0;
			end
		end
		
		if(reset) begin
			collision = 0;
		end
	 end
endmodule
