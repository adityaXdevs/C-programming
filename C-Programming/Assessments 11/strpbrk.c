#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'o';

	char *vowel = strpbrk(str1, "aeiou");
    if (vowel) printf("11. strpbrk: First vowel is '%c'\n", *vowel);
}