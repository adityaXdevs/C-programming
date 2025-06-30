#include <stdio.h>

int main() {
    float basi = 4500;  // change basic salary here
    float da, ta, hra, total;

    if (basi <= 5000) {
        da = basi * 0.10;
        ta = basi * 0.20;
        hra = basi * 0.25;
    } else {
        da = basi * 0.15;
        ta = basi * 0.25;
        hra = basi * 0.30;
    }

    total = basi + da + ta + hra;

    printf("Total Salary = %.2f", total);

    return 0;
}
