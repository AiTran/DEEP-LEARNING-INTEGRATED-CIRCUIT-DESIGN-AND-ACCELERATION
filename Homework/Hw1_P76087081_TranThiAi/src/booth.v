

`timescale 1ns / 10ps
module booth(out, in1, in2);

parameter width = 6;

input  	[width-1:0]   in1; //multiplicand
input  	[width-1:0]   in2; //multiplier
output [2*width-1:0]  out; //product


/*write your code here*/

reg [2*width-1:0] out;
reg [1:0] temp;
integer i;
reg Q;

always @ (in1, in2)
begin
out=12'd0;
Q= 1'd0;

for( i=0; i<width; i= i +1)
begin
	temp={in2[i],Q};
	//$display("%b data of temp ", temp);
	
	case(temp)
		2'd2: out[2*width-1:width] = out[2*width-1:width] - in1;
		2'd1: out[2*width-1:width] = out[2*width-1:width] + in1;
		default: begin end
	endcase
	out= out >>1;
	//$display("%b result", out);
	out[11] = out[10];
	Q=in2[i];
	
end
end

endmodule
