#include <stdio.h>


char* mystrchr(char *str, char ch);

int main() 
{
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Character to search: ");
    scanf(" %c", &ch);  
    char *result = mystrchr(str, ch);

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found instring\n", ch);
    }
}

char* mystrchr(char *str, char ch) 
{
    while (*str != '\0') 
	{
        if (*str == ch)
		{
            return str; 
		}
        str++;
    }
    return '\0';
}