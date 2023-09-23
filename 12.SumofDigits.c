#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);

    printf("Sum of digits: %d\n", sum);

    return 0;
}
