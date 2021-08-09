#include<stdio.h>

//* Write problem p5 structure using typedef keyword.
typedef struct complex {      //* typedef is used to create a custom name that replaces with struct tagname ..
    int real;
    int img;
}comp;

void display (comp cnums){
    printf("The value of real part is %d\n",cnums.real);
    printf("The value of imaginary part is %d\n",cnums.img);
}
int main()
{
    comp cnums[5];
    
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