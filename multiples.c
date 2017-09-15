#include <stdio.h>
#include <stdlib.h>

int main() {
  int threes = (333.0/2) * 1003;
  int fives = (200/2) * 1005;
  int fifteens = (66/2) * 1015;
  int sum = threes + fives - fifteens;
  printf("Sum of multiples of three and five up to 1000:%d\n",sum);
  return 0;
}
