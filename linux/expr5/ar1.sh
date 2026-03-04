#!/bin/bash
echo "Enter arg1"
read one
echo "Enter arg2"
read two
echo "First argument is -->$one"
echo "Second argument is -->$two"
sum=$(($one+$two))
echo "sum=$sum"
