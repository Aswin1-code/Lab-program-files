#!/bin/bash
echo Enter five digits of a number
read num
n=1
while [ $n -le 5 ]
do 
   a=`echo $num | cut -c $n`
   echo $a
   n=`expr $n + 2`
done
