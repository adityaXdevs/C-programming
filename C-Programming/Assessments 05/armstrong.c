#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int num = i;
        int digits = 0, temp = num;

        // First inner loop to count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        // Second inner loop to calculate sum of powers
        while (temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }

        i++;
    }

    return 0;
}
