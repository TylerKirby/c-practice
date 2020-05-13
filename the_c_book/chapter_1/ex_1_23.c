/*
 * Write a program to remove all comments from a C program. Don't forget to handle
 * quoted strings and character constants properly. C comments do not nest.
 */
#include <stdio.h>

#define MAX_INPUT 1000

int main() {
    int in_quotes, incr;
    char curr_char;
    char input[MAX_INPUT] = {0};

    in_quotes = incr = 0;
    while ((curr_char = getchar()) != EOF) {
        // Set quotes flag
        if (curr_char == '\'') {
           in_quotes = in_quotes == 0 ? 1 : 0;
        }

        // Handle single line comments
        if ((curr_char != '/' && input[incr-1] != '/') || (in_quotes == 1)) {
            input[incr] = curr_char;
            ++incr;
        }
    }

    // Print input
    printf("%s", input);
}