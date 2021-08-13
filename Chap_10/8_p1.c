#include<stdio.h>

// * Write a program to read three integers from a file.

int main()
{
    FILE *ptr;
    int num1,num2,num3;

    ptr = fopen ("8_p1.txt","r");
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);

    printf("The value of num1 is %d\n",num1);
    printf("The value of num2 is %d\n",num2);
    printf("The value of num3 is %d\n",num3);

    fclose(ptr);
    return 0;
}