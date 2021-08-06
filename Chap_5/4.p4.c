#include<stdio.h>

// Fibonacci series using function ..

int fib(int a);

int main()
{
    int n,f;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("Fibonacci series of %d is %d ",n,fib(n));
    return 0;
}

int fib(int a){
    int f;
    if (a==0 || a==1){
        return 1;
    }
    else{
       f=fib(a-1)+fib(a-2);
       return f; 
    }
}
