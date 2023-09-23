#include <stdio.h>
#include <math.h>

float findArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    float a, b, c;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    float area = findArea(a, b, c);

    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
