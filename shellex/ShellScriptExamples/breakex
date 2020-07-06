#!/bin/sh
while true
do
  echo "Entering while loop ..."
  echo "Choose 1 to exit loop."
  echo "Choose 2 to go to top of loop."
  echo -n "Enter choice: "
  read choice
  if test $choice = 1
  then
    break
  fi
  echo "Bypassing break."
  if test $choice = 2
  then
     continue
  fi
  echo "Bypassing continue."
done
echo "Exit while loop."
