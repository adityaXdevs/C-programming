#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int num = i, sum = 0, rem;

        // Extract and process each digit
        while (num != 0) {
            rem = num % 10;

            // Calculate factorial of rem using inner nested loop
            int fact = 1, j = 1;
            while (j <= rem) {
                fact *= j;
                j++;
            }

            sum += fact;
            num /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
