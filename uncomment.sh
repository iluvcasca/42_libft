#!/bin/bash

# Function to comment out a range of lines in a file
uncomment_range() {
    file="$1"
sed -i ' /#include <stdlib.h>/! {
            /#include "libft.h"/! {
             /#include/,/^}$/ {
                s/^\/\///
            }
        }
    }' "$file"
}

# Iterate through each .c file in the directory
for file in *.c; do
    uncomment_range "$file"
done

