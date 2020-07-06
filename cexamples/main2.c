/* This is a simple example showing how C programs can be split up between
   multiple files.  Compile with:

   cc -o calc2 main2.c calc2.c

   Please note that this is an example of multiple files and the "extern"
   keyword.  It is not an example of good code.
*/
#include <stdio.h> /* for printf() */
#include "calc2.h"

int main() {
  square(5);
  printf("%d\n",res);
}
