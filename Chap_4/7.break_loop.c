// This operator is used to break the loop !!
// Break can be used in every type of loop like while,do_while,for/ loop ..

#include<stdio.h>

int main()
{
    int a = 0;
    do{
        printf("The value of a is %d\n",a);
        if(a==6){
            break;
        }
        a++;   // IMP .. Don't forget !!
    }while(a<10);
    return 0;
}