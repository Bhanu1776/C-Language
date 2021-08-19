#include<stdio.h>
#include<stdlib.h>

//* free() func === We can use free() function to de-allocate the memory.
//*                The memory allocated using calloc/malloc is not deallocated automatically.

int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *) malloc(6000 * sizeof(int));  
    
    for (int i=0;i<6000;i++){           
        ptr2 = (int *) malloc(6000 * sizeof(int));  // we are generating array without initiliazing size of array ..
        printf("Enter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);              //! Syntax 
    }
    for (int i = 0; i<6; i++ ){
        printf("The value of %d element is %d\n",i+1,ptr[i]);
    }
    return 0;
}