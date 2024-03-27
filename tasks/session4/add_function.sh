#!/bin/bash

add_fn(){
local first_no=$1
local second_no=$2
local sum=$((first_no+second_no))
echo "The summation of" $first_no "and" $second_no "is:" $sum
return $sum
}
echo "#####################################################"
echo "This function is to get the summation of two numbers"
echo "#####################################################"
echo "please type a number"
read firstVar
echo "please type another number"
read secondVar
add_fn $firstVar $secondVar
x=$?
echo "---------------------------------------------------"
echo "Let's start decrementing" $x ",press enter"
read dummy_var
for((i=$x;i>=0;i=i-1)); do
echo "$i"
done
echo "Finished,Thank You"
echo "Session#4 task, March 23,2024"

