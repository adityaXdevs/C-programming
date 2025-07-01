#include <stdio.h>

int main() {
    int side1, side2, side3;

   
    printf("Enter first side: ");
    scanf("%d", &side1);

    printf("Enter second side: ");
    scanf("%d", &side2);

    printf("Enter third side: ");
    scanf("%d", &side3);


    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {


        if (side1 == side2 && side2 == side3) {
            printf("Triangle is Equilateral\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Triangle is Isosceles\n");
        }
        else {
            printf("Triangle is Scalene\n");
        }

    } else {

        printf("Not a valid triangle\n");
    }

    return 0;
}
