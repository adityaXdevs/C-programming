#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'o';

    // 1. strcpy
    strcpy(temp, str1);
    printf("strcpy: %s\n", temp);

}