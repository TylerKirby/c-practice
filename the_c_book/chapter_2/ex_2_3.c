/*
 * Write the function htoi(s),which converts a string of hexadecimal digits (including an optional Ox or ox) into its
 * equivalent integer value. The allowable digits are 0 through 9,a through f,and A through F.
 */
#include <stdio.h>

#define MAX_INPUT 100

int get_hex_value(char c);

int main() {
    int i = 0;
    char c;
    char input[MAX_INPUT] = {0};

    // TODO: Force char to lower
    // TODO: convert char to hex

    while((c = getchar()) != '\n') {
        input[i] = c;
        ++i;
    }
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
        printf("%c is not a valid hex char");
    }
}
