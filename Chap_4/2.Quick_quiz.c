#include<stdio.h>

int main()
{
    int i = 0;
    // printf("Enter the value of i = "); -----> This commment statement is used for input 
    // scanf("%d" , &i);
    while(i<=20){
        if(i>=10){
            printf("%d\n", i);
        }
    i++; // Increment operator i.e i = i + 1 ... i++
    }
    return 0;
}