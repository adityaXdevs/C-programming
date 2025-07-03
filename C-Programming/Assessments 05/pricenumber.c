#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int j = 2;
        int isPrime = 1;  // Assume i is prime

        while (j <= i / 2) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
            j++;
        }

        if (isPrime) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
