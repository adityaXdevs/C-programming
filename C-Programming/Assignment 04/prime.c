#include <stdio.h>

int main() {
    int n = 7;  // You can also take input from user
    int i = 2, isPrime = 1;

    if (n <= 1) {
        isPrime = 0;
    } else {
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
