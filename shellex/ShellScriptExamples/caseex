#!/bin/sh
# Course schedule
echo -n "Enter the day (mon, tue, wed, thu, fri): "
read day
case $day in
   mon)   echo 'EECS2031 2:30-4:30 CB-121'
    echo 'EECS2021 17:30-19:00 TEL-0016';;
   tue | thu) 
    echo 'EECS2011 17:30-19:00 SLH-E';;
   wed)   echo 'No class today.  Hooray!';;
   fri)   echo 'EECS2031 2:30-4:30 LAB 1006';;
   *)   echo 'Day off. Hooray!';;
esac
