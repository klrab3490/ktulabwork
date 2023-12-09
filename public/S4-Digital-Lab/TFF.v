module tff(q, q1,t,clk);
output q,q1;
input t,clk;
reg q,q1;
initial 
	begin
		q=1'b0;
		q1=1'b1;
	end
always @(posedge clk)
begin
	if(t==0)
	begin
		q<=q;
		q1<=q1;
	end
	else
	begin
		q<=~q;
		q1<=~q1;
	end
end
endmodule