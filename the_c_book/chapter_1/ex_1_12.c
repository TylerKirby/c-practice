/* Write a program that prints its input one word per line. */
#include <stdio.h>

int main() {
    int curr_char;

    while ((curr_char = getchar()) != EOF) {
        if (curr_char == ' ') {
            putchar('\n');
        } else {
            putchar(curr_char);
        }
    }
}