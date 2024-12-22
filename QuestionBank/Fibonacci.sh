#!/bin/bash

echo "Enter the value of n:"
read n
a=0
b=1

echo "Fibonacci sequence up to $n terms:"

for ((i=1; i<=n; i++)); do
    echo "$a " 
    temp=$((a + b)) 
    a=$b            
    b=$temp       
done

