/* 7. Write a program to count digits in a given number. */

#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("digit of number is %d",count);
	return 0;
}
