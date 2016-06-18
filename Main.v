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
	
	
	CLK_Divider #(.counter_limit(31'h2625a0))clk(.clk(clk50mhz),.acelerator(0),.clk1hz(logic_clk));
	//setting image CarBlue
	rom_Car rom(address,data_pix);
	
	//position values
	parameter 
		left_pos = 9'hc5,
		center_pos = 9'h117,
		right_pos =9'h169,
		initial_pos = 10'h0,
		end_pos=10'h26c;
	
	//setting enemies
	wire enemy_clk;
	reg[24:0] acelerator_enemy;
	//clock for pull down the enemies 
	CLK_Divider #(.counter_limit(25'h186a0))clk_enemy(.clk(clk50mhz),.acelerator(acelerator_enemy),.clk1hz(enemy_clk));
	//clk for spawning the enemies
	//reg count_e;
	wire spawn_clk;
	CLK_Divider #(.counter_limit(25'h2625a0))clk_spawn(.clk(clk50mhz),.acelerator(0),.clk1hz(spawn_clk));
	//Spawn_clk spawn(clk50mhz,count_e,spawn_clk);
	//1
	wire [9:0]enemy_pos_x;
	wire [9:0]enemy_pos_y;
	wire [2:0]enemy_data;
	wire collision;
	reg enable;
	reg [9:0]active_pos;
	reg [9:0]active_posx1;
	Enemy enemy(vga_clk,enemy_clk,reset,enable, active_posx1,active_pos,hcount, vcount,collision,enemy_pos_x,enemy_pos_y,enemy_data);
	
	//2
	wire [9:0]enemy_pos_x2;
	wire [9:0]enemy_pos_y2;
	wire [2:0]enemy_data2;
	reg enable2;
	reg [9:0]active_pos2;
	reg [9:0]active_posx2;
	Enemy enemy2(vga_clk,enemy_clk,reset,enable2, active_posx2,active_pos2,hcount, vcount,collision,enemy_pos_x2,enemy_pos_y2,enemy_data2);
	//Enemy enemy2(vga_clk,enemy_clk,reset, right_pos,0,hcount, vcount,enemy_pos_x,enemy_pos_y,enemy_data);
	
	//Collision validation
	wire [9:0]e_pos_x;
	wire[9:0]e_pos_y;
	wire[9:0]car_pos_x;
	wire[9:0]car_pos_y;
	assign e_pos_x = enemy_pos_x;
	assign e_pos_y = enemy_pos_y;
	assign car_pos_x = offset_car_x;
	assign car_pos_y = offset_car_y;
	ALU alu(enemy_clk,reset,e_pos_x, e_pos_y,enemy_pos_x2,enemy_pos_y2, car_pos_x, car_pos_y,collision);
	
	//Setting Random
	wire [2:0]q;
	reg load;
	Random_tiny rand1(q[2],spawn_clk,4'b0001,load);
	Random_tiny rand2(q[1],spawn_clk,4'b0011,load);
	Random_tiny rand3(q[0],spawn_clk,4'b1001,load);
	
	//setting position Rom
	wire [9:0]x0;
	wire [9:0]y0;
	wire [9:0]x1;
	wire [9:0]y1;
	Rom_Position rom_pos(q,x0,y0,x1,y1);
	
	//setting image Bars
	rom_Bars rom2(address_bars_left,data_Bars_l);
	rom_Bars rom3(address_bars_right,data_Bars_r);
	
	//VGA instantiate
	VGA_LOGIC vga(vga_clk,data,red_out,green_out,blue_out,hsync,vsync,hcount, vcount);
	reg [5:0]counter; 
	reg ce;
	reg [1:0]estates;
	always @(posedge spawn_clk)
	begin
	
		load=0;
		if(ce)begin
			counter =counter+1;
		end
		if(counter==1)
		begin
			//enable =1;
			if(!estates[0]) begin
				estates[0]=1;
				active_pos= initial_pos;
				active_posx1 = left_pos;
			end
		end
		else if(counter == 1)
		begin
			//ce=0;
			//enable2=1;
			if(!estates[1]) begin
				estates[1]=1;
				active_pos2 = initial_pos;
				active_posx2=right_pos;
			end
		end
		else if(counter == 50) // acelerar
		begin
			counter = 0;
				
			acelerator_enemy = acelerator_enemy + 1000;
			if(acelerator_enemy >= 25'h186a0)
				acelerator_enemy = 0;
		end
		else if (reset)
		begin
			acelerator_enemy=0;
			ce =1;
			active_pos2 = end_pos;
			active_pos=end_pos;
			counter=0;
			enable =0;
			enable2=0;
			load=1;
			estates=2'b0;
		end
		enable=0;
		enable2=0;
		if(enemy_pos_y==620) begin
			active_posx1 = x0;
			active_pos = y0;
			enable = 1;
		end
		if(enemy_pos_y2==620) begin
			active_posx2 = x1;
			active_pos2 = y1;
			enable2 = 1;
		end
	end
	
	/*always @(posedge enemy_clk)
	begin
		if(enemy_pos_y==600)
		begin
			enable=1;
		end
		else if(enemy_pos_y2==600)
		begin
			enable2=1;
		end
		else
		begin
			enable2=0;
			enable =0;
		end
	end*/
	
	always @(posedge logic_clk)
	begin
		if(!collision)
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
					//count_e=1;
				end
			end else if(reset) begin
				offset_car_x = 279;
				//count_e =1;
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
				//setting car enemy bounderies
				if(vcount >= enemy_pos_y && vcount < enemy_pos_y+121)
				begin
					if(hcount >= enemy_pos_x && hcount < enemy_pos_x+80)
					begin
						data =enemy_data;
					end
				end
				if(vcount >= enemy_pos_y2 && vcount < enemy_pos_y2+121)
				begin
					if(hcount >= enemy_pos_x2 && hcount < enemy_pos_x2+80)
					begin
						data =enemy_data2;
					end
				end
			end //if hcount < 640
		end //if vcount <480
		else
		begin 
			address_bars_left=0;
			address_bars_right=0;
		end
	end //always
	
endmodule
