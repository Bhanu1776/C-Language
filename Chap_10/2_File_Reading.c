#include<stdio.h>

//* fscanf === Is used to read data type from file ..

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen ("2_sample.txt", "r");  
    fscanf(ptr ,"%d",&num);            //* f stands for file .. fscanf helps to read allocated file ..
    fclose (ptr);                      //* fclose helps to close an opened file 
    printf("The value of num is = %d\n",num);   // Prints the integer present in 2_sample.txt 
    return 0;
}