#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = fahrenheitToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
