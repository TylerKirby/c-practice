/*
 * Write a function setbits(x, p, n, y) that returns x with the
 * n bits that begin at position p set to the rightmost n bits
 * of y, leaving the other bits unchanged.
 * E.g., setbits(109, 3, 4, 90) -> 106
 */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
    unsigned x, y, result;
    int p, n;

    printf("Enter an unsigned integer x\n");
    scanf("%u", &x);

    printf("Enter position for x\n");
    scanf("%i", &p);

    printf("Enter number of bits to get from y\n");
    scanf("%i", &n);

    printf("Enter an unsigned integer y\n");
    scanf("%u", &y);

    result = setbits(x, p, n, y);
    printf("Result: %u", result);

}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return 0
}

