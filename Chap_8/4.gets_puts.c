#include<stdio.h>
                      
int gets();  // Simple workaround to stop throwing errors in terminal !! 
             // coz in C99 compiler gets func is removed from stdio.h library .. 

int main()
{
    char s[20];

    printf("\nEnter your name = ");
    gets(s);   // gets func is used to receive multi-word string ..

    puts(s);  // Prints the string places the cursor to the next line ..
    printf("Your name is %s",s);
    
    return 0;
}