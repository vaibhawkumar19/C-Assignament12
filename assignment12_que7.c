//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printN(int );
int main()
{
	int n;
	printf("Enter the no ");
	scanf("%d",&n);
	printN(n);
}
void printN(int n)
{
	if(n>=1)
	{
	printN(n-1);
	printf("%d ",n*n);
	}
}

