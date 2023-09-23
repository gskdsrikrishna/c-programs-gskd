#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}
