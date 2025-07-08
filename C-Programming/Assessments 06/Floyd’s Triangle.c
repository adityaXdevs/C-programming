#include <stdio.h>

int main() {
    int n = 4;
    int num = 1;

    for (int i = 1; i <= n; i++) {         // Rows
        for (int j = 1; j <= i; j++) {     // Columns
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
