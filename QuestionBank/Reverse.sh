#!/bin/bash

echo "Enter a number:"
read num

reverse=0

original_num=$num

while ((num > 0)); do
    remainder=$((num % 10))      
    reverse=$((reverse * 10 + remainder)) 
    num=$((num / 10))            
done

echo "The reverse of $original_num is $reverse."
