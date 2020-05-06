/*
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 */
#include <stdio.h>

#define N 4  // spaces per tab
#define MAX_INPUT 1000

int main () {
    int curr_char, incr;
    char input[MAX_INPUT];

    incr = 0;
    while ((curr_char = getchar()) != EOF) {
        if (curr_char == '\t') {
            for (int curr_incr = incr; incr < (curr_incr + N); ++incr) {
                input[incr] = ' ';
            }
        } else {
            input[incr] = curr_char;
            ++incr;
        }
    }

    printf("%s", input);
}