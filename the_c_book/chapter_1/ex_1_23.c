/*
 * Write a program to remove all comments from a C program. Don't forget to handle
 * quoted strings and character constants properly. C comments do not nest.
 */
#include <stdio.h>

#define MAX_INPUT 1000

// TODO: This is partially finished. It works on single line comments though messes up the spacing of the subsequent line.
// TODO: This should support multiline comments and should test comments in quotes.

int main() {
    int in_quotes, in_comment, incr;
    char curr_char;
    char input[MAX_INPUT] = {0};

    in_quotes = incr = in_comment = 0;
    while ((curr_char = getchar()) != EOF) {
        // Set quotes flag
        if ((curr_char == '\'') && (in_quotes == 0)) {
           in_quotes = 1;
        } else if ((curr_char == '\'') && (in_quotes == 1)) {
            in_quotes = 0;
        }

        // Handle single line comments
        if (((curr_char != '/' && input[incr-1] != '/') || (in_quotes == 1)) && (in_comment == 0)) {
            input[incr] = curr_char;
            ++incr;
        } else {
            in_comment = 1;
        }

        if ((curr_char == '\n') && (in_comment == 1)) {
            in_comment = 0;
        }
    }

    // Print input
    printf("%s", input);
}