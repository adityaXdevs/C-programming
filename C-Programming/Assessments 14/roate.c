//Left rotate an array by one position.
//Input: {10, 20, 30, 40, 50}
//Output: {20, 30, 40, 50, 10}

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = arr[0];  // Save the first element

    // Shift all elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;  // Move first to the end

    // Display updated array
    printf("Left Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}