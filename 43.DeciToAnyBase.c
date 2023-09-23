#include <stdio.h>

void convertToBase(int number, int base) {
    if (number == 0) {
        return;
    } else {
        convertToBase(number / base, base);
        printf("%d", number % base);
    }
}

int main() {
    int number, base;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Enter the base (2-16): ");
    scanf("%d", &base);

    printf("Equivalent number in base %d: ", base);
    convertToBase(number, base);
    printf("\n");

    return 0;
}
