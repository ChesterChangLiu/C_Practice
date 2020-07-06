#include<stdio.h>

void mystrcpy1(char *dest, char *src);
void mystrcpy2(char *dest, char *src);
void mystrcpy3(char *dest, char *src);

void main () {
  char dest1[] = "     ";
  char dest2[] = "     ";
  char dest3[] = "     ";
  char src1[]  = "test!";
  mystrcpy1(dest1, src1);
  mystrcpy2(dest2, src1);
  mystrcpy3(dest3, src1);
  printf("%s\n", dest1);
  printf("%s\n", dest2);
  printf("%s\n", dest3);
}

/* mystrcpy1: copy src to dest; array subscript version */
void mystrcpy1(char *dest, char *src)
{
  int i;
  i = 0;
  while ((dest[i] = src[i]) != '\0')
    i++;
}

/* mystrcpy2: copy src to dest; pointer version */
void mystrcpy2(char *dest, char *src)
{
  //int i;
  //i = 0;
  while ((*dest = *src) != '\0') {
    dest++; src++;
  }
}

/* mystrcpy3: copy src to dest; pointer version 2 */
void mystrcpy3(char *dest, char *src)
{
  while ((*dest++ = *src++) != '\0') ;
}

