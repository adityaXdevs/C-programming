#include <stdio.h>

int main() {
    int num = 121, rev = 0, temp, digit;

    temp = num;

    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;

    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;

    digit = temp % 10;
    rev = rev * 10 + digit;

    if (num == rev)
        printf("%d is Palindrome", num);
    else
        printf("%d is Not Palindrome", num);

    return 0;
}
