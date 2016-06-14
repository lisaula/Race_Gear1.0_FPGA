`timescale 1ns / 1ps

module ALU(
	input clk,
	input [9:0]enemy_pos_x,
	input [9:0]enemy_pos_y,
	input [9:0]car_pos_x,
	input [9:0]car_pos_y,
	output reg collision
    );
	 
	 always @(posedge clk)
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
		else
		begin
			collision = 0;
		end
	 end
endmodule
