/* 2. Write a program to calculate sum of first N even natural numbers*/

#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+2*i;
	}
	printf("sum of %d even no is %d",n,sum);
	return 0;
}

