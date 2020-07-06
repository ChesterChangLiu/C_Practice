#include <stdio.h>
#include <ctype.h>
main() /* Convert input to lower case */
{
  int c;
  c = getchar();
  while ( c != EOF ) {
    putchar( tolower(c) );
    c = getchar();
  }
}
