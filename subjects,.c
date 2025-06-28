#include <stdio.h>

int main() {
    int m1 = 85, m2 = 78, m3 = 92, m4 = 88, m5 = 75;
    int total;
    float percentage;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Marks: %d %d %d %d %d\n", m1, m2, m3, m4, m5);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
