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

int sumOfPrimes(int limit) {
    int sum = 0;

    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    int sum = sumOfPrimes(limit);

    printf("Sum of prime numbers up to %d: %d\n", limit, sum);

    return 0;
}
