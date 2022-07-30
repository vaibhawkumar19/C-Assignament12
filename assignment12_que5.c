//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void evneN(int );
int main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	evenN(n);
}
void evenN(int n)
{
	if(n>=1)
	{
		evenN(n-1);
		printf("%d ",2*n);
	}
}
