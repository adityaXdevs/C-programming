#include <stdio.h>

void getcharater(); //function declotion
void leap();
void oddeven();
void pallindrome();
void salary();
void vote();
void vowel();

void main()
{
	getcharacter(); // function call
	leap();
	oddeven();
	pallindrome();
	salary();
	vote();
	vowel();
	
}

void getcharacter()
{

    char ch = 'A';  // change the character here

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase", ch);
    else
        printf("Not an alphabet");


  
}
 //printf("\n");
 void leap()
{
	printf("\n");
    int year = 2000;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

   
}
void oddeven()
{
	printf("\n");
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }

   
}
void pallindrome()

 {
 	printf("\n");
    int num = 121, rev = 0, temp, digit;

    temp = num;

    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;

    digit = temp % 10;
    rev = rev * 10 + digit;
    temp = temp / 10;

    digit = temp % 10;
    rev = rev * 10 + digit;

    if (num == rev)
        printf("%d is Palindrome", num);
    else
        printf("%d is Not Palindrome", num);

   
}
void salary()
{	
	printf("\n");
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

   
}
void vote()
{	
	printf("\n");
    int age = 20;  // change the age here

    if (age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");

    
}
void vowel()
 {
 	printf("\n");
    char ch = 'a';  // change the character here

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel", ch);
    else
        printf("%c is a consonant", ch);

    
}


