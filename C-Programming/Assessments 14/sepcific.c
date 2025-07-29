//4.Insert an element at a specific position in an array.
//Input: {10, 20, 30, 40, 50}, Position: 3, Value: 25
//Output: {10, 20, 25, 30, 40, 50}

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  // Original array
    int n = 5;  // Current size of array
    int pos = 3, value = 25;

    // Shift elements right to make space
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[pos - 1] = value;
    n++;  // Increase array size

    // Display updated array
    printf("Updated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}