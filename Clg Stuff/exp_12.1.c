#include<stdio.h>
int gcd(int x,int y)
{
	int g,m,i;
	if(x<y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	for(i=1;i<=m;i++)
	{
		if(x%i==0&&y%i==0)
		{
		    g=i;	
		}
	}
	return g;
}
int main()
{
	int a,b,c;
	printf("Enter 2 number=");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("GCD=%d",c);
	return 0;
}