#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int main() {
  char buffer[10];
  char *name;
  int multiplier = 1;
  printf( "Tell me your name: " );
  fgets(buffer, sizeof buffer, stdin);
  name = malloc ( sizeof buffer );
  strncpy(name, buffer, strlen(buffer));
  while ( name[strlen(name) - 1] != '\n')
  {
    char *tmp;
    multiplier++;
    fgets(buffer, sizeof buffer, stdin);
    if ((tmp = realloc ( name, sizeof buffer * multiplier )) == NULL)
    {
      fprintf(stderr, "ERROR: realloc failed");
      exit(1);
    }
    name = tmp;
    strncat(name, buffer, sizeof buffer);
  }
  sscanf(name, "%[^\n]s", name);
  printf("Hello, %s\n", name);
}

