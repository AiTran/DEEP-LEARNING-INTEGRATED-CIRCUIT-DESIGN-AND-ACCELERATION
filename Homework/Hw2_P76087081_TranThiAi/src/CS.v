
`timescale 1ns/10ps
module CS(Y, X, reset, clk);

input clk, reset; 
input 	[7:0] X;
output 	[9:0] Y;

//--------------------------------------
//  \^o^/   Write your code here~  \^o^/
//--------------------------------------
reg     [71:0] data;
wire    [11:0] sum;
reg     [11:0] c_sum;
wire    [7:0] avg;
wire	[7:0] appr;
wire    [12:0] out;
//reg	[71:0]	r_num;


always @(posedge clk or posedge reset) begin
    if(reset) begin                     
        data <= 72'b0;
        c_sum <= 0;  
    end
    else begin
        data <= {data[63:0], X[7:0]};        
        c_sum <= sum;
    end
end

//always @(*) begin
assign sum = c_sum - {4'b0, data[71:64]} + {4'b0, X};
assign avg = c_sum/9;

Compare cp(appr, data, avg);

assign out = (appr*9+ c_sum)/8;
assign Y= out;

endmodule

//-----------------------------------

module Compare(out1, in, avg_1);
input [71:0] in;
output [7:0] out1;
input [7:0] avg_1;
integer i;

reg [7:0] out1;
reg [7:0] appr1;
reg 	[7:0] e;
reg 	[7:0] a;
reg		[7:0] d;
wire [7:0] avg_1;
wire [71:0] in;
reg [71:0] c_in;

always @(in) begin
c_in = in;
appr1 = 8'b0;
for( i=0; i<9; i=i+1) begin
	a[7:0] = c_in[7:0];
	c_in = c_in >> 8;
	//appr1 <= 100000001;
	
	if(a<=avg_1) begin
		d= avg_1 - a;
		e= avg_1- appr1;
		if(d<=e) begin
			appr1 = a;
			//appr1=d;
		end
		else begin
			appr1 = appr1;
			//appr1=appr1;
		end
	end
	
end
out1 = appr1;

end
endmodule





//assign sum = c_sum - {4'b0, data[71:64]} + {4'b0, X};

//assign avg = sum/9;
//assign r_num = data;

//always @(*) begin

//end


