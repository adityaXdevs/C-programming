#include<stdio.h>
void main()
{
	int year;
	printf("ENter year:");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is a leap Year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}