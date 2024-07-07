module NAND_GATE(
	input A,
	input B,
	output Y
);
assign Y= ~(A&&B);
endmodule;
