#include<stdio.h>

//* Write a program to read a text file character by character and,
//* write its content twice in a separate file.

int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("10_read.txt","r");
    ptr2 = fopen("10_write.txt","w");
    
    char c;
    c = fgetc(ptr);

    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr); 
    }
    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr); 
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}