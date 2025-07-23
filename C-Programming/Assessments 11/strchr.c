#include <stdio.h>
#include <string.h>
#include <ctype.h>
/// that will find the any elemt of the array for exp w and indx is 6n

int main()
{
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'w';
    
    
    char *pos1 = strchr(str1, ch);
    if (pos1) printf("strchr: '%c' found at index %ld\n", ch, pos1 - str1);
}