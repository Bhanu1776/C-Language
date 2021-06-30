#include<stdio.h>

int main()
{
    int marks,n;
    printf("Enter marks:");
    scanf("%d",&n);
    marks=n;
    marks/=10;
    switch(marks)
    {
        case 0:
        case 1:
        case 2:
        case 3:printf("FAIL");
        break;
        case 4:printf("THIRD CLASS");
        break;
        case 5:printf("SECOND CLASS");
        break;
        case 6:printf("FIRST CLASS");
        break;
        case 7:
        case 8:
        case 9:
        case 10:if(n<=100) 
        {
          printf("DISTINCTION");
          break;    
        }
        
        default:printf("Entered valid marks between 0-100");
    }
    return 0;
}