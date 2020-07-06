#include<stdio.h>
#include<stdlib.h> 

int main() {
  int *a, i, n, sum = 0;
  printf( "Input an array size:  " );
  scanf( "%d", &n );
  a = malloc ( n * sizeof *a );
  // a = calloc( n, sizeof *a );
  for( i=0; i<n; i++ ) scanf( "%d", &a[i] );
  for( i=0; i<n; i++ ) sum += a[i];
  free( a );
  printf("Number of elements = %d\n", n);
  printf("Sum is %d\n", sum);
}

