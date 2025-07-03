#include <stdio.h>

int main() {
    int start = 1, end = 5;
    int sum = 0, i = start;

    while (i <= end) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
