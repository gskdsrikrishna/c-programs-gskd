#include <stdio.h>

int isHarshadNumber(int number) {
    int sum = 0;
    int temp = number;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (number % sum == 0) {
        return 1; // Number is Harshad
    } else {
        return 0; // Number is not Harshad
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isHarshadNumber(number)) {
        printf("%d is a Harshad number.\n", number);
    } else {
        printf("%d is not a Harshad number.\n", number);
    }

    return 0;
}
