#!/bin/sh
# Count the number of executable files in
# the current working directory
count=0
for i in *
do
   if test -x $i
   then
      count=`expr $count  + 1`
      ls -l $i
   fi
done
echo "There are $count executable files."

