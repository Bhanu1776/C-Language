#include<stdio.h>

int main()
{
    int a;
    printf("Enter any number = ");
    scanf("%d", &a);

    if (a%2==0){
        printf("Your entered number is even ");
    }
    else{
        printf("Your entered number is odd ");
    }
    return 0;
}