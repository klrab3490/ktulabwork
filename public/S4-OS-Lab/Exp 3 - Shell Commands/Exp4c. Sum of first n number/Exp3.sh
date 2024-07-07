
echo "Display Sum Of First N Numbers "
echo -n "Enter The Number : " ; read number
sum=0
for ((i=1;i<=number;i++))
do 
((sum=sum+i))
done
echo "The Sum Of First $number is $sum"
