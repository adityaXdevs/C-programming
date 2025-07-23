#include <stdio.h>
#include <string.h>

void removeOddIndexedChars(char str[]) {
    int i, j = 0;
    int len = strlen(str);
    char result[100];  // Buffer to store the modified string

    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            result[j++] = str[i];  // Keep even-indexed characters
        }
    }
    result[j] = '\0';  // Null-terminate the new string

    printf("Modified string (odd indices removed): %s\n", result);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    removeOddIndexedChars(str);

    return 0;
}