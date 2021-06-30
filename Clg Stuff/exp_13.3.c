#include<stdio.h>
#include<math.h>
int pw(int p,int q)
{
	if(q==0)
	{
		return 1;
	}
	else
	{
		return p*pw(p,q-1);
	}
	
}
int main()
{
	int y;int n;
	printf("Enter the value of y=");
	scanf("%d",&y);
	printf("Enter the value of n=");
	scanf("%d",&n);
	int x=pow(y,n);
	printf("The value of x=%d",x);
	
}