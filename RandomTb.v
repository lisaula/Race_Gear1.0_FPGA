`timescale 1ns / 1ps
module RandomTb(
    );
	wire q;
	reg [3:0] seed;
	reg load;
	reg clk;
	Random_tiny random(q,clk,seed,load);
	initial
	begin
		clk =0;
		load=0;
		seed[0]=1'b1;
		seed[1]=1'b0;
		seed[2]=1'b1;
		seed[3]=1'b0;
		#10
		load=1;
		#10
		load=0;
		
	end
	
	always
	begin
		#10
		clk = !clk;
	end

endmodule
