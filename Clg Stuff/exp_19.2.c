#include<stdio.h>

void swap(int*, int*);

int main()
{
int n1,n2;
printf("Enter two numbers n1 and n2: ");
scanf("%d %d",&n1,&n2);
printf("Values before calling the function: %d %d",n1,n2);
swap(&n1,&n2);
printf("\nValues after calling the function: %d %d",n1,n2);
return 0;
}

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("\nNumbers in the function call after swapping: %d %d",*a,*b);
}
