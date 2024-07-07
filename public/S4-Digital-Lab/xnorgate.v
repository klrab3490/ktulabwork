module XNOR_GATE(
	input A,
	input B,
	output Y
);
assign Y=~(~A&&B||A&&~B);
endmodule;
