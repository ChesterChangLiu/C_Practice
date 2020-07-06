#include <stdio.h>
main() {
   int counter=0;
   char c;
   int i;
   float f;
   int a[5];
   enum colours { black, white, red, blue, green };


   printf("\nCode snippet %d\n--------------\n", ++counter);
   c = 'a';
   i = c + 257;
   printf("%c\n",i);

   printf("\nCode snippet %d\n--------------\n", ++counter);
   printf("Size of char is %d\n", sizeof(char));
   printf("Size of short int is %d\n", sizeof(short int));
   printf("Size of int is %d\n", sizeof(int));
   printf("Size of long int is %d\n", sizeof(long int));
   printf("Size of float is %d\n", sizeof(float));
   printf("Size of double is %d\n", sizeof(double));
   printf("Size of long double is %d\n", sizeof(long double));

   printf("\nCode snippet %d\n--------------\n", ++counter);
   a[black] = 4;
   a[red] = 3;
   a[green] = blue;

   printf("\nCode snippet %d\n--------------\n", ++counter);
   i = 2345;
   c = i;
   printf("%d\n",c);
}
