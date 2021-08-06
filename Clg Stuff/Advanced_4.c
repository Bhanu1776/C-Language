#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#define BUFFER_SIZE 1000

int countOccurrences(FILE *fptr, const char *word)
{
 char str[BUFFER_SIZE];
 char *pos;
 int index, count;
 count = 0;
 while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
 {
 index = 0;
 
 while ((pos = strstr(str + index, word)) != NULL)
 {
 
 index = (pos - str) + 1;
 count++;
 }
 }
 return count;
}
int main()
{
 FILE * fptr;
 int i=0,j;
 char curr_alp[]= "a";
fptr = fopen("text.txt", "r");
 if (!fptr)
 printf("File not found. \n");
 else
 {
 for(i=1;i<=26;i++)
 {
fptr = fopen("text.txt", "r");
j=countOccurrences(fptr, curr_alp);
if (j==0)
 printf("%s not found.\n",curr_alp);
 else
 printf("%s found %d times.\n",curr_alp,j);
 fclose(fptr);
strcpy( curr_alp, (char[2]) { (char)'a'+i, '\0' } );
 }
 
 } 
 
 return 0;
}