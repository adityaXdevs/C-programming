//Check If a String is a Palindrome.
//Input: "madam"
//Output: "madam" is a palindrome


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int len = strlen(str);
    int isPalindrome = 1;  // Assume true until proven false

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}