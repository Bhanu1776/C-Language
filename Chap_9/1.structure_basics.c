#include<stdio.h>
#include<string.h>

//* Structures === A structure in c is a collection of variables of different types under a single name..

struct employee {
    int code;               //  => this declares a new user-defined datatype
    float salary;
    char name[10];

};                          // • semicolon is important

int main()
{
    int a = 17;
    float b = 63.64;
    char k = 'c';

    struct employee e1;     // e1 is a variable assigned to a structure ..
    e1.code = 100;          // "." is known as a member operator ..
    e1.salary = 150.002;
    strcpy (e1.name, "Bhanu");

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);

    return 0;
}