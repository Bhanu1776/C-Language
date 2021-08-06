#include<stdio.h>
#include<string.h>   // Don't forget to include this library ..

int main()
{
    char *st = "Bhanu";
    int lenght = strlen(st);  // strlen func is useed to print lenght of string excluding the null ('\0') character ..

    printf("The lenght of string st is %d",lenght);
    
    return 0;
}
