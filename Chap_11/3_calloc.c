#include<stdio.h>

//* calloc(continous allocation) func === It initilise each memory block with a default value of 0 

int main()
{
    int *ptr;
    ptr = (int *) calloc(6, sizeof(int));  
    
    for (int i=0;i<6;i++){               
    }
    for (int i = 0; i<6; i++ ){
        printf("The value of %d element is %d\n",i+1,ptr[i]);  // Values will be 0 .. 
    }
    return 0;
}