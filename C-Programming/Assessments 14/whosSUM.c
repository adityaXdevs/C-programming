//Find pairs of elements whose sum is equal to a given number.
//Input: {1, 4, 5, 7, 10, 12}, Sum: 15
//Output: {(5, 10), (3, 12)}


#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 7, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    printf("Pairs with sum %d:\n", target);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}