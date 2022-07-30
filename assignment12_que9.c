//9. Write a recursive function to print octal of a given decimal number
//test case: 12 =8X1 + 1X2=10
#include<stdio.h>
void oct_to_dec(int);
int main()
{
	int num;
	printf("enter the octal number to print decimal number ");
	scanf("%d",&num);
	oct_to_dec(num);
}
void oct_to_dec(int n)
{
	if(n==0)
		printf("");
	else
	{
		oct_to_dec(n/8);
		printf("%d",n%8);
	}
}
