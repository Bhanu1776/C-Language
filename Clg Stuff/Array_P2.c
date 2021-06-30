#include<stdio.h>

int main()
{
    int a[100],i,n,temp,j;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("\nEnter %d elements = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for (i=0,j=n-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nThe reversed array is = ");
    for (i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}