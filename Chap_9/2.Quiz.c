#include<stdio.h>
#include<string.h>

// * Write a program to store the details of 3 employees from user-defined data. Use the structure declared above.

int gets ();

struct employee{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct employee e1,e2,e3;

    printf("Enter name of e1 = ");
    gets(e1.name);
    printf("Enter age of e1 = ");
    scanf("%d", &e1.age);
    printf("Enter salary of e1 = ");
    scanf("%f", &e1.salary);

    printf("Enter name of e2 = ");
    gets(e2.name);
    printf("Enter age of e2 = ");
    scanf("%d", &e2.age);
    printf("Enter salary of e2 = ");
    scanf("%f", &e2.salary);

    printf("Enter name of e3 = ");
    gets(e3.name);
    printf("Enter age of e3 = ");
    scanf("%d", &e3.age);
    printf("Enter salary of e3 = ");
    scanf("%f", &e3.salary);

    
    return 0;
}