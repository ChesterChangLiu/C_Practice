#include<stdio.h>
#include<stdlib.h> 

int main() {
  int **a;
  int i,n,m;
  printf( "Input the two array dimensions:  " );
  scanf( "%d %d", &n, &m);
  a = malloc ( n * sizeof *a );
  for (i=0; i<n; i++)
    a[i] = malloc( m * sizeof **a ); 
  a[n-1][m-1] = 42;
}
