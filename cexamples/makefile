main.exe : main2.o calc2.o
	gcc main2.o calc2.o -o main.exe

main2.o : main2.c  calc2.o
	gcc -c main2.c 

calc2.o : calc2.c calc2.h
	gcc -c calc2.c 

clean :
	rm *.o main.exe
