/* Write a program to print a histogram of the lengths of words in its input. */
#include <stdio.h>

#define MAX_WORD_LENGTH 8

int main() {
    int curr_char, curr_word_length, curr_word;
    int word_lengths[MAX_WORD_LENGTH];

    curr_word_length = curr_word = 0;

    while ((curr_char = getchar()) != EOF) {
        if (curr_char == ' ' || curr_char == '\n') {
            ++word_lengths[curr_word_length];
            curr_word_length = 0;
            ++curr_word;
        } else {
            if (curr_word_length >= MAX_WORD_LENGTH) {
                printf("Current word length has hit max length of %d", MAX_WORD_LENGTH);
                return 0;
            } else {
                ++curr_word_length;
            }
        }
    }

    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        printf("%d: ", i);
        for (int j = 0; j < word_lengths[i]; ++j) {
            printf("#");
        }
        printf("\n");
    }

    return 1;
}