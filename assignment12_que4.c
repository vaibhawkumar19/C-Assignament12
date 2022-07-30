//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void oddN(int);
int main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	oddN(n);	
}
void oddN(int n)
{
	if(n>=1)
	{
			printf("%d ",2*n-1);
			oddN(n-1);

	}
}
