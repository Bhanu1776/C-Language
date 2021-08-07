#include<stdio.h>
#include<string.h>


int main()
{
    char st1[20] = "Bhanu";
    char *st2 = "Genius";
    int value = strcmp(st1,st2);   // This func is used to compare two strings .. 

    printf("Now the value of is %d",value);   // To know how ouput value occured, refer notes pgno 258 ..
    return 0;
} 