/*
 * In a two's complement number system, x&=(x-1) deletes the rightmost
 * 1 bit in x. Explain why. Use this observation to write a faster
 * version of bitcount.
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

/*
 * x &= (x-1) removes the rightmost bit since only the n-1 left most
 * bits of x and (x-1) will be the same.
 */
int bitcount(unsigned x) {
    int b = 0;

    while (x != 0) {
        b++;
        x &= (x-1);
    }
    return b;
}
