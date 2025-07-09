#include <stdio.h>
 void armstrong();
 void menu();
 void pricenumber();
 void upper();
 void upperlimit();
 
 
void main()
{
	armstrong();
	menu();
	pricenumber();
	upper();
	upperlimit();
	
}

void armstrong()
{
	printf("\n");
    int n, i = 1;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int num = i, temp = num, digits = 0, sum = 0;

        while (temp) { digits++; temp /= 10; }

        temp = num;
        while (temp) {
            int p = 1, r = temp % 10;
            for (int j = 0; j < digits; j++) p *= r;
            sum += p;
            temp /= 10;
        }

        if (sum == num) printf("%d ", num);
        i++;
    }

}
void menu()
{
	printf("\n");
    int choice, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (num % 2 == 0)
            printf("Even Number\n");
        else
            printf("Odd Number\n");
    }
    else if (choice == 2) {
        int i = 2, isPrime = 1;
        if (num <= 1) isPrime = 0;
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
        if (isPrime)
            printf("Prime Number\n");
        else
            printf("Not a Prime Number\n");
    }
    else if (choice == 3) {
        int temp = num, rev = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num)
            printf("Palindrome Number\n");
        else
            printf("Not a Palindrome Number\n");
    }
    else if (choice == 4) {
        if (num > 0)
            printf("Positive Number\n");
        else if (num < 0)
            printf("Negative Number\n");
        else
            printf("Zero\n");
    }
    else if (choice == 5) {
        int temp = num, rev = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reversed Number = %d\n", rev);
    }
    else if (choice == 6) {
        int temp = num, sum = 0, rem;
        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of Digits = %d\n", sum);
    }
    else {
        printf("Invalid choice\n");
    }
}
void pricenumber()
{
	printf("\n");
    int n, i = 2;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int j = 2;
        int isPrime = 1;  // Assume i is prime

        while (j <= i / 2) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
            j++;
        }

        if (isPrime) {
            printf("%d ", i);
        }

        i++;
    }
}
void upper()
 {
   	printf("\n");
	int n, i = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int num = i, sum = 0, rem;

        // Extract and process each digit
        while (num != 0) {
            rem = num % 10;

            // Calculate factorial of rem using inner nested loop
            int fact = 1, j = 1;
            while (j <= rem) {
                fact *= j;
                j++;
            }

            sum += fact;
            num /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }

        i++;
    }
}
void upperlimit()
{	printf("\n");
    int n, i = 1;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    while (i <= n) {
        int j = 1, sum = 0;

        while (j < i) {
            if (i % j == 0) {
                sum += j;
            }
            j++;
        }

        if (sum == i) {
            printf("%d ", i);
        }

        i++;
    }
}



