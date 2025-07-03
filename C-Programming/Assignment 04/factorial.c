#include <stdio.h>

int main() {
    int n = 5;  // You can change this or take input
    int fact = 1, i = 1;

    while (i <= n) {
        fact *= i;
        i++;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
