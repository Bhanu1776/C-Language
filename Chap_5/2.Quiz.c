#include<stdio.h>

int area(int side);

int main()
{
    int a,s;
    printf("Enter the value of side a = ");
    scanf("%d",&a);
    s=area(a);
    printf("The area of a square = %d",s);
    return 0;
}

int area(int side){
    int s;
    s=side*side;
    return s;
}