#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Before swap
    printf("a = %d, b = %d\n", a, b);

    // Swap
    temp = a;
    a = b;
    b = temp;

    // After swap
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
