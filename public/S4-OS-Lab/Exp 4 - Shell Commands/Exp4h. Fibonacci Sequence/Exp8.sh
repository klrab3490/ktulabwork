
echo "Display Fibonacci Series"
echo -n "Enter the number to find the fibonacci : "; read number
a=0
b=1
sum=0
echo -n "Fibonacii Series : ";
for ((i=0;i<=number;i++))
do 
	if ((i==number))
	then echo -n "$a " 
	else echo -n "$a, "
	fi
	((sum=a+b))
	a=$b
	b=$sum
done
echo	
