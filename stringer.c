#include <stdio.h>
#include <string.h>

int main(void){
  char mystr[20] = "Hello World";
  char firstName[20];
  char lastName[20];

  printf("%s\n",mystr);

  strcpy(mystr, "Smelly pants");
  printf("%s\n",mystr);

  
  printf("Enter your name: ");
  scanf("%s", firstName);
  scanf("%s", lastName);
  printf("You entered %s, %s\n", lastName, firstName);

  return 0;
}