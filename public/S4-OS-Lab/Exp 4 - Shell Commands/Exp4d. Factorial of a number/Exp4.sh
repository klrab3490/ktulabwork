
echo "Find The Factorial Of Number"
echo -n "Enter The Number : " ; read number
if ((number==0))
    then echo "Factorial Of $number is 1"
else
    factorial=1
    for ((i=1;i<=number;i++))
    do
        ((factorial=factorial*i))
    done
    echo "Factorial Of $number is $factorial"
fi
