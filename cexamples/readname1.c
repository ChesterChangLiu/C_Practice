#include<stdio.h>
#include<stdlib.h> 

int main() {
  char buffer[10];
  char name[10];
  printf( "Tell me your name: " );
  fgets(buffer, sizeof buffer, stdin);
  sscanf(buffer, "%[^\n]s", name);
  printf("Hello, %s\n", name);
}

