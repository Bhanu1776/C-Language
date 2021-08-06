// Multiplication table using array 

#include<stdio.h>

int main()
{
    int multi[10];
    int n;
    printf("Enter any number to get multiplication table = ");
    scanf("%d",&n);
    printf("\n");
    
    for (int i=0 ; i<10 ; i++){
        multi[i] = n*(i+1);
        printf("%d x %d = %d\n", n,i+1,multi[i]);
    }

    // for (int i=0 ; i<10 ; i++){
    //     multi[i] = n*i+1;
    //     }

    return 0;
}