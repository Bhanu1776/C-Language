#include<stdio.h>

void prime(int i,int n,int c){

     for(n = 50; n <= 100; n++)
  {
    c = 0;
    for (i = 2; i <= n/2; i++)
    {
  	if(n%i == 0)
  	{
     	  c++;
  	  break;
	}
    }

    if(c == 0 && n != 1 )
    {
	printf(" %d ", n);
    }  
  }
}
int main()  
{
    int i, Number, count; 
  
    printf(" Prime Number from 50 to 100 are = \n"); 

    prime(i,Number,count);
    return 0;
}
