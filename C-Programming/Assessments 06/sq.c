#include <stdio.h>

int main() {
    int n = 4;  // You can also take input from user using scanf()

    for (int i = 1; i <= n; i++) {         // Outer loop for rows
        for (int j = 1; j <= n; j++) {     // Inner loop for columns
            printf("* ");
        }
        printf("\n");  // Move to the next line after printing one row
    }

    return 0;
}
