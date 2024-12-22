
echo "Enter a positive integer:"
read num

# Validate the input
if ((num <= 0)); then
    echo "Please enter a positive integer."
    exit 1
fi

# Initialize sum to 0
sum=0

# Loop to calculate the sum of factors
for ((i=1; i<num; i++)); do
    if ((num % i == 0)); then
        sum=$((sum + i))
    fi
done

# Check if the sum of factors equals the number
if ((sum == num)); then
    echo "$num is a perfect number."
else
    echo "$num is not a perfect number."
fi
