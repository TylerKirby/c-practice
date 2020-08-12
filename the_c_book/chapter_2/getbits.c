/*
 * Example program where we can get n bits from position p from
 * unsigned value x.
 * Some notes on unsigned values. They are like ints but cannot be
 * negative. A negative unsigned evaluates to a very large number.
 * They're typically with working with bit values and when there is
 * a need to work with bits directly, e.g., bit masking or shifts.
 * See http://soundsoftware.ac.uk/c-pitfall-unsigned.html#:~:text=An%20int%20is%20signed%20by,32%2Dbit%20integer%20size)
 * for more.
 */

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);


int main() {
    unsigned x, result;
    int p, n;

    printf("Enter an unsigned integer\n");
    scanf("%u", &x);

    printf("Enter position\n");
    scanf("%i", &p);

    printf("Enter number of bits to get\n");
    scanf("%i", &n);

    result = getbits(x, p, n);
    printf("Result: %u", result);
}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}
