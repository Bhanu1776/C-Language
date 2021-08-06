#include<stdio.h>

int change(int a);

int main()
{
    int b=50,a;
    printf("The value of b is = %d \n",b);
    change(a);
    printf("The value of a is = %d", a);
    return 0;
}

int change(int a){
    a = 66;
    return a;
}