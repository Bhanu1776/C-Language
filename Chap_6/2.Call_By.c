#include<stdio.h>

// Call by Value :- Actual value is passed to the func
// Call by Value :- Address of an particular variable is passed 

void wrong_swap (int a , int b); 
void swap (int *a , int *b);

int main()
{
    int a=6,b=4;

    printf("The value of a is %d and b is %d \n",a,b);

    wrong_swap (a,b);  // Will not work due to call by value .. 
    printf("The value of a is %d and b is %d \n",a,b);

    swap (&a,&b);    //We took address of a and b to change the values in main func
                     // Will work due to call by reference ..
    printf("The value of a is %d and b is %d \n",a,b);

    return 0;
}

void wrong_swap (int a , int b){   // We swapped the numbers but the changes doesn't occured in main function..
    int temp;                      // coz function takes the copy of main values rather than substituting in main func ..
    temp = a;
    a=b;
    b=temp;
}

void swap (int *a , int *b){   // We took address from main func Line18, Therefore we had to use " int * "
    int temp;                 
    temp = *a;  // * is used before variable to print value nor address..
    *a=*b;
    *b=temp;
}

