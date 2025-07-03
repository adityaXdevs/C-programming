#include <stdio.h>

int main() {
    int n = 12345;  // You can also take user input
    int first, last;

    last = n % 10;  // Get last digit

    while (n >= 10) {
        n /= 10;     // Remove digits until first remains
    }

    first = n;       // Remaining digit is the first

    printf("Sum = %d ( %d + %d )\n", first + last, first, last);

    return 0;
}
