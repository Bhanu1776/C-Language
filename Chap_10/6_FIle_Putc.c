#include<stdio.h>

//* fputc === Used to write character to the file ..

int main()
{
    FILE *ptr;
    ptr = fopen("6_putc.txt","w");
    putc('B',ptr);                  //! Syntex check !!
    putc('h',ptr);
    putc('a',ptr);
    putc('n',ptr);
    putc('u',ptr);
    fclose(ptr);

    return 0;
}