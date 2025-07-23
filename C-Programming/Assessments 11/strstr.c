#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'o';

    char *found = strstr(str1, "wo");
    if (found) printf("10. strstr: Found 'LO' at %ld\n", found - str1);
    
    
}
