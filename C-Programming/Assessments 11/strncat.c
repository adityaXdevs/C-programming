#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'o';
    
     strncat(temp, "TEST", 2);
    printf("4. strncat: %s\n", temp);
}