/*
 * Write the function any(s1, s2) that returns the first location in
 * string s1 where any character from the string s2 occurs, or -1 if
 * s1 contains no characters from s2.
 */

#include <stdio.h>

#define MAX_STR_LEN 10

int any(char s1[MAX_STR_LEN], char s2[MAX_STR_LEN]);

int main() {
    int i = 0;
    char curr_char;
    char s1[MAX_STR_LEN] = {0};
    char s2[MAX_STR_LEN] = {0};

    printf("Enter string 1\n");
    while ((curr_char = getchar()) != '\n') {
        s1[i] = curr_char;
        ++i;
    }

    printf("Enter string 2\n");
    i = 0;
    while ((curr_char = getchar()) != '\n') {
        s2[i] = curr_char;
        ++i;
    }

    int firstChar = any(s1, s2);
    printf("Any result: %i", firstChar);
}

int any(char s1[MAX_STR_LEN], char s2[MAX_STR_LEN]) {
    int i, j, result;
    result = -1;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                result = i;
                goto END;
            }
        }
    }

    END:return result;
}
