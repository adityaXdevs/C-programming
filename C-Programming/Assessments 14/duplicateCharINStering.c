//Find Duplicate Characters in a String.
//Input: "programming"
//Output: g ? 2 times, r ? 2 times, m ? 2 times



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "programming";
    int freq[256] = {0};  // Frequency tracker for ASCII characters

    // First pass: count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: print duplicates only once
    printf("Duplicate Characters:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("%c ? %d time%s\n", i, freq[i], freq[i] > 1 ? "s" : "");
        }
    }

    return 0;
}