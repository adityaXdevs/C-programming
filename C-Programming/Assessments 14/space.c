#include <stdio.h>
#include <string.h>

void replaceSpaces(char str[], char symbol) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = symbol;
        }
    }
    printf("Modified string: %s\n", str);
}

int main() {
    char str[100];
    char symbol;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Trim newline

    printf("Enter the symbol to replace spaces: ");
    scanf(" %c", &symbol);  // Space before %c to consume any trailing newline

    replaceSpaces(str, symbol);

    return 0;
}