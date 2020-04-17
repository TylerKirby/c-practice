/* Write a program to copy its input to its output, replacing each string
   of one or more blanks by a single blank. */
#include <stdio.h>

int main() {
   int curr_char, prev_char;

   prev_char = 0;

   // How could we optimize the conditionals below?
   while ((curr_char = getchar()) != EOF) {
      if (prev_char != ' ' && curr_char != ' ') {
         putchar(curr_char);
      } else if (prev_char == ' ' && curr_char != ' ') {
         putchar(curr_char);
      } else if (prev_char != ' ' && curr_char == ' ') {
         putchar(curr_char);
      }
      prev_char = curr_char;
   }
}
