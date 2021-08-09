#include<stdio.h>

//* Create a two-dimensional vector using structures in C.

struct vector {
    int x;
    int y;
};

int main()
{
    struct vector v1,v2;

    v1.x = 17;
    v1.y = 63;
    printf("X dimension is %d and Y dimensioin is %d\n",v1.x,v1.y);

    v2.x = 6;
    v2.y = 32;
    printf("X dimension is %d and Y dimensioin is %d\n",v2.x,v2.y);

    return 0;
}