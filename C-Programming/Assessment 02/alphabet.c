#include <stdio.h>

int main() {
    char ch = 'A';  // change the character here

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase", ch);
    else
        printf("Not an alphabet");

    return 0;
}
