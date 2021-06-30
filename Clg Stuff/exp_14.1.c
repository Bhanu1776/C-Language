#include <stdio.h>
int main() 
{ int a[100],i,n,x;
 printf("Enter the number of elements: ");
 scanf("%d",&n);

 for(i=0;i<n;i++){
    printf("\nEnter %d elements:",i+1);
    scanf("%d",&a[i]);}
    printf("\nElement to be found in the array: ");
    scanf("%d",&x);
    printf("\nArray elements are: \n");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
 for(i=0;i<n;i++){
    if(a[i]==x)
    {printf("\nElement found at location %d",i+1);
 break;}}
 if(i==n)
 printf("\nElement not found");
 
 return 0;
 }