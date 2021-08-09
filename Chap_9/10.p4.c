#include<stdio.h>

//* Write a program with a structure representing a Complex number.

struct complexNum {
    int a;
    int b;
};

int main()
{
    struct complexNum c1;

    c1.a = 17;
    c1.b = 3;
    printf("The complex number is %d+i%d\n",c1.a,c1.b);

    return 0;
}