#include<stdio.h>

float force(float x , float y);

int main()
{
    float m,f;
    float g=9.8;
    printf("Enter the mass in Kg = ");
    scanf("%f",&m);

    f = printf("The force acting on a body is = %.2fN",force(m,g));  //.2f for 2 decimals ..
    return 0;
}
float force(float x , float y){
    float f;
    f = x*y;
    return f;
}