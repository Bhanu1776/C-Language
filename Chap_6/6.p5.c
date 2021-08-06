#include<stdio.h>

int main()
{
    int i = 6;
    int *p = &i;
    int **k = &p;

    printf("The value of i is %d",**k);
    return 0;
}