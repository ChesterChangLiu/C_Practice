#!/bin/sh
# Enter a grocery list and
# store in a file indicated by $1
echo To end list, enter \"all\".
item=nothing
until test $item = "all"
do
        echo "Enter grocery item: "
        read item
        echo $item >> $1
done
