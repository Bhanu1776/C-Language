#include<stdio.h>
int fib(int a)
{
	if(a==0)
	{
		return 0;
	}
	if(a==1)
	{
		return 1;
	}
	else
	{
		return fib(a-2)+fib(a-1);
	}
}
int main()
{
	int n;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",fib(i));		
	}
	return 0;
	
}