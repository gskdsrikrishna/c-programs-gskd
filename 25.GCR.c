#include <stdio.h>

int findGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    return num1;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
