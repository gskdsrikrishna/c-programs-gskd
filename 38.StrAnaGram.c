#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < len1; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (isAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
