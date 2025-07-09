#include <stdio.h>

int main() {
    int hour, minut, seco, totalSecon;

    // Input
    printf("Enter hours: ");
    scanf("%d", &hour);
    printf("Enter minutes: ");
    scanf("%d", &minut);
    printf("Enter seconds: ");
    scanf("%d", &seco);

   
    totalSecon = (hour * 3600) + (minut * 60) + seco;

    
    printf("Total seconds = %d\n", totalSecon);

}
