#include<stdio.h>

int main()
{
    int i = 17;
    int *ptr = &i;      //*ptr == pointers 

    printf("The value of ptr is %u\n",ptr);

    ptr++;          // after increment the value increased by 4 
                    //bcoz integer data type consist of 4 bytes ...
                    //For char it'll increase by 1 .. refer google for all types ..

    printf("The value of ptr is %u\n",ptr);

    return 0;
}