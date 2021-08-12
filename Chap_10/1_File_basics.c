#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("1_sample.txt","w");     // For writing to a file 
    ptr = fopen("1_sample.txt","r");    // For reading to a file 
    return 0;

/* Types of modes ..
   1) r = ready only mode 
   2) rb = read in binary mode
   3) w = write only mode
   4) wb = write in binary mode 
   5) a = append mode (inserting at the end of character) */
}