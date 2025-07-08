#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {         // Row loop
        for (int j = 1; j <= n; j++) {     // Column loop
            if (i == 1 || i == n || j == 1 || j == n || i == j || (i + j == n + 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
