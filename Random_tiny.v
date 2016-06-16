module Random_tiny(q, clk, seed, load);
	output q;
	input [3:0] seed;
	input load;
	input clk;

	reg [3:0] r;
	wire nextBit;

	assign q = nextBit;
	assign nextBit = r[1] ^ r[0];

	always @ (posedge clk)
	begin
		if (load) begin
			r = seed;
		end
		else begin
			r = {nextBit,r[3:1]};
		end
	end

endmodule