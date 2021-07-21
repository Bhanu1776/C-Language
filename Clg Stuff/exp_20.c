#include<stdio.h>

struct student
{
char name[100];
int rno;
float fees;
};

int main()
{
struct student s1;
printf("\nEnter the student details : ");
scanf("%s %d %f",&s1.name,&s1.rno,&s1.fees);
printf("\nThe entered student details are : ");
printf("7\nName : %s ",s1.name);
printf("\nRoll No : %d ",s1.rno);
printf("\nFees : %f ",s1.fees);
return 0;
}
