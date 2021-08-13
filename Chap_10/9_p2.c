#include<stdio.h>

//* Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.

int main()
{

    FILE *ptr;

    int n;
    printf("Enter the any number to print multi table = ");
    scanf("%d",&n);

    ptr = fopen ("9_p2.txt","w");
    fprintf(ptr,"The multiplication table of %d\n\n",n);
    
    for(int i=1;i<11;i++){
       fprintf(ptr , "%d x %d = %d\n",n,i,(n*i));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to 9_p2.txt ",n);
    return 0;
}