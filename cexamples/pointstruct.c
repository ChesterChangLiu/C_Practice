#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

/* addpoint: add two points */
Point addpoint (Point *p1, Point *p2)
{
  Point temp; 
	temp.x = p1->x + p2->x;
	temp.y = (*p1).y + (*p2).y;
	return temp;
}

int main()
{
	Point a = {1, 2};
  Point b = {5, 9};
  Point c;
	c = addpoint( &a, &b );
  printf("Point c is (%d,%d)\n", c.x, c.y);
}
