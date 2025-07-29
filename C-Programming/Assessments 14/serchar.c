#include<stdio.h>
int main() {
    int arr[100] = {10, 2, 30, 4, 30, 20, 60, 70, 8, 9, 100};
    int size = 11;
    int toSearch;
    printf("%s",arr);

    printf("Enter the element to delete: ");
    scanf("%d", &toSearch);

    deleteElement(arr, &size, toSearch);

    return 0;
}
void deleteElement(int arr[], int *size, int target) {
    int index = -1;

    // Search for the element
    for (int i = 0; i < *size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    // If found, shift elements to delete it
    if (index != -1) {
        for (int i = index; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;

        printf("After deletion:\n");
        for (int i = 0; i < *size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element %d not found in array.\n", target);
    }
}
