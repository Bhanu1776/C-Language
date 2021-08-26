#include<stdio.h>

int main()
{
    int marks[5];    // Array used to store similar elements

    printf("Enter the marks of student 1 = ");
    scanf("%d",&marks[0]);  // Always remember the Index number in C lang starts from 0 !!

    printf("Enter the marks of student 2 = ");
    scanf("%d",&marks[1]);

    printf("Enter the marks of student 3 = "); 
    scanf("%d",&marks[2]);

    printf("Enter the marks of student 4 = ");
    scanf("%d",&marks[3]); 

    printf("Enter the marks of student 5 = ");
    scanf("%d",&marks[4]);

    printf("The marks of students 1 = %d , 2 = %d , 3 = %d , 4 = %d , 5 = %d ", 
            marks[0], marks[1],marks[2],marks[3],marks[4]);
    return 0;
}