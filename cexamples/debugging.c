#include <stdio.h>

long factorial(int n)
{
    long result;
    while(n--)
    {
        result *= n;
    }
    return result;
}

int main()
{
  int i;
  scanf("%d",&i);
  printf("%d", factorial(i));
}
