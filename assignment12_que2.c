//2. Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void netural(int);
void main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	netural(n);
}
void netural(int n)
{
	int i;
	if(n>=1)
	{
		printf("%d",n);
		netural(n-1);
	}
}
