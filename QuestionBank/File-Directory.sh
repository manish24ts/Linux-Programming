#!/bin/bash

if [ "$#" -eq 0 ]; then
    echo "Usage: $0 <file_or_directory> [...]"
    exit 1
fi

for arg in "$@"; do
    if [ -f "$arg" ]; then
        line_count=$(wc -l < "$arg")
        echo "$arg is a file with $line_count lines."
    elif [ -d "$arg" ]; then
        echo "$arg is a directory."
    else
        echo "$arg is neither a file nor a directory."
    fi
done
