#include <stdio.h>

void Armstrong();  //function declotion
void printTable();
void factorial();
void numberlit();
void palindrome();
void perfect();
void prime();
void sameOfNumber();
void strong();


int main() {
    Armstrong(); // function Call
    printTable();
    factorial();
    numberlit();
    palindrome();
    perfect();
    prime();
	sameOfNumber();
	strong();
    
}

// Armstrong Number
void Armstrong() {
    int n;
    printf("Enter the number (for Armstrong check): ");
    scanf("%d", &n);

    int temp = n, rem, sum = 0;

    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

// Print Table
void printTable() {
    printf("\n");
    int n;
    printf("Enter the number (for table): ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
}

// Factorial
void factorial() {
    printf("\n");
    int n;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %d\n", fact);
}

// Number List
void numberlit() {
    printf("\n");
    int n;
    printf("Enter a number to list from 1 to n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Palindrome
void palindrome() {
    printf("\n");
    int n;
    printf("Enter number to check Palindrome: ");
    scanf("%d", &n);

    int temp = n, rem, rev = 0;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

// Perfect Number
void perfect() {
    printf("\n");
    int n;
    printf("Enter a number to check Perfect: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

// Prime Number
void prime() {
    printf("\n");
    int n;
    printf("Enter a number to check Prime: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime\n");
      
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("Not Prime\n");
        
        }
    }

    printf("Prime\n");
}
//sameOfNumber
void sameOfNumber()
{
	printf("\n");
    int m;  // You can also take user input
    printf("Sume of the List OFF :");
    scanf("%d",&m);
    int first, last;

    last = m % 10;  // Get last digit

    while (m >= 10) {
        m /= 10;     // Remove digits until first remains
    }

    first = m;       // Remaining digit is the first

    printf("Sum = %d ( %d + %d )\n", first + last, first, last);

}

//strong number of the list
void strong()
{
	printf("\n");
    int n ;  // You can take user input if needed
    printf("send any Strong Number : ");
    scanf("%d",&n);
    int temp = n, rem, sum = 0;

    while (temp != 0) {
        rem = temp % 10;

        // Calculate factorial of rem
        int fact = 1, i = 1;
        while (i <= rem) {
            fact *= i;
            i++;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong\n");
    else
        printf("Not Strong\n");

}


