#include<stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("7_read_fgetc.txt", "r");
    c = fgetc(ptr);

    while (c!=EOF){      //* EOF === End of File , i.e When all the content of a file has been read, break the loop ..
        printf("%c",c);
        c = fgetc(ptr);
    }
    fclose (ptr);
    
    return 0;
}