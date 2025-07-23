#include <stdio.h>
#include <string.h>

//in side the same array

int main() {
    char str[100];
    printf("Enter a string: ");   //call
    scanf("%s", str);

    reverseInPlace(str);
    printf("Reversed (in-place): %s\n", str);
    return 0;
}

void reverseInPlace(char *str) {
    int i = 0;						//diff
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
//
//int main() {
//    char str[100];
//    printf("Enter a string: ");   //call
//    scanf("%s", str);
//
//    reverseInPlace(str);
//    printf("Reversed (in-place): %s\n", str);
//    return 0;
//}