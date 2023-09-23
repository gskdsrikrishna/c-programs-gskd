#include <stdio.h>

int findSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = findSum(arr, size);

    printf("Sum of elements: %d\n", sum);

    return 0;
}
