#include<stdio.h>

int main()
{
    int a = 6;
    int *ptr=&a;
    printf("The value of a is %d\n",a);
    pass(*ptr);
    return 0;
}
void pass(int *p){
    p=6*10;
    int *k=&p;
    printf("The value of a is %d",*k);
}