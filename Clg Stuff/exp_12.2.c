#include<stdio.h>
int lcm(int x,int y)
{
	int i,m,g,l;
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
	l=(x*y)/g;
	return l;
}
int main()
{
	int a,b,d;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
    d=lcm(a,b);
	printf("\nLCM=%d",d);
	return 0;
}