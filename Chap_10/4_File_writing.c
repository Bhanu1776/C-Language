#include<stdio.h>

//* fprintf === Is used to write in a file ..

int main()
{
    FILE *ptr;
    int num = 17;
    ptr = fopen("4_generated.txt","w");
    fprintf(ptr,"The number is %d",num);    //* fprintf is used to write on allocated file ..
    fclose(ptr);
    return 0;
}