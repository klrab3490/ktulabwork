module demux(in, s0, s1, out);
input s0, s1,in;
output [3:0]out;
assign out[0]=~s1&~s0&in;
assign out[1]=~s1&s0&in;
assign out[2]=s1&~s0&in;
assign out[3]=s1&s0&in;
endmodule