#include<stdio.h>
#include<string.h>

struct employee{
    char name[10];
    int age;
    float salary;
};

int main()
{
    struct employee facebook[100];      // facebook[100] is an array containing size 100

    strcpy (facebook[0].name,"Bhanu");
    facebook[0].age = 19;
    facebook[0].salary = 150.25;

    strcpy (facebook[1].name,"Bunny");
    facebook[1].age = 29;
    facebook[1].salary = 250.25;

    strcpy (facebook[2].name,"Jos");
    facebook[2].age = 25;
    facebook[2].salary = 200.25;
    
    // And So On ...

    return 0;
}