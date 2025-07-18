#include <stdio.h>

void sumArrays(int *arr1, int *arr2, int *result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int n;

    // Accept size of arrays
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input first array
    printf("Enter %d elements for first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter %d elements for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Call function to calculate sum
    sumArrays(arr1, arr2, sum, n);

    // Output third array (sum)
    printf("Sum of the two arrays:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}