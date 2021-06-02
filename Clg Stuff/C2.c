# include <stdio.h>
    // ### Experiment no. 3.2 ###
int main()
{
    int a,b;
    printf("Enter value of a and b = ");
    scanf("%d %d", &a,&b );
    printf("Before swapping values of a is %d and b is %d\n", a,b);
    printf("Your temp value is = %d\n" , a=a+b);
    printf("Your value of b is = %d\n" , b=a-b);
    printf("Your value of a is = %d\n", a=a-b);
    printf("Your input values swapped successfully !!\nThe values of a = %d and b = %d" , a,b);
    return 0;
}
