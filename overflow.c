#include <stdio.h>

int main(void){

  int overflower0 = 4294967295;
  int overflower1 = 4294967296;
  int overflower2 = 4294967297;

  int overflower4 = 2147483647;
  int overflower5 = 2147483648;
  int overflower6 = 2147483649;

  printf("Overflower 0: %d\n",overflower0);
  printf("Overflower 1: %d\n",overflower1);
  printf("Overflower 2: %d\n",overflower2);

  printf("Overflower 4: %d\n",overflower4);
  printf("Overflower 5: %d\n",overflower5);
  printf("Overflower 6: %d\n",overflower6);
}