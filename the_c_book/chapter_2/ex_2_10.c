//
// Created by Tyler Kirby on 9/22/21.
//
#include <stdio.h>
#include <string.h>

char lower(char c);

int main() {
    char test_string[] = "HeLlO WoRlD";
    int test_string_len = strlen(test_string);
    for (int i = 0; i < test_string_len; i++) {
        test_string[i] = lower(test_string[i]);
    }
    printf("%s", test_string);
}

char lower(char c) {
    return (64 < c & c < 91) ? c + 32 : c;
}
