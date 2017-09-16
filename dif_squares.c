#include <stdio.h>
#include <stdlib.h>

int main() {
  int loop_counter = 1;
  int square_of_sums = 0;
  int sum_of_squares = 0;
  while(loop_counter <  101){
    sum_of_squares += loop_counter * loop_counter;
    square_of_sums += loop_counter;
    loop_counter +=1;
  }
  /* printf("%d", sum_of_squares); */
  square_of_sums *= square_of_sums;
  printf("difference between the sum of squares and the square of sums: %d\n", square_of_sums - sum_of_squares);
  return 0;
}
    
  
