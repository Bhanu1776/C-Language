#include<stdio.h>

//* Take name and salary of two employees as input from the user and write them to a text file in the following format

int main()
{
    FILE *ptr;
    ptr = fopen ("11_write.txt","w");

    float s1,s2;
    char name[20];
    char name2[20];

    printf("Enter the name of 1st employee = ");
    scanf("%s",name);
    printf("Enter the salary of 1st employee = ");
    scanf("%f",&s1);
    printf("Enter the name of 2nd employee = ");
    scanf("%s",name2);
    printf("Enter the salary of 2nd employee = ");
    scanf("%f",&s2);

    fprintf(ptr,"%s, %f\n",name,s1);
    fprintf(ptr,"%s, %f\n",name2,s2);

    fclose (ptr);
    printf("Successfully Generated !!");
    return 0;
}