#include<stdio.h>
#include<string.h>

struct employee {
    char name[10];
    int age;
    float salary;
};
void structure(struct employee e1){
    
    // strcpy(e1.name = "Bhanu");
    e1.age = 17;
    e1.salary = 150.002;

    printf("%d\n",e1.age);
    printf("%f\n",e1.salary);

}

int main()
{
    struct employee e1;
    structure(e1);
    return 0;
}