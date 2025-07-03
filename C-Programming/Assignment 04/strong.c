#include <stdio.h>

int main() {
    int n = 145;  // You can take user input if needed
    int temp = n, rem, sum = 0;

    while (temp != 0) {
        rem = temp % 10;

        // Calculate factorial of rem
        int fact = 1, i = 1;
        while (i <= rem) {
            fact *= i;
            i++;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong\n");
    else
        printf("Not Strong\n");

    return 0;
}
