#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c = ");
    scanf("%d",&c);

    (a>b && a>c) ? printf("The value of a is greater !!") :
    (b>a && b>c) ? printf("The value of b is greater !!") : 
    (c>a && c>b) ? printf("The value of c is greater !!") : printf("Input valid integers !!");
    return 0;
}