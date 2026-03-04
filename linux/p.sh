echo "Enter the value of n:"
read n
r=0
rev=0
while [ $n -gt 0 ]
   do 
      r=$(( $n % 10 ))
   rev=$(( $rev * 10 + $r ))
   n=$(( $n / 10 ))
done
echo " $rev "


