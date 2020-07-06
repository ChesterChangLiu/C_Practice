#include <stdio.h>
int main() {
  int i;
  int c = -300;
  for (i = 0; i < 19; i++)
  {
    c = c >> 2;
    printf("%d\n",c);
  }
}
