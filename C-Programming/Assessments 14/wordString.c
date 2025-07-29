//.Count the Number of Words in a String.
//Input: "C programming is fun"
//Output: Number of words = 4
//


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C programming is fun";
    int wordCount = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && inWord == 0) {
            inWord = 1;      // Entering a word
            wordCount++;     // Count the word
        } else if (str[i] == ' ') {
            inWord = 0;      // Exiting a word
        }
    }

    printf("Number of words = %d\n", wordCount);
    return 0;
}
