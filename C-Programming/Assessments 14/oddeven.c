#include <stdio.h>
#include <string.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    removeOddIndexedChars(str);

    
}

void removeOddIndexedChars(char str[]) {
    int i, j = 0;
    int len = strlen(str);
    char result[100];  e

    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            result[j++] = str[i];  
        }n
    }
    result[j] = '\0';  

    printf("Modified string (odd indices removed): %s\n", result);
}
