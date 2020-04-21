/* Rewrite the temperature conversion program to use a function for conversion. */
#include <stdio.h>

float fahr_to_cel(float fahr);

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celsius\nFrom %d degrees Celsius to %d\n", lower, upper);

    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr_to_cel(fahr);
        printf("%3.0f \t %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fahr_to_cel(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}