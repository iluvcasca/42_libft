#! /bin/bash

for file in *.c; do
    sed -i '/^\/\/#include/,/^\/\/}/ s/^\/\///' $file
done
echo "main uncommented"
