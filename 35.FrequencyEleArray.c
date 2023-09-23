#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size];

    for (int i = 0; i < size; i++) {
        visited[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 0;
            }
        }

        if (visited[i] != 0) {
            visited[i] = count;
        }
    }

    printf("Frequency of elements:\n");
    for (int i = 0; i < size; i++) {
        if (visited[i] != 0) {
            printf("%d occurs %d time(s)\n", arr[i], visited[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
