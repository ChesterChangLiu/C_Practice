#!/bin/sh

# Read from the passed file and show the file word by word


while read line
do
    for word in $line
    do
       echo $word
    done
done < $1
