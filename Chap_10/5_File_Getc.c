#include<stdio.h>

//* fgetc === Used to read a character from file ..

int main()
{
    FILE *ptr;
    ptr = fopen("5_getc.txt", "r");
    // char c = fgetc(ptr);
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    printf("The value of my character is %c \n",fgetc(ptr));
    fclose(ptr);
    return 0;
}