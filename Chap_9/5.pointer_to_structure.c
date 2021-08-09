#include<stdio.h>
#include<string.h>

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
    (*ptr).age = 17;            //Line 15,16 both are valid code;
    ptr -> salary = 150.003;    //* -> Arrow operator .. Instead of writing (*ptr) we can use "->"

    printf("%d\n",(*ptr).age);
    printf("%f\n",ptr -> salary);

    return 0;
}