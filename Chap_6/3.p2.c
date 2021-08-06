#include<stdio.h>

int main()
{
    int i = 63;
    
    printf("The value of i is %d\n",i);
    add(i);
    printf("The address of i is %u\n",&i);  // The address will be different ! 
                                            // Coz in func copy of variable will take place in different address ..
    return 0;
}
void add(int a){
    printf("The address of a is %u\n",&a);
}
//! Some errors in syntax pls check out !!