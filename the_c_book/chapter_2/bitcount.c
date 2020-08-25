/*
 * Bitcount: count 1 bits in x
 */

#include <stdio.h>

int bitcount(unsigned x);

int main() {
    unsigned x;
    int result;

    printf("Enter number to count bits:\n");
    scanf("%u", &x);

    result = bitcount(x);
    printf("%u has %i bits", x, result);
}

int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>= 1) {
        if (x & 01) {
            b++;
        }
    }
    return b;
}
