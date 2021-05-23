// ## Conditional Operators ##

#include<stdio.h>

int main()
{
    int age;
    printf("Enter Your age = ");
    scanf("%d",&age);
    // One Liner, Only use for small conditions !!
    (age>18) ? printf("U re above 18") : printf("U re below 18");
    return 0;
}