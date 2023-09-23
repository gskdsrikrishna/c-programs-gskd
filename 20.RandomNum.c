#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int lower, int upper) {
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

int main() {
    int lower, upper;

    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    // Set the seed value using the current time
    srand(time(0));

    int randomNumber = generateRandomNumber(lower, upper);

    printf("Random number between %d and %d: %d\n", lower, upper, randomNumber);

    return 0;
}
