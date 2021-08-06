#include<stdio.h>

int main()
{
    int  b=17;
    int *p;
    p=&b;

    printf("The address of b is %u\n",p);
    printf("The value of b is %d",*p);
    return 0;
}