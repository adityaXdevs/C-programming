#include <stdio.h>

int main() {
    int number, lastTwoDigits;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Get last 2 digits using modulus
    lastTwoDigits = number % 100;

    // Output
    printf("Last two digits = %d\n", lastTwoDigits);

    return 0;
}
