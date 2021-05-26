#include<stdio.h>
// This program is written to check wheater the character is lowercase or not ..
// ASCII values i.e from 97-122 = small(a to z)

int main()
{
    char ch;
    printf("Enter any character = ");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122){
        printf("%c is lowercase character !!", ch);
    }
    else {
        printf("%c is not lowercase character !!",ch);
    }
    return 0;
}