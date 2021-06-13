#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter any number = ");
    scanf("%d",&n);

    while (i<=n){
        sum=sum+(i*i);
        i++;
    }
    printf("The sum of the squares from 1 to %d is %d", n,sum);
    return 0;
}