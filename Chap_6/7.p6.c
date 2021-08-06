#include<stdio.h>  // Wrong !

int main()
{
    int a = 6;
    int *ptr=&a;
    printf("The value of a is %d\n",a);
    pass(a);
    return 0;
}
void pass(int a){
    int s = a*10;
    printf("The value of a is %d\n",s);
}