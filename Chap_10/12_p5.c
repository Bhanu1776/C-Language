#include<stdio.h>

//* Write a program to modify a file containing an integer to double its value.
//*     If old value = 2, then new file value = 4

int main()  
{
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("12_read_write.txt","r");
    ptr2 = fopen("12_read_write.txt","w");

    int n;
    fscanf(ptr,"%d",&n);
    fprintf(ptr2,"%d",n*2);         //! Error in this program , not updating values

    fclose(ptr);
    fclose(ptr2);
    return 0;
}