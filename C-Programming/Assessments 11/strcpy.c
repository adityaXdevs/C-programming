#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];

    
    strncpy(temp, str2, 3);
    temp[3] = '\0';
    printf("2. strncpy: %s\n", temp);
}