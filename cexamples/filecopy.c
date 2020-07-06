#include <stdio.h>
int main() {
  FILE *f, *g;
  char str[100];
  f = fopen("filecopy.c","r");
  g = fopen("output.c","w");
  while(fgets(str,10,f)) {
    fprintf(g,"%s",str);
  }
  fclose(f);
  fclose(g);
}
