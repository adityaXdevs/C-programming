#include <stdio.h>

int main() {
    int n = 5;  // You can also ask user to enter value using scanf()

    for (int i = 1; i <= n; i++) {        // Outer loop for rows
        for (int j = 1; j <= i; j++) {    // Inner loop for columns
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}
