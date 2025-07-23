#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str1[100] = "hello world";
	char str2[100] = "HELLO";

	int result = strcmp(str1, str2);
	printf("strcmp: %d\n", result);



}