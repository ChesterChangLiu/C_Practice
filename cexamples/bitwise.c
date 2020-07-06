#include <stdio.h>
int main() {
  int i,j,k;
  int a,b,c,d;
  i = 5;
  j = 9;
  k = i & j;
  printf("k = %d\n",k);
  k = i | j;
  printf("k = %d\n",k);
  k = i ^ j;
  printf("k = %d\n",k);

  a = 1;
  b = 2;
  c = a & b;
  d = a && b;
  printf("c = %d\n",c);
  printf("d = %d\n",d);

}
