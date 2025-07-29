#include <stdio.h>
#include <string.h>

void swapFirstAndLast(char str[]) {
    int len = strlen(str);

    // Swap only if length is greater than 1
    if (len > 1) {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("Modified string: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Trim newline

    swapFirstAndLast(str);

    return 0;
}