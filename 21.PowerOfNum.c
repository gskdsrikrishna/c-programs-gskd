#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;

    while (exponent > 0) {
        result *= base;
        exponent--;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d raised to the power of %d: %d\n", base, exponent, result);

    return 0;
}
