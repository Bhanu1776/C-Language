#include<stdio.h>

int occ(char st[], char c){
    char *ptr;
    ptr = st;
    int count = 0;
    while (*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[] = "Bhanu";
    int count = occ(st, 'h');
    printf("occurrence is %d",count);
    return 0;
}