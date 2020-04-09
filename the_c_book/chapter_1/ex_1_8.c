/* Write a program to count blanks, tabs, and newlines. */
#include <stdio.h>

int main() {
  int c;
  int white_space_count;

  white_space_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++white_space_count;
    } else if (c == '\t') {
      ++white_space_count;
    } else if (c == ' ') {
      ++white_space_count;
    }
  }
  printf("%d\n", white_space_count);
}