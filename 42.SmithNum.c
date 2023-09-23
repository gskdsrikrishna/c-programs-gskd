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

int sumOfPrimeFactors(int number) {
    int sum = 0;
    int i = 2;

    while (number > 1) {
        if (number % i == 0) {
            sum += sumOfDigits(i);
            number /= i;
        } else {
            i++;
        }
    }

    return sum;
}

int isSmithNumber(int number) {
    int digitSum = sumOfDigits(number);
    int primeFactorSum = sumOfPrimeFactors(number);

    if (digitSum == primeFactorSum) {
        return 1; // Number is Smith
    } else {
        return 0; // Number is not Smith
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isSmithNumber(number)) {
        printf("%d is a Smith number.\n", number);
    } else {
        printf("%d is not a Smith number.\n", number);
    }

    return 0;
}
