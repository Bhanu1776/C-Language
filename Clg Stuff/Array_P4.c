#include<stdio.h>

int main()
{
    int n,i, bin, a[100] , rem;
    printf("Enter a decimal number = ");
    scanf("%d",&n);
    i=0;
    while (n>0){
        rem = n%2;
        a[i] = rem;
        n = n/2;
        i++;
    }
    printf("\nBinary Equivalent of given decimal number is = ");
    for (n=i-1;n>=0;n--){
        printf("%d",a[n]);
    }
    return 0;
}