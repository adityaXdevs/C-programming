#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
    char str1[100] = "hello world";
    char temp[100];
  

    
    strcpy(temp, str1);
    printf("strcpy: %s\n", temp);

}