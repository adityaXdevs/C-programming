#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseWith(char *str, char *rev);

int main() {
    char str[100]; 
	char rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseWith(str, rev);
    printf("Reversed: %s\n", rev);
 
}

void reverseWith(char *str, char *rev)
 {
    int len = strlen(str);
    int i=0;
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[i] = '\0';
}