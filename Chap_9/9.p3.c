#include<stdio.h>
#include<string.h>

//* Write a program to illustrate the use of an arrow operator -> in C.

struct employee{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr -> age= 17;            
    ptr -> salary = 150.003;    

    printf("%d\n",ptr -> age);
    printf("%f\n",ptr -> salary);

    return 0;
}