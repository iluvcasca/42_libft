#!/bin/bash

# Function to comment out a range of lines in a file
comment_out_range() {
    file="$1"
    sed -i ' /#include <stdlib.h>/! {
            /#include "libft.h"/! {
             /#include/,/^}$/ {
                s/^/\/\//
            }
        }
    }' "$file"
}

# Iterate through each .c file in the directory
for file in *.c; do
    comment_out_range "$file"
done

