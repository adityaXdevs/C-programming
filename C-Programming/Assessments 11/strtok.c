#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
//	char str1[100]="Aditya aher";
//	char str2[100]="ADITYA";
//	char temp[100];
	char sectence[]="Splite ,this ,into,tokens";
	char *tokens = strtok(sectence," , ");
	printf("strtok: toke");
	while (tokens)
	{
		printf("[%s]",tokens);
		tokens = strtok('\0',",");	
	}	
	printf("\n");

}