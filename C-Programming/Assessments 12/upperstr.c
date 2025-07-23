#include <stdio.h>
#include <ctype.h>

void mystrupper(char *str);

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    mystrupper(str);
    printf("Uppercase string: %s\n", str);

}

void mystrupper(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
	{
        str[i] = toupper(str[i]);  
        i++;
    }
}
