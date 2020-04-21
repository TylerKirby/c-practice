/* Write a program to print a histogram of the frequencies of different
 * characters in its input.
 */
#include <stdio.h>

#define ASCII_START 32  // space character
#define ASCII_END 127  // delete character

int main() {
    int curr_char;
    int char_counts[256] = {0};  // there are 256 possible ASCII characters

    while ((curr_char = getchar()) != EOF) {
        ++char_counts[curr_char];
    }

    /* Below we only iterate through a portion of the ASCII table.
     * Set ASCII_START = 0 and ASCII_END = 256 to iterate through the whole table.
     */
    for (int i = ASCII_START; i < ASCII_END; ++i) {
        printf("%c: ", i);
        for (int j = 0; j < char_counts[i]; ++j) {
            printf("#");
        }
        printf("\n");
    }
}