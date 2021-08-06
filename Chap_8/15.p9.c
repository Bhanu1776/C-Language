#include<stdio.h>

void occ(char st[], char c){
    char *ptr;
    ptr = st;
    int count = 0;
    while (*ptr!='\0'){
        if(*ptr==c){
            printf("Same");
        }
        ptr++;
    }
}

int main()
{
    char st[] = "Bhanu";
    occ(st, 'a');
    return 0;
}