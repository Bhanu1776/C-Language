#include<stdio.h>

//* Files === The random access memory is volatile and its content is lost once the program terminates.
//*           In order to persist the data forever, we use files.

int main()
{
    FILE *ptr;       // The “File” is a structure that needs to be created for opening the file. 
                    // A file pointer is a pointer to this structure of the file.
    ptr = fopen("1_sample.txt","w");     // For writing to a file 
    ptr = fopen("1_sample.txt","r");    // For reading to a file 
    return 0;

/* Types of modes ..
   1) r = ready only mode 
   2) rb = read in binary mode
   3) w = write only mode
   4) wb = write in binary mode 
   5) a = append mode (inserting at the end of character) 
   6) w+ = write + read 
   7) r+ = read + write ... update mode 
   
   Types Functions used for File I/O 
   1) Character I/O  ===   fgetc, fputc, getc, putc 
   2) String I/O === fgets, fputs
   3) Integer I/O === getw, putw
   4) Formatted I/O === fscanf, fprintf 
   5) Record I/O === fread, fwrite 
   */
}