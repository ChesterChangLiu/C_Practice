#include <stdio.h>
#include <ctype.h>

main() /* Convert input to lower case */
{
  int c;
  while ((c = getchar()) != EOF)
    putchar(tolower(c));
}
