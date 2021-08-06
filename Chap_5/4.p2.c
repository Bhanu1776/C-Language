#include<stdio.h>
// Celcius to Fahrenheit ..

float result (float x);

int main()
{
    int n,r;
    printf("Enter any value to convert C to F = ");
    scanf("%d",&n);
    r= printf("The converted value is = %f",result(n));
    return 0;
}
float result (float x){
    float result;
    result = (float)(x*9/5)+32;
    return result;
}