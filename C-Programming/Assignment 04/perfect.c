#include <stdio.h>

int main() {
    int n = 28;  // You can change this or take user input
    int i = 1, sum = 0;

    while (i < n) {
        if (n % i == 0)
            sum += i;
        i++;
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    return 0;
}
