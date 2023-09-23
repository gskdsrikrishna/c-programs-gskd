#include <stdio.h>

float findAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float) sum / size;

    return average;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    float average = findAverage(arr, size);

    printf("Average of elements: %.2f\n", average);

    return 0;
}
