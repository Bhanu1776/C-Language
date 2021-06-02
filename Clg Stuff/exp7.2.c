#include<stdio.h>

int main()
{
    int n,rem, copy, sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    copy =n;
    
    while(n>0){
        rem =n%10;
        sum = sum +rem * rem * rem;
        n = n/10;
    }
    if(sum == copy){
        printf("The entered number is armstrong number ");
    }
    else{
        printf("The entered number is not an Armstrong number ");
    }
    return 0;
}