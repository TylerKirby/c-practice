/*
 * Write an alternate version of squeeze (s 1,s2) that deletes
 * each character in s1 that matches any character in the string s2.
 */
#include <stdio.h>

#define MAX_STR_LEN 10

void squeeze(char s1[MAX_STR_LEN], char s2[MAX_STR_LEN]);

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

    squeeze(s1, s2);
    printf("New string 1: %s", s1);
}

void squeeze(char s1[MAX_STR_LEN], char s2[MAX_STR_LEN]) {
    char temp[MAX_STR_LEN] = {0};
    int i, j, k, found;

    k = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        found = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                found = 1;
            }
        }
        if (found == 0) {
            temp[k++] = s1[i];
        }
    }

    for (i = 0; temp[i] != '\0'; i++) {
        s1[i] = temp[i];
    }
    s1[i] = '\0';
}
