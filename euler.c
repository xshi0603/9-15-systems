#include <stdio.h>
#include <stdlib.h>

int prob1(int biggest_num) {
  int sum = 0;
  int i;
  for (i = 0; i < biggest_num; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int prob2(int biggest_num) {
  int sum = 0;
  int first = 1;
  int second = 2;
  while ((!first > 4000000) || (!second > 4000000)); 
  
}

int main() {
  int result_prob1 = prob1(1000);
  printf("The result of problem 1 is %d\n", result_prob1);
}
