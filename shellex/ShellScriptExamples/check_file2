#!/bin/sh
if test $# -eq 0
then
   echo Usage: check_file file_name
   exit 2
fi
if test ! -e $1
then
   echo "$1 does not exist."
   exit 1
else
   ls -l $1
fi
