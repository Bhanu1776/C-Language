#include<stdio.h>
// Exp 5.1

int main()
{
    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c = ");
    scanf("%d",&c);

    if (a==b || b==c || c==a){  // if all are diff then print 1
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}