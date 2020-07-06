#!/bin/sh
#Chang Liu 216882813


list() {
printf "Here is the list of found class files: \n"
cat tempFile
 
}
#function that script shows the list of found readable "*.rec". 

ci() {
printf "Found courses are: \n"
while read -r file #read the file's line 
do
courseName=$(grep "COURSE NAME" "$file" | cut -b 14-) # find the information cut and select bytes from 14 long
credits=$(grep "CREDITS" "$file" | cut -b 11-) # cut and select bytes from 11 long to get the information
echo "$courseName" "has" "$credits" "credits."
done < tempFile #Read input from a file

}

sl(){
printf "Here is the unique list of student numbers in all courses: \n"
while read -r file 
do
courseName=$(grep "[0-9]\{6\}" "$file" -o >> tempFile_2) #find only matching number 0-9 six times and appending output to a file
done < tempFile
sort -u tempFile_2  # unique sort output the first of an equal run for tempFile_2
rm tempFile_2 #remove file
}

sc() {

while read -r file
do
courseName=$(grep "[0-9]\{6\}" "$file" -o >> tempFile_2) 
done < tempFile
students=$(sort -u tempFile_2 | wc -l)
echo "There are"  "$students"  "registered students in all courses" #count how many lines 
rm tempFile_2
}

ccc() {
course=$(cat tempFile | wc -l) 
echo "There are" "$course" "course files"   #open file count how many lines
}

hh() {
printf "l or list: lists found courses
ci: gives the name of all courses plus number of credits
sl: gives a unique list of all students registered in all courses
sc: gives the total number of unique students registered in all courses
cc: gives the total numbers of found course files
h or help: prints the current message.
q or quit: exits from the script \n"

} #output help information

qq() {
echo "goodbye"
exit 0

}


#remove temp file and it's a good exit 
exit0(){
if [ -f tempFile ]
then 
rm tempFile
echo "goodbye"
exit 0
fi


}

#remove temp file and it's a bad exit 
exit1(){
if [ -f tempFile ]
then
echo "goodbye"
rm tempFile
exit 1
fi

}

if [ "$#" -ne 1 ]  #if the number of arguments is not equal to 1, there is no readable "*.rec" files found, the script shows an appropriate error and exits.
then
printf "Error, wrong input\n"
exit 1
fi

if [ -f tempFile ] #check if have the filename 'tempFile' already
then
printf " we need to use a temp file named 'tempFile' to run this program, please delete tempFile."
exit 1
fi

file=$(find "$1" -type f -name "*.rec" -perm -444 > tempFile)
#find all readable .rec files, -perm -444 readble for all. redirect ouput to a file (overwrite)

if [ "$(cat tempFile | wc -l)" -ne 0 ] #check if have 0 line or not otherwise to flap it and go to else statement, if there is a tempFile without 0 line. 
then
while true
do #put command
printf "command: "
read -r command
case $command in  #read command from all the list functions
"list") list 
;;
"l") list 
;;
"quit") exit0 
;;
"q") exit0 
;;
"ci") ci 
;;
"sl") sl 
;;
"sc") sc 
;;
"cc") ccc 
;;
"h") hh 
;;
"help") hh 
;;
* ) echo "Unrecognized command!" 
;;
esac
done
else
echo "There is no readable *.rec file exists in the specified path or its subdirectories."
exit1
fi




