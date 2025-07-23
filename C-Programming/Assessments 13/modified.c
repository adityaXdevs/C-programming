#include <stdio.h>
#include <string.h>

void removeCharAtIndex(char str[], int index) {
    int len = strlen(str);

    if (index < 0 || index >= len) {
        printf("Invalid index. Index should be between 0 and %d\n", len - 1);
        return;
    }

    for (int i = index; i < len; i++) {
        str[i] = str[i + 1];  // Shift characters left
    }

    printf("Modified string: %s\n", str);
}

int main() {
    char str[100];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Trim newline

    printf("Enter the index of the character to remove: ");
    scanf("%d", &index);

    removeCharAtIndex(str, index);

    return 0;
}