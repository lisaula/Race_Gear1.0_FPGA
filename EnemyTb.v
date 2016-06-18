`timescale 1ns / 1ps

module EnemyTb(
    );
	reg clk;
	reg logic_clk;
	reg reset;
	reg enable;
	reg [9:0] offset_x;
	reg [9:0] offset_y;
	reg [9:0] hcount;
	reg [9:0] vcount;
	reg collision;
	wire [9:0] pos_x;
	wire [9:0] pos_y;
	wire [2:0]data;
	Enemy ene(clk,logic_clk,reset,enable,offset_x,offset_y,hcount,vcount,collision,pos_x,pos_y,data);
	
	initial
	begin
		clk=0;
		logic_clk=0;
		reset=0;
		enable=0;
		offset_x = 129;
		offset_y=610;
		hcount =0;
		vcount=0;
		collision=0;
		#10
		reset=1;
		enable=0;
		#10
		reset=0;
		enable=1;
	end
	
	always
	begin
	#10
		clk = !clk;
		logic_clk= !logic_clk;
	#2
		hcount=hcount +1;
	#5
		vcount=vcount +1;
	end
	
	
endmodule
