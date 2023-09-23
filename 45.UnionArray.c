#include <stdio.h>

void findUnion(int arr1[], int size1, int arr2[], int size2) {
    printf("Union of arrays: ");

    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%d ", arr2[i]);
        }
    }

    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, size1, arr2, size2);

    return 0;
}
