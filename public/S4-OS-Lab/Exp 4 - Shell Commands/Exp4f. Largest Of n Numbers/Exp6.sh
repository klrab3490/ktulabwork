
echo "Find The Largest Number From N Numbers "
echo -n "The Number : " ; read number
temp1=$number
for ((i=0;i<number;i++))
do 
    echo -n "arr[$i] = "; read arr[$i]
done
for ((i=0;i<number;i++))
do 
    for ((j=0;j<number-i-1;j++))
    do
        if ((arr[j]>arr[j+1]))
        then
            temp=0
            ((temp=arr[j]))
            ((arr[j]=arr[j+1]))
            ((arr[j+1]=temp))   
        fi
    done
done
((number=number-1))
echo "The Largest Of $temp1 is ${arr[$number]}"
