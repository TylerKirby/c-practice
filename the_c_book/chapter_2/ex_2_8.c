/*
 * Write a function rightrot(x, n) that returns the values of the
 * integer x rotated to the right by n bits.
 * E.g., rightrot(13, 1) -> 134, righrot(12, 2) -> 3
 * Note that this program assumes x is an 8 bit unsigned, i.e.,
 * 0 <= x <= 255.
 */

#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
    unsigned x, result;
    int n;

    printf("Enter an unsigned integer x\n");
    scanf("%u", &x);

    printf("Enter number of bits to rotate\n");
    scanf("%i", &n);

    result = rightrot(x, n);
    printf("Result: %u", result);
}

unsigned rightrot(unsigned x, int n) {
    return (x >> n) | ((x << 8-n) & 255);
}