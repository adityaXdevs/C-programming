#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (inWord == 0) {
                count++;      // Start of a new word
                inWord = 1;
            }
        } else {
            inWord = 0;        // Space encountered, end current word
        }
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    int totalWords = countWords(str);
    printf("Total number of words: %d\n", totalWords);

    return 0;
}