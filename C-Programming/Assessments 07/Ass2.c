#include <stdio.h>

void agee(); //function declotion
void divisible();
void greatest();
void mark();
void purchaseAmount();
void sides();
void userNumberr();



void main()
{
	agee(); // function call
	divisible();
	greatest();
	mark();
	purchaseAmount();
	sides();
	userNumberr(); 
	 
	 
}

void agee() {
    int age;

    // Input
    printf("Enter age: ");
    scanf("%d", &age);

    // Check age group
    if (age < 12) {
        printf("Child\n");
    }
    else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    }
    else if (age >= 60) {
        printf("Senior\n");
    }
    else {
        printf("Invalid age\n");
    }

}
void divisible() {
	printf("\n");
    int num;

    // Input
    printf("Enter a number for Divisible: ");
    scanf("%d", &num);

    // Check divisibility
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by both\n");
    }
    else if (num % 3 == 0) {
        printf("Divisible by 3 but not by 5\n");
    }
    else if (num % 5 == 0) {
        printf("Divisible by 5 but not by 3\n");
    }
    else {
        printf("Divisible by None\n");
    }

}
void greatest()
	{
		printf("\n");
    int a, b, c;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Nested if-else to find the greatest
    if (a > b) {
        if (a > c)
            printf("Greatest number is: %d\n", a);
        else
            printf("Greatest number is: %d\n", c);
    } else {
        if (b > c)
            printf("Greatest number is: %d\n", b);
        else
            printf("Greatest number is: %d\n", c);
    }

}
void mark()
 {
 	printf("\n");
    int marks;

 
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 75) {
        printf("Distinction\n");
    }
    else if (marks > 65) {
        printf("First Class\n");
    }
    else if (marks > 55) {
        printf("Second Class\n");
    }
    else if (marks >= 40) {
        printf("Pass Class\n");
    }
    else {
        printf("Fail\n");
    }

}

void purchaseAmount()
 {	printf("\n");
    float price, discount = 0;
    char isStudent;

    printf("Enter total purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    } else {
        if (price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f\n", price - discount);

}
void sides()
 {		
 	printf("\n");
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

}
void userNumberr()
{	
	printf("\n");
    int num1, num2;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Operation
    switch(op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

}


