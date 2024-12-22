#!/bin/bash

# Read the number from the user
echo "Enter a number: "
read num


echo "The digits of the number $num are:"
for ((i=0; i<${#num}; i++))
do
  echo "${num:$i:1}"
done
