#include <stdio.h>

int getaline(char s[],int lim)
{
  int c, i;
  for (i=0; i < lim-1 
       && (c=getchar())!=EOF
       && c!='\n'; ++i)
    s[i] = c;
  s[i] = '\0';
  return i;
}

main() {
  int age; 
  char firstName[30]; 
  char lastName[30]; 
  printf("What is your age? ");
  scanf("%d", &age);
  getaline(firstName, 30);
  printf("Enter first name: ");
  getaline(firstName, 30);
  printf("Enter last name: ");
  getaline(lastName, 30);
  printf("Your name is %s %s and you are %d years old.\n", firstName, lastName, age);
}
