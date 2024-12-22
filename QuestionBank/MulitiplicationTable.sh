#!/bin/bash

# Read the number from the user
echo  "Enter the number for which you want the multiplication table: "
read n

echo "Multiplication table for $n:"
for ((i=1; i<=10; i++))
do
  echo "$n x $i = $((n * i))"
done
