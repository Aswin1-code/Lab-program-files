#!/bin/bash
echo "Enter a number"
read number
num=$number
fact=1
while [ $num -ge 1 ]
do
   fact=$((fact * num))
   num=$((num - 1))
done
echo "factorial of $number is $fact"
