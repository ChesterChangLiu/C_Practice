#include <stdio.h>
#include <stdlib.h>

main() {
  struct list {
    int data;
    struct list *next;
  } *head, *p, *last;
  int i;

  /* Create a dummy node, which 
     simplifies insertion and deletion */
  head = malloc( sizeof( struct list ) );
  head->data = -1;
  head->next = NULL;
  last = head;
  scanf( "%d", &i );  /* input 1st element */
  while( i >= 0 ) {
    p = malloc( sizeof( struct list) );
    p->data = i;   
    p->next = NULL;
    last->next = p;
    last = p;
    scanf( "%d", &i );
  }

  printf("Enter the number to search for: ");
  scanf( "%d", &i );
  for( p = head->next;  p != NULL; p = p->next )
    if( p->data == i )
       printf( "FOUND %d \n", i );
}

