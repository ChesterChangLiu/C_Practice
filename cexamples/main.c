/* This is a simple example showing how C programs can be split up between
   multiple files. Compile with:

   gcc -o calc main.c calc.c

   Please note that this is an example of multiple files and the "extern"
   keyword.  It is not an example of good code.
*/
#include <stdio.h> /* for printf() */
extern int res;
void square(int);

int main() {
  printf("%d\n",res);
  square(5);
  printf("%d\n",res);
}
