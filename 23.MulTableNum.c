#include <stdio.h>

void printMultiplicationTable(int number) {
    printf("Multiplication Table of %d:\n", number);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printMultiplicationTable(number);

    return 0;
}
