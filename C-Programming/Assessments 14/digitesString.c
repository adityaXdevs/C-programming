//Check if a String Contains Only Digits.
//Input: "12345"
//Output: Yes, only digits

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345";
    int isDigitOnly = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            isDigitOnly = 0;
            break;
        }
    }

    if (isDigitOnly) {
        printf("Yes, only digits\n");
    } else {
        printf("No, contains non-digit characters\n");
    }

    return 0;
}