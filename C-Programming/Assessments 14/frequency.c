//Count the Frequency of Each Character in a String.
//Input: "hello world"
//Output: h ? 1 time, e ? 1 time, l ? 3 times, o ? 2 times, w ? 1 time, r ? 1 time, d ? 1 time

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    int freq[256] = {0};  // Frequency array for all ASCII characters

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {  // Skip spaces
            freq[(unsigned char)str[i]]++;
        }
    }

    // Print result
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c ? %d time%s\n", i, freq[i], freq[i] > 1 ? "s" : "");
        }
    }

    return 0;
}