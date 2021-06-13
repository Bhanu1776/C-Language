#include<stdio.h>

int main()
{
     int a,b,n;
    printf("Enter any number = ");
    scanf("%d",&n);

    for (a=1 ; a<=n ; a++){
        for (b=1 ; b<=n-a ; b++){
            printf(" ");
        }
        for (b=1 ; b<=a ; b++){
            printf("* ");
        }
        
        printf("\n");
    }

    for (a=n-1 ; a>=1 ; a--){
        for (b=1 ; b<=n-a ; b++){
            printf(" ");
        }
        for (b=1 ; b<=a ; b++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}