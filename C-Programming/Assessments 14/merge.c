//1.Merge two sorted arrays into a single sorted array.
//Input: {1, 3, 5} and {2, 4, 6}
//Output: {1, 2, 3, 4, 5, 6}
#include<stdio.h>

int main() {
    int arr[] = {1, 3, 5};
    int aee[] = {2, 4, 6};
    int merged[6];
    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while(i < 3 && j < 3) {
        if(arr[i] < aee[j])
            merged[k++] = arr[i++];
        else
            merged[k++] = aee[j++];
    }

    // Add remaining elements if any
    while(i < 3)
        merged[k++] = arr[i++];
    while(j < 3)
        merged[k++] = aee[j++];

    // Display merged array
    printf("Merged array: ");
    for(i = 0; i < 6; i++)
        printf("%d ", merged[i]);

    return 0;
}