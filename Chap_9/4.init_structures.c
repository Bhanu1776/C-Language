#include<stdio.h>
#include<string.h>
                        //* 2nd Way to Initilize Structure
struct employee{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct employee Bhanu = { "Bhanu", 19, 150.00};   // 2nd type ..

    printf("Name is %s\n",Bhanu.name);
    printf("Age is %d\n",Bhanu.age);
    printf("Salary is %f\n",Bhanu.salary);

    struct employee Bunny = {0};                // All the elements set to 0 ... 3rd type

    return 0;
}