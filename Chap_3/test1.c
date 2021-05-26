#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    printf("Enter value of c = ");
    scanf("%d",&c);
    printf("Enter value of d = ");
    scanf("%d",&d);
    printf("Your values of a is %d, b is %d, c is %d, d is %d \n" , a,b,c,d);

    if (a>b && a>c && a>d){
        printf("Your value of a is greater i.e %d \n", a);
    }
    else if (b>c && b>d){
        printf("Your value of b is greater i.e %d", b);
    }
    else if (c>d){
        printf("Your value of c is greater i.e %d",c);
    }
    else{
        printf("The value of d is greater i.e %d", d);
    }
    return 0;
}