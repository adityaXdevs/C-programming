#include <stdio.h>

void mergeArrays(int *arr1, int size1, int *arr2, int size2, int *result) {
    // Copy first array
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    // Copy second array
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
}

int main() {
    int n1, n2;

    // Input sizes of both arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    mergeArrays(arr1, n1, arr2, n2, merged);

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}