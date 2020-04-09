#include <stdio.h>

/* count characters in input; 1st version */
int main() {
  long nc;

  nc = 0;
  // note: use ctrl + d to send EOF from keyboard
  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
}