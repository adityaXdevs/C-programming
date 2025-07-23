#include <stdio.h>

int mystrcmp(const char *str1, const char *str2);

int main() {
    char a[] = "Aditya";
    char b[] = "Adityb";

    int result = mystrcmp(a, b);
    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("'%s' is less than '%s'\n", a, b);
    else
        printf("'%s' is greater than '%s'\n", a, b);

}
int mystrcmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return (unsigned char)*str1 - (unsigned char)*str2;
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}