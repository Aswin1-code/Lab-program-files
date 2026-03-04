echo "Enter first mnumber:"
read num
echo "Enter the number for power:"
read power
counter=0
ans=1
while [ $power -ne $counter ]
do 
   ans=`expr $ans \* $num`
   counter=`expr $counter + 1`
done
echo "$num power of $power is : $ans"

