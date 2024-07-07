 
echo "Sum Of Digits Of A Number"
echo -n "Enter the number : "; read number
temp1=$number
sum=0
while ((temp1))
do 
    ((a=temp1%10))
    ((sum=sum+a))
    ((temp1=temp1/10))
done
echo "Sum of digits in $number is $sum"
