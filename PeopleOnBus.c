#include <stdio.h>

int change(int people, int total);

int main(void){

  int numPeople = 5;


  printf("You are driving a bus.\n");
  printf("The bus starts with %d people.\n",numPeople);
  
  numPeople = change(3,numPeople);
  numPeople = change(-2,numPeople);
  numPeople = change(-4,numPeople);
  numPeople = change(5,numPeople);
  numPeople = change(4,numPeople);
}

int change(int people, int total){

  total += people;
  if (people >= 0){
    printf("%d People get on -> Bus has %d people.\n",people, total);   
  } else {
    people *= -1;
    printf("%d People get off -> Bus has %d people.\n",people, total);   
  }
  return total;

}