/*
 * Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that
 * occurs before the n-th column of input. Make sure that your program does something intelligent with very long lines,
 * and if there are no blanks or tabs before the specified column.
 */
#include <stdio.h>

#define MAX_LINE_SIZE 80
#define MAX_INPUT_SIZE 1000


int main() {
    int curr_char, curr_line_len, incr, temp_incr;
    char input[MAX_INPUT_SIZE] = {0};

    curr_line_len = incr = 0;
    while ((curr_char = getchar()) != EOF) {
        if (curr_line_len < MAX_LINE_SIZE) {
            input[incr] = curr_char;
            ++incr;
            ++curr_line_len;
        } else {
            temp_incr = incr;
            while (input[incr] != ' ') {
                --incr;
            }
            input[incr] = '\n';
            incr = temp_incr;
            input[incr] = ' ';
            input[incr+1] = curr_char;
            incr = incr + 2;
            curr_line_len = 0;
        }
    }

    printf("%s", input);
}
