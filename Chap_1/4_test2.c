#include<stdio.h>

int main()
{
    int r;
    float pi=3.14;
    printf("Enter Radius of circle = ");
    scanf("%d", &r);
    printf("Your Area of circle is = %f \n", pi*r*r );
    float h;
    printf("Enter Height = ");
    scanf("%f" , &h);
    printf("Your Volume of cylinder is = %f ", pi*r*r*h);

    return 0;
}