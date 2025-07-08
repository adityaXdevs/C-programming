#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {              // Loop for each row
        for (int j = 1; j <= n; j++) {          // Loop for each column
            // Print * if it's the first/last row or column
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
