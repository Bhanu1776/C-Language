#include<stdio.h>

// Array input using loops !!

int main()
{
    int marks[5];

    for (int a=0; a<5 ; a++){
        printf("Enter the marks of student %d = ", a+1);
        scanf("%d",&marks[a]);
    }

    for (int i=0; i<5; i++){
        printf("The marks of student %d is %d \n", i, marks[i]);
    }
    return 0;
}