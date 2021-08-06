#include<stdio.h>
#include<string.h>


int main()
{
    char st1[20] = "Bhanu";
    char *st2 = "Genius";
    strcat(st1,st2);   // This func is used to concatenate two strings .. 

    printf("Now the st1 is %s",st1);
    return 0;
}