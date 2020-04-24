/* Write a program to print all input lines that are longer than 
 * 80 characters */
#include <stdio.h>

#define MAX_LINE 1000

int main() {
    int curr_char, line_incr;
    char curr_line[MAX_LINE];

    line_incr = 0;

    while ((curr_char = getchar()) != EOF) {
        if (curr_char != '\n') {
            curr_line[line_incr] = curr_char;
            ++line_incr;
        } else {
            if (line_incr > 80) {
                // line is longer than 80 chars
                curr_line[line_incr] = '\0';
                printf("%s", curr_line);
                line_incr = 0;
            } else {
                // line is not longer than 80 chars
                line_incr = 0;
            }
        }
    }
}