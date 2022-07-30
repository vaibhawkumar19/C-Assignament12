//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even_rev(int n);
int main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	even_rev(n);
}
void even_rev(int n)
{
	if(n>=1)
	{
		printf("%d ",n*2);
		even_rev(n-1);
	}
}
