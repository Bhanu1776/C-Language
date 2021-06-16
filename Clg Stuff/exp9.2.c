#include<stdio.h>

int main()
{
    int a,b,n;
    printf("Enter any number = ");
    scanf("%d", &n);

    for (a=1 ; a<=n ; a++){
        for (b=1 ; b<=a ; b++){
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}