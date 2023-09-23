#include <stdio.h>
#include <string.h>

int romanToInteger(char romanNum[]) {
    int length = strlen(romanNum);
    int integerNum = 0;

    for (int i = 0; i < length; i++) {
        switch (romanNum[i]) {
            case 'I':
                if (romanNum[i + 1] == 'V' || romanNum[i + 1] == 'X') {
                    integerNum -= 1;
                } else {
                    integerNum += 1;
                }
                break;
            case 'V':
                integerNum += 5;
                break;
            case 'X':
                if (romanNum[i + 1] == 'L' || romanNum[i + 1] == 'C') {
                    integerNum -= 10;
                } else {
                    integerNum += 10;
                }
                break;
            case 'L':
                integerNum += 50;
                break;
            case 'C':
                if (romanNum[i + 1] == 'D' || romanNum[i + 1] == 'M') {
                    integerNum -= 100;
                } else {
                    integerNum += 100;
                }
                break;
            case 'D':
                integerNum += 500;
                break;
            case 'M':
                integerNum += 1000;
                break;
        }
    }

    return integerNum;
}

int main() {
    char romanNum[100];

    printf("Enter a Roman numeral: ");
    scanf("%s", romanNum);

    int integerNum = romanToInteger(romanNum);

    printf("Equivalent integer: %d\n", integerNum);

    return 0;
}
