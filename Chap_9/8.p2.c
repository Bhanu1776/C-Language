#include<stdio.h>

//* Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

struct sum {
    int x;
    int y;
};

void SumVector (struct sum s1){
    int sum = s1.x+s1.y;
    printf("The sum of x:%d and y:%d is  %d ",s1.x,s1.y,sum);
}

int main()
{
    int x,y;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);

    struct sum s1;
    s1.x=x;
    s1.y=y;
    
    SumVector(s1);
    return 0;
}