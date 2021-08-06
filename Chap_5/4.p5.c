#include<stdio.h>
// Sum of n natural numbers using recursion ..

int sum (int x);

int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is %d ", n,sum(n));
    return 0;
}
int sum (int x){
    if (x != 0){
        return (x*(x-1)/2);
        
    }
}