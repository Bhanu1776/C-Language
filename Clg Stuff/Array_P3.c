#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5} ,i,j,temp;
    printf("\nThe array is = ");
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter 0 to right shift an array by one or enter 1 to left shift an array by one = ");
    scanf("%d",&j);
    if (j==0){
        temp = a[4];
        for (i=5-1;i>0;i--){
            a[i]=a[i-1];
        }
    
    a[0]=temp;
    printf("\nNew array after rotating by one position in the right direction = ");
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    }
    else if (j==1){
        temp=a[0];
        for (i=1;i<5;i++){
            a[i-1]=a[i];
        }
        a[4]=temp;
        printf("\nNew array after rotating by one position in the left direction = ");
        for (i=0;i<5;i++){
            printf("%d ",a[i]);
        }
    }
    else {printf("Invalid Number");
    }
    
    
    return 0;
}