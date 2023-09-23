#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    while (number != 0) {
        number /= 10;
        numDigits++;
    }

    number = originalNumber;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    if (sum == originalNumber) {
        return 1; // Number is Armstrong
    } else {
        return 0; // Number is not Armstrong
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrongNumber(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
