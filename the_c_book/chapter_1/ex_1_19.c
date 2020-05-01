/*
 * Write a function reverse(s) that reverses the char string s. Use it to write a program that reverses its input a line
 * at a time.
 */
#include <stdio.h>
#include <string.h>

#define MAX_LINE 100

void reverse(char *s, int line_length);

int main() {
    int curr_char, incr;
    char curr_line[MAX_LINE] = {0};

    incr = 0;
    while ((curr_char = getchar()) != EOF) {
        if (curr_char == '\n') {
            reverse(&curr_line, incr-1);
            printf("%s\n", curr_line);
            incr = 0;
            memset(curr_line, 0, MAX_LINE);  // use memset to reset char array
        } else {
            curr_line[incr] = curr_char;
            ++incr;
        }
    }
}

// reverse: reverse a string
void reverse(char *s, int line_length) {
    char first_char;

    for (int i = 0; i < (int) line_length/2; ++i) {
        first_char = s[i];
        s[i] = s[line_length - i];
        s[line_length - i] = first_char;
    }
}