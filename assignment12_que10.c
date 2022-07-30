//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void reverseN(int);
int main()
{
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	reverseN(n);
	
}
void reverseN(int n)
{
	int rev=0,r;
	if(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		reverseN(n/10);
	}
	printf("%d",rev);
}
