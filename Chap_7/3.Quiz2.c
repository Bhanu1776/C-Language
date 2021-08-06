#include<stdio.h>

int main()
{
    int a=17;
    int *add = &a;
    int *sub = &a;

    printf("The value of add is %u\n",add);
    add ++;
    printf("The value of add is %u\n",add);
    
    printf("The value of sub is %u\n",sub);
    sub --;
    printf("The value of sub is %u\n",sub);

    printf("The sub of both pointers is %u\n",add-sub);  // Difference between two pointers 

    
    return 0;
}