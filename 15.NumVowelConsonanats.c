#include <stdio.h>
#include <string.h>

int countVowels(char str[]) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int countConsonants(char str[]) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int vowelCount = countVowels(str);
    int consonantCount = countConsonants(str);

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}
