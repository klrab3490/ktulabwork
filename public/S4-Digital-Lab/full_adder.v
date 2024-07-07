module full_adder(input a, b, c, output cout, sum);
assign sum=(a^b)^c;
assign cout=a&b | (a^b)&c;
endmodule