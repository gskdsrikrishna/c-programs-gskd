#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
