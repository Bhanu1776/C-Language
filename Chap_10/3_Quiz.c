#include<stdio.h>

//* Modify the program above to check whether the file exists or not before opening the file.

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen ("2_sample.txt", "r");  

    if (ptr == NULL){
        printf("This file do not exist");
    }
    else{
        fscanf(ptr ,"%d",&num);            
        fclose (ptr);                      
        printf("The value of num is = %d\n",num);   
    }
    return 0;
}