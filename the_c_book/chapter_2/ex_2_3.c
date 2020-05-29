/*
 * Write the function htoi(s),which converts a string of hexadecimal digits (including an optional Ox or ox) into its
 * equivalent integer value. The allowable digits are 0 through 9,a through f,and A through F.
 */
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX_INPUT 10

int get_hex_value(char c);

int main() {
    int i = 0;
    char c;
    char input[MAX_INPUT] = {0};

    while((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
        }
        input[i] = c;
        ++i;
    }

    int pow_index = 0;
    int result = 0;
    for (int j = i-1; j >= 0; --j) {
        if (input[j] != 'x') {
            result = get_hex_value(input[j]) * pow(16, pow_index) + result;
            ++pow_index;
        }
    }

    printf("hex %s to decimal = %i", input, result);
}

int get_hex_value(char c) {
    if (c == '0') {
        return 0;
    } else if (c == '1') {
        return 1;
    } else if (c == '2') {
        return 2;
    } else if (c == '3') {
        return 3;
    } else if (c == '4') {
        return 4;
    } else if (c == '5') {
        return 5;
    } else if (c == '6') {
        return 6;
    } else if (c == '7') {
        return 7;
    } else if (c == '8') {
        return 8;
    } else if (c == '9') {
        return 9;
    } else if (c == 'a') {
        return 10;
    } else if (c == 'b') {
        return 11;
    } else if (c == 'c') {
        return 12;
    } else if (c == 'd') {
        return 13;
    } else if (c == 'e') {
        return 14;
    } else if (c == 'f') {
        return 15;
    } else {
        printf("%c is not a valid hex char", c);
    }
}
