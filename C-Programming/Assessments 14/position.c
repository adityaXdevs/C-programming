//
//5.Delete an element from a specific position.
//Input: {10, 20, 30, 40, 50}, Position: 3
//Output: {10, 20, 40, 50}

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  // Original array
    int n = 5;  // Current array size
    int pos = 3;  // 1-based position to delete

    // Shift elements left to overwrite the deleted item
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrease array size after deletion

    // Display updated array
    printf("Updated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}