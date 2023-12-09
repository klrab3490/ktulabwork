module mux(in, s0, s1, out);
input s0,s1;
input [3:0]in;
output out;
assign out=(~s1&~s0&in[0]) | (~s1&s0&in[1]) | (s1&~s0&in[2]) | (s1&s0&in[3]);
endmodule