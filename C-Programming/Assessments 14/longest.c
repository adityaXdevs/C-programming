//Find the Longest Word in a String.
//Input: "Find the longest word in a string"
//Output: "longest"
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Find the longest word in a string";
    int maxLen = 0, currLen = 0, maxStart = 0, currStart = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (currLen == 0) currStart = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
        if (str[i] == '\0') break;
    }

    // Extract and print the longest word
    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}