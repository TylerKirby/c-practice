/*
 * Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same
 * spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop,
 * which should be given preference?
 */
#include <stdio.h>

#define N 4  // spaces per tab
#define MAX_INPUT 1000

int main () {
    int curr_char, incr, curr_spaces;
    char input[MAX_INPUT];

    incr = curr_spaces = 0;
    while ((curr_char = getchar()) != EOF) {
        if (curr_char == ' ' & curr_spaces == N) {
            for (int curr_incr = incr; incr > curr_incr - 4; --incr) {
                input[incr] = '\0';
            }
            input[incr] = '\t';
            curr_spaces = 0;
        } else if (curr_char == ' ') {
            input[incr] = curr_char;
            ++curr_spaces;
            ++incr;
        } else {
            curr_spaces = 0;
            input[incr] = curr_char;
            ++incr;
        }
    }

    printf("%s", input);
}