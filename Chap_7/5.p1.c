#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    
    if (ptr+2 == &arr[2]){
        printf("These points same location to the memory");
    }
    else{
        printf("\nThese do not points same location to the memory");
    }
    return 0;
}