#include <stdio.h>
#include <string.h>

void mylength(char *str, char *copy); 

int main() {
    char str[100];
    char copy[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    mylength(str, copy); 
}

void mylength(char *str, char *copy) {
    strcpy(copy, str);             
    int data = strlen(copy);        
    printf("Length of string: %d\n", data);  
}
