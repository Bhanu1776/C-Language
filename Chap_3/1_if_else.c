#include<stdio.h>

int main()
{
    int age;
    printf("Enter Your Age = ");
    scanf("%d", &age);

    if(age<=18){
        printf("You can not apply for pancard !!");
    }
    else{
        printf("You are applicable to a create pancard.. ");
    }
    return 0;
}