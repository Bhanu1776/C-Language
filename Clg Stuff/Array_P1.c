#include<stdio.h>

int main()
{
    int i,a[8]={9,8,7,6,5,4,3,2},b[8];
    for(i=0;i<8;i++){
        b[i]=a[i];
    }
    printf("Array elements of b are = ");
    for (i=0;i<8;i++){
        printf("%d ",b[i]);
    }
    return 0;
}