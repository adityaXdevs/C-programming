#include <stdio.h>

int main() {
    int n = 5;  // Height of the pyramid

    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
