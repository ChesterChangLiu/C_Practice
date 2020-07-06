#include <stdio.h>
main() {
  int age; 
  char ageString[4]; 
  char firstName[30]; 
  char lastName[30]; 
  printf("What is your age? ");
  fgets(ageString, 4, stdin);
  sscanf(ageString, "%d", &age);
  printf("Enter first name: ");
  fgets(firstName, 30, stdin);
  sscanf(firstName, "%[^\n]s", &firstName);
  printf("Enter last name: ");
  fgets(lastName, 30, stdin);
  sscanf(lastName, "%[^\n]s", &lastName);
  printf("Your name is %s %s and you are %d years old.\n", firstName, lastName, age);
}
