#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][100], int size) {
    char temp[100];

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char strings[][100] = {"orange", "apple", "banana", "grape"};
    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Original array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    sortStrings(strings, size);

    printf("Array of strings in alphabetical order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
