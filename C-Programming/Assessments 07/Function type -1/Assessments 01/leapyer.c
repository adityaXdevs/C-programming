#include<stdio.h>
void year();
void main()
{
	year();
}

void year()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}