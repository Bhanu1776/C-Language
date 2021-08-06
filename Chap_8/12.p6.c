#include<stdio.h>
#include<string.h>             
                            //* ENCRYPTION

void encrypt (char *c){
    char *ptr=c;
    while (*ptr!='\0'){
        *ptr =  *ptr + 1;
        ptr ++;
    }
}

int main()
{
    char c[] = "Believe In Yourself";  // Cfmjfwf!JO!Zpvstfmg
    encrypt(c);

    printf("Encrypted key is %s",c);
    return 0;
}