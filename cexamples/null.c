#include<stdlib.h> 
#include<stdio.h> 

int main() {
  int *x;
  x = malloc( sizeof( int ) );
  if ( x == NULL ) {
    printf( "Insufficient memory!\n" );
    exit( 1 );
  }
  *x = 20;
}
