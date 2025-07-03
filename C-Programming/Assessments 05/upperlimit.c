#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int j = 1, sum = 0;

        while (j < i) {
            if (i % j == 0) {
                sum += j;
            }
            j++;
        }

        if (sum == i) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
