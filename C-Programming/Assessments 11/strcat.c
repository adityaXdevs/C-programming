#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];

    
     
    strcat(str1, str2);
    printf("3. strcat: %s\n", str1);
    
}
