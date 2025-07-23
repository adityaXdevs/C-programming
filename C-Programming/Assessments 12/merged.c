#include <stdio.h>
#include <string.h>

char* mergeStr(char *str1, char *str2, char *result);
char* mystrcpy(char* dest, char* src);

int main() {
	char str1[100];
	char str2[100];
	char merg[200],copy[200];
	printf("First string:");
	scanf("%s", str1);
	printf("Second string:");
	scanf("%s", str2);
	mergeStr(str1, str2, merg);
	printf("Merged String: %s\n", merg);

}


char* mergeStr(char *str1, char *str2, char *result) {
	strcpy(result, str1);
	strcat(result, str2);
	return result;
}

char* mystrcpy(char* dest, char* src) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
