#include<stdio.h>
void prime(int*);
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	prime(&n);
}
void prime(int* n)
{
	int flag,temp;
	int count=0;
	for(int i=2;i<*n;i++)
	{
		temp=i;
		int flag=0;
		for(int j=2;j<temp;j++)
		{
			if(temp%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
			printf("%d is prime number\n",temp);
		}	
	}
	printf("\n There are %d Prime numbers between 1 to %d",count,*n);
}