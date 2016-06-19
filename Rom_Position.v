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
		case(index)
			3'b000: begin
				x0 = 10'hc5;
				y0 = 10'h0;
				x1 = 10'h169;
				y1 = 10'h0;
			end
			3'b001: begin
				x0 = 10'hc5;
				y0 = 10'h0;
				x1 = 10'h117;
				y1 = 10'h0;
			end
			3'b010: begin
				x0 = 10'h117;
				y0 = 10'h0;
				x1 = 10'h169;
				y1 = 10'h0;
			end
			3'b011: begin
				x0 = 10'hc5;
				y0 = 10'h0;
				x1 = 10'h169;
				y1 = 10'h262;
			end
			3'b100: begin
				x0 = 10'hc5;
				y0 = 10'h262;
				x1 = 10'h169;
				y1 = 10'h0;
			end
			3'b101: begin
				x0 = 10'h117;
				y0 = 10'h0;
				x1 = 10'h169;
				y1 = 10'h262;
			end
			default: begin
				x0 = 10'hc5;
				y0 = 10'h0;
				x1 = 10'h169;
				y1 = 10'h0;
			end
		endcase
	end

endmodule
