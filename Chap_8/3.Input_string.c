#include<stdio.h>
                        // %s can also take inputs via scanf
int main()
{
    char s[20];

    printf("Enter your name = ");
    scanf("%s",s);  // We doesn't specify '&' address coz arrays usually have its own address ..

    printf("Your name is %s",s);
    
    return 0;
}

/*  Note :- 1) The strings should be short enough to fit into the array 
            2) Scanf cannot used to input multi-word strings with spaces .. 
*/