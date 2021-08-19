#include<stdio.h>
#include<stdlib.h>  // IMP 

//* malloc(Memory allocation) func = It takes number of bytes to be allocated as an input and returns a pointer of type void.

int main()
{
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(int));  // (int *) we used type casting bcoz compiler casts void pointer to int //
                                            // 6 = space for 6 integers .. * returns size of 1 int (architecture specific)
    
    for (int i=0;i<6;i++){           // we are generating array without initiliazing size of array ..
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i<6; i++ ){
        printf("The value of %d element is %d\n",i+1,ptr[i]);
    }
    return 0;
}
