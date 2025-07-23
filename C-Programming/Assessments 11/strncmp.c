#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    int rest =(str1,str2,5);
    printf("strncmp: %d\n", rest);
}