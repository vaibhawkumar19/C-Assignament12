//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void dec_to_bin(int );
int main()
{
	int dec;
	printf("enter the decimal number ");
	scanf("%d",&dec);
	dec_to_bin(dec);
	return 0;
}
void dec_to_bin(int dec)
{
	if(dec ==0)
		printf("0");
	else
	   dec_to_bin(dec/2);
	   printf("%d",dec%2);
	
}
