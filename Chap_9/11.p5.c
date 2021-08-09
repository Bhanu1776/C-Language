#include<stdio.h>

//* Create an array of 5 complex numbers created in problem p4 and display them with the help of a display function.
//* The values must be taken as an input from the user.

struct complex {
    int real;
    int img;
};

void display (struct complex cnums){
    printf("The value of real part is %d\n",cnums.real);
    printf("The value of imaginary part is %d\n",cnums.img);
}
int main()
{
    struct complex cnums[5];
    
    for (int i = 0; i<5; i++){
        printf("Enter the value of %d real num = ", i+1);
        scanf("%d",&cnums[i].real);
        printf("Enter the value of %d imaginary num = ", i+1);
        scanf("%d",&cnums[i].img);
    }
    printf("\n\n");
    for (int i = 0; i<5; i++){
        display (cnums[i]);
    }
    return 0;
}