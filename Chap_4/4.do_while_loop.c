#include<stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    do{
        printf("The values are %d\n", i+1); // pahele yeh print hoga fir condition check !
        i++;
    }while(i<n); // comdition check ..
    return 0;
}