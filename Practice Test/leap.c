#include <stdio.h>
 int main()
 {
 	int year;
 	printf("enter the year :");
 	scanf("%d",&year);
 	
 	if((year %4==0 && year%100!=0) ||(year%400==0))
 	{
 		printf("%d",year);
	 }else{
	 	printf("%d",year);
	 }
	 
 }
 
 