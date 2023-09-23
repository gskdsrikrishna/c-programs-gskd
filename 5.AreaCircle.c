#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double area = PI * pow(radius, 2);

    printf("Area of the circle: %.2lf\n", area);

    return 0;
}
