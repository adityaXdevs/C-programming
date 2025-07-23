#include <stdio.h>

// Function to calculate the length manually
int getLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Manually trim newline from both strings
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    int len1 = getLength(str1);
    int len2 = getLength(str2);

    printf("\nLarger string is:\n");
    if (len1 > len2) {
        printf("%s\n", str1);
    } else if (len2 > len1) {
        printf("%s\n", str2);
    } else {
        printf("Both strings are equal in length: %s and %s\n", str1, str2);
    }

    return 0;
}