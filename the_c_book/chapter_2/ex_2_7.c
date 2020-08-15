/*
 * Write a function invert(x, p, n) that returns x with the n bits that
 * begin at position p inverted.
 * E.g., invert(20, 3, 2) -> 24
 */

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
    unsigned x, result;
    int p, n;

    printf("Enter an unsigned integer x\n");
    scanf("%u", &x);

    printf("Enter position for x\n");
    scanf("%i", &p);

    printf("Enter number of bits to invert from x\n");
    scanf("%i", &n);

    result = invert(x, p, n);
    printf("Result: %u", result);
}

unsigned invert(unsigned x, int p, int n) {
    unsigned left_most_bits, switched_bits, right_most_bits;

    left_most_bits = x & (~0 << (p+1));
    switched_bits = (~(x >> n) & ~(~0 << n)) << n;
    right_most_bits = x & ~(~0 << n);

    return left_most_bits | switched_bits | right_most_bits;
}
