#!/bin/bash

echo "#include <stddef.h>" > libft.h
echo "" >> libft.h

for file in *.c; do
    line=$(grep -m 1 '^[a-z].*{$' $file | sed 's/{/;/')
    echo "$line" >> libft.h
    echo "" >> libft.h
done

echo "libft.h created"
