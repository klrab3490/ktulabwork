module HALF_SUB(
	input a,
	input b,
	output diff,
	output borr
);
assign diff = a^^b;
assign borr = ~a&b;
endmodule;