#include<stdio.h>
#include<string.h>
                                //* DECRYPTION

void decrypt (char *c){
    char *ptr=c;
    while (*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr ++;
    }
}

int main()
{
    char c[] = "Cfmjfwf!JO!Zpvstfmg";
    decrypt(c);

    printf("Decrypted key is :- %s",c);
    return 0;
}