#include <stdio.h>

int main() {
    int num1, num2, sum, diff, prod;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quotient = (float) num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
