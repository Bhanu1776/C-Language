#include<stdio.h>

int strlen(char *st){
    char *ptr = st;
    int lenght = 0;
    while (*ptr!='\0'){
        ptr ++;
        lenght++;
    }
    return lenght;
}

int main()
{
    char st[] = "Bhanu";
    int lenght = strlen(st);

    printf("\n\nThe lenght of your string is %d",lenght);
    return 0;
}