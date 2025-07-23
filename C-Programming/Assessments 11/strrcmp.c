#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";

	char ch ='r'; 
	char *pos2 = strrchr(str1, ch);

 	
    if (pos2) printf("strrchr: Last '%c' at index %ld\n", ch, pos2 - str1);
  
}
