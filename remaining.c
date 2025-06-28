#include <stdio.h>

int main() {
    int minutes = 130;  // Change this value as needed
    int hours, remaining;

    hours = minutes / 60;
    remaining = minutes % 60;

    printf("%d minutes = %d hour(s) and %d minute(s)\n", minutes, hours, remaining);

    return 0;
}
