#!/bin/sh
#Chang Liu 216882813

if [ "$#" -ne 1 ]  #if the number of arguments is not equal to 1, there is no readable "*.rec" files found, the script shows an appropriate error and exits.
then
printf "Error, wrong input\n"
exit 1
fi


files=$(find "$1" -type f -name "*.rec" -perm -444) 
#set value output command to find all readable .rec files, -perm -444 readble for all.


if [ "$files" ] 
#After finding all readable "*.rec" files, allow the user to enter commands. 
then
while true
do
printf "command: "
read -r command
if [ "$command" = "list" ] || [ "$command" = "l" ] 
#The script shows the list of found readable "*.rec". If the user enters l “lower case l”, accept as the "list" command.
then
printf "Here is the list of found class files: \n"
printf "$files\n"
elif [ "$command" = "quit" ] || [ "$command" = "q" ] 
#The script must exit. If the user enters q, accept as the "quit" command
then
exit 0
else  
#any other command is entered, the script reply unrecognized command.
printf "Unrecognized command!\n"
fi
done

else  
#there is no readable "*.rec" files found, the script shows an appropriate error and exits. 
printf "There is no readable *.rec file exists in the specified path or subdirectories\n"
exit 1
fi




