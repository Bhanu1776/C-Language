#include<stdio.h>
#include<string.h>

int main()
{
    char *source = "Bhanu";
    char target[30];
    strcpy (target,source); // This func copies the content of second string into first string passed to it ..
    printf("The target is %s",target);
    return 0;
}