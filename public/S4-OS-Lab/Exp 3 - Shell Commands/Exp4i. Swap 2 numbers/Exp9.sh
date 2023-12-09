
echo "Swap 2 Number"
echo -n "Enter 1st Number : " ; read number1
echo -n "Enter 2nd Number : " ; read number2
echo "Read Number : $number1 & $number2"
temp=$number1
number1=$number2
number2=$temp
echo "After Swap Numbers : $number1 & $number2"
