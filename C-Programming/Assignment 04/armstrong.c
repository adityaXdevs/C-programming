#include <stdio.h>

int main() {
    int n = 153;  // You can change or take input
    int temp = n, rem, sum = 0;

    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
