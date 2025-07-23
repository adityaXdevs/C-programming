#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mystrcpy(char*data, char*str);

int main() {
	char str [6];
	printf("Enter the string :");
	scanf("%s",&str);
	char sam[100];
	mystrcpy(sam,str);
	printf("string of the code :%s ",sam);




}
char* mystrcpy(char* data, char* str) {
	int i = 0;
	while (str[i] != '\0') {
		data[i] = str[i];
		i++;
	}
	data[i] = '\0';
//	printf("%s",data);
	return data;
}

