
echo "Sort Array "
echo -n "The Size Of Array : " ; read number
temp1=$number
echo "Enter Array"
for ((i=0;i<number;i++))
do 
    echo -n "arr[$i] = " ; read arr[$i]
done
echo -n "Before Sorting :  " ;
for ((i=0;i<number;i++))
do 
    echo -n "${arr[$i]} " ;
done
echo
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
echo -n "After Sorting :  " ;
for ((i=0;i<number;i++))
do 
    echo -n "${arr[$i]} " ;
done
echo 
