#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal representation: %d\n", decimal);

    return 0;
}
