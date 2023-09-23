#include <stdio.h>
#include <math.h>

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    double squareRoot = sqrt(number);

    printf("Square root: %.2lf\n", squareRoot);

    return 0;
}
