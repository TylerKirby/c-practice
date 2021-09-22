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

    // Check implementation
    if (bitcount(786) != 4) {
        printf("Bitcount returned %i for 786, should have returned 4", bitcount(786));
        return 1;
    }

    printf("Enter number to count bits:\n");
    scanf("%u", &x);

    result = bitcount(x);
    printf("%u has %i bits", x, result);
}

/*
 * bitcount returns the number of 1's in bit representation of int.
 * x &= (x-1) removes the rightmost bit since only the n-1 left most
 * bits of x and (x-1) will be the same. If x is even, then x - 1 will
 * have a 0 in the 2 place and 1 in the 1 place which will remove the
 * 1 in the 2 place for x when masked. If x is odd, then x - 1 will
 * have a 0 in the 1 place and the mask will remove the 1 in the 1
 * place for x.
 */
int bitcount(unsigned x) {
    int b = 0;

    while (x != 0) {
        x &= (x - 1);
        b++;
    }
    return b;
}
