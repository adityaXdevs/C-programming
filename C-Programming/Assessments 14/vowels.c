//Remove All Vowels from a String.
//Input: "beautiful"
//Output: "btfl



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "beautiful";
    char result[100];  // Holds string without vowels
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' &&
            ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }

    result[j] = '\0';  // Null-terminate the result

    printf("String without vowels: %s\n", result);
    return 0;
}