`timescale 1ns / 1ps
module Rom_Position(
    input [2:0]index,
	output reg [9:0]x0,
	output reg [9:0]y0,
	output reg [9:0]x1,
	output reg [9:0]y1
	);
	
	always @ (index)
	begin
		/*enable0 = 1;
		enable1 = 1;
		y0 = 10'h262;
		y1 = 10'h262;*/
		
		case(index)
			3'b000: begin
				x0 = 10'hc5;
				x1 = 10'h169;
				y0 = 10'h0;
				y1 = 10'h0;
			end
			3'b001: begin
				x0 = 10'hc5;
				x1 = 10'h117;
				y0 = 10'h0;
				y1 = 10'h0;
			end
			3'b010: begin
				x0 = 10'h117;
				x1 = 10'h169;
				y0 = 10'h0;
				y1 = 10'h0;
			end
			3'b011: begin
				x0 = 10'hc5;
				x1 = 10'h169;
				y1 = 10'h26c;
				y0 = 10'h0;
			end
			3'b100: begin
				x0 = 10'hc5;
				y0 = 10'h26c;
				x1 = 10'h169;
				y1 = 10'h0;
			end
			3'b101: begin
				x0 = 10'h117;
				x1 = 10'h169;
				y1 = 10'h26c;
				//enable1 = 0;
				
				//enable0 = 1;
				y0 = 10'h0;
			end
			default: begin
				x0 = 10'hc5;
				x1 = 10'h169;
				//enable0 = 1;
				//enable1 = 1;
				y0 = 10'h0;
				y1 = 10'h0;
			end
		endcase
	end

endmodule
