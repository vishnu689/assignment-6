/* 6. Write a program to calculate factorial of a number. */

#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		fact= fact*i;
	}
	printf("factorial is %d",fact);
	return 0;
}
