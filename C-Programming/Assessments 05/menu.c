#include <stdio.h>

int main() {
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

    switch (choice) {
        case 1:
            if (num % 2 == 0)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
            break;

        case 2: {
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
            break;
        }

        case 3: {
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
            break;
        }

        case 4:
            if (num > 0)
                printf("Positive Number\n");
            else if (num < 0)
                printf("Negative Number\n");
            else
                printf("Zero\n");
            break;

        case 5: {
            int temp = num, rev = 0, rem;
            while (temp != 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            printf("Reversed Number = %d\n", rev);
            break;
        }

        case 6: {
            int temp = num, sum = 0, rem;
            while (temp != 0) {
                rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            printf("Sum of Digits = %d\n", sum);
            break;
        }

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
