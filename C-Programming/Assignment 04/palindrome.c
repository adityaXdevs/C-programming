#include <stdio.h>

int main() {
    int n = 121;  // You can take input using scanf() if needed
    int temp = n, rem, rev = 0;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
