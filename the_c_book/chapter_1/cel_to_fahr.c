#include <stdio.h>

int main() {
  float fahr, cel;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  cel = lower;

  while (cel <= upper) {
    fahr = cel * (9.0 / 5.0) + 32;
    printf("%3.0f \t %3.0f\n", fahr, cel);
    cel = cel + step;
  }
}