#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    int totalSec1, totalSec2;

    // Input for 1st time
    printf("Enter first time:\n");
    printf("Hours: ");
    scanf("%d", &h1);
    printf("Minutes: ");
    scanf("%d", &m1);
    printf("Seconds: ");
    scanf("%d", &s1);

    // Input for 2nd time
    printf("Enter second time:\n");
    printf("Hours: ");
    scanf("%d", &h2);
    printf("Minutes: ");
    scanf("%d", &m2);
    printf("Seconds: ");
    scanf("%d", &s2);

    // Convert both times to total seconds
    totalSec1 = (h1 * 3600) + (m1 * 60) + s1;
    totalSec2 = (h2 * 3600) + (m2 * 60) + s2;

    // Output total seconds
    printf("\nFirst Time in Seconds: %d\n", totalSec1);
    printf("Second Time in Seconds: %d\n", totalSec2);

    // Compare and print which time is bigger
    if (totalSec1 > totalSec2) {
        printf("First time is greater.\n");
    } else if (totalSec2 > totalSec1) {
        printf("Second time is greater.\n");
    } else {
        printf("Both times are equal.\n");
    }

    return 0;
}
