/* Write a program to copy its input to its output, replacing each tab by 
   \t, each backspace by \b, and each backslash by \\. This makes tabs
   and backspaces visible in a more unambiguous way.
*/
#include <stdio.h>


int main() {
  int curr_char;

  while ((curr_char = getchar()) != EOF) {
    if (curr_char == '\t') {
      putchar('\\');
      putchar('t');
    } else if (curr_char == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(curr_char);
    }
  }
}