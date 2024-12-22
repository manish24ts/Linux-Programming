#!/bin/bash

# Read the value of n from the user
echo "Enter the value of n: "
read n

echo "Even numbers from 1 to $n are:"
for ((i=2; i<=n; i+=2))
do
  echo $i
done
