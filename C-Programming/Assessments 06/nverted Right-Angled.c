#include <stdio.h>

int main() {
    int n = 5;  // You can also take input using scanf()

    for (int i = n; i >= 1; i--) {        // Outer loop for rows (5 to 1)
        for (int j = 1; j <= i; j++) {    // Inner loop for stars
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
