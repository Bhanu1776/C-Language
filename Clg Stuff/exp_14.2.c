#include<stdio.h>

int main()
{
    int array[100],i,j,temp,n;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    printf("\nEnter the arrays elements");
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d = ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nEnter array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(array[j]>array[j+1])
            {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
            
        }
        
    }
   
     printf("\nSorted array in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(array[j]<array[j+1])
            {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
            
        }
        
    }
    printf("\nSorted array in descending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}