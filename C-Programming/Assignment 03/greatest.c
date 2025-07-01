#include <stdio.h>

int main() {
    int a, b, c;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Nested if-else to find the greatest
    if (a > b) {
        if (a > c)
            printf("Greatest number is: %d\n", a);
        else
            printf("Greatest number is: %d\n", c);
    } else {
        if (b > c)
            printf("Greatest number is: %d\n", b);
        else
            printf("Greatest number is: %d\n", c);
    }

    return 0;
}
