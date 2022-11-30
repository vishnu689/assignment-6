/* 10. Write a program to reverse a given number.*/

#include<stdio.h>
int main()
{
	int n,rem,res=0,copy;
	printf("Enter any number :\n");
	scanf("%d",&n);
	copy=n;
	while(n!=0)
	{
		rem=n%10;
		res=res*10+rem;
		n=n/10;
	}
	printf("reverse of %d is %d",copy,res);
	return 0;
}
