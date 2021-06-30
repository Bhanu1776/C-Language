#include<stdio.h>
int fact(int x)
{
	int i,m=1;
	for(i=1;i<=x;i++)
	{
		m=m*i;
	}
	return m;
}
int main()
{
	int n,e,a;
	printf("Enter a number=");
	scanf("%d",&n);
	e=fact(n);
	printf("\nFactorial=%d",e);
	
	return 0;
}