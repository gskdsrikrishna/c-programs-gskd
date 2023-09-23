#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
