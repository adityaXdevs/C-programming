//Find the First Non-Repeating Character in a String.
//Input: "swiss"
//Output: First non-repeating character is 'w'


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "swiss";
    int freq[256] = {0};  // Frequency of each ASCII character

    // First pass: count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: find the first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character is '%c'\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating characters found\n");
    return 0;
}