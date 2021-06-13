#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,x,sum=0;
    printf(" The series is =  1+x+x2+x3+...xn ");
    printf("\nEnter the value of x = ");
    scanf("%d", &x);
    printf("Enter the value of n = ");
    scanf("%d", &n);

    for (i=0 ; i<=n ; i++){
        sum=sum+pow(x,i);
    }
    printf("Sum of the given series is %d", sum);
    return 0;
}