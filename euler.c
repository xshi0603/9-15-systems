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
  sum += second;
  while ((first < biggest_num) && (second < biggest_num)) {
    if (first > second) {
      second += first;
      if (second % 2 == 0) {
	sum += second;
      }
    }
    else {
      first += second;
      if (first % 2 == 0) {
	sum += first;
      }
    }
  }
  return sum;
}

int main() {
  int result_prob1 = prob1(1000);
  printf("The result of problem 1 is %d\n", result_prob1);
  int result_prob2 = prob2(4000000);
  printf("The result of problem 2 is %d\n", result_prob2);
}
