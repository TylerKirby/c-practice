/* Write a program to remove trailing blacks and tabs from each line of input, and
 * to delete entirely blank lines.
 */
#include <stdio.h>

#define MAX_LINE_LENGTH 1000
#define MAX_NUMBER_OF_LINES 1000

int main() {
    int curr_char, line_incr, lines_incr, is_blank;
    char lines[MAX_LINE_LENGTH][MAX_NUMBER_OF_LINES];

    line_incr = lines_incr = is_blank = 0;

    while ((curr_char = getchar()) != EOF) {
        if (curr_char != '\n') {
            lines[lines_incr][line_incr] = curr_char;
            ++line_incr;
        } else {
            lines[lines_incr][line_incr] = '\0';
            ++lines_incr;
        }
    }

    for (int i = 0; i < lines_incr; ++i) {
        printf("%s\n", lines[i]);
    }
};