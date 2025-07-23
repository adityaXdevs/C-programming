#include <stdio.h>
#include <ctype.h>


void mystrlower(char *str);

int main() {
    char str[100];

    
    printf("Enter a string: ");
    scanf("%s", str);

    mystrlower(str);

    printf("Lowercase string: %s\n", str);

}
void mystrlower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]); 
        i++;
    }
}
