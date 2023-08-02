
echo "Check For Amstrong Number"
echo -n "Enter Number : " ; read number
temp1=$number
temp2=$number
size=0
while ((temp1))
do 
    ((size=size+1))
    ((temp1=temp1/10))
done
sum=0
while ((temp2))
do 
    ((a=temp2%10))
    b=1;
    for ((i=0;i<size;i++))
    do
    	((b=b*a))
    done
    ((sum=sum+b))
    ((temp2=temp2/10))
done
amstrong=$sum
if ((amstrong==number))
then echo "The Number Is Amstrong"
else echo "The Number Is Not Amstrong"
fi
