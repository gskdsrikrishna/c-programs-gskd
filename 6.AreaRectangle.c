#include <stdio.h>

int main() {
    float length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = length * width;

    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}
