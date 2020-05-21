/*
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by
 * printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine
 * the ranges of the various floating-point types.
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Signed char range from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char range from %d to %d\n", 0, UCHAR_MAX);
    printf("Short range from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Long range from %ld to %ld\n", LONG_MIN, LONG_MAX); // Note the use of %ld
    printf("Unsigned short range from %d to %d\n", 0, USHRT_MAX);
    printf("Unsigned long range from %d to %lu\n", 0, ULONG_MAX); // Note the use of %lu

    // Variables assigned values above their limit will loop back to the
    // beginning of their range.
    unsigned char test_uchar;
    test_uchar = 400; // uchar max = 255
    printf("Overflow unsigned char value: %u\n", test_uchar);

    printf("Float range from %.10e to %.10e\n", FLT_MIN, FLT_MAX); // Note the use of %.10e to get the result in scientific form
    printf("Double range from %.10e to %.10e\n", DBL_MIN, DBL_MAX);
    printf("Long double range from %.10Le to %.10Le\n", LDBL_MIN, LDBL_MAX); // Note the use of Le
}
