// TO FIND FACTORIALS OF NUMBERS n ..

// This is the way factorials calculate :-
// factorial (4) = 1*2*3*4
// factorial (6) = 1*2*3*4*5*6*

#include<stdio.h>

int main()
{
    int i=1, n, factorial=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The factorials of your value n is %d",factorial);
    return 0;
}