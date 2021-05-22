#include<stdio.h>

int main()
{
    float celcius;
    printf("Enter temperature in celcius = ");
    scanf("%f", &celcius);
    printf("Your Temperature in Farenheit is = %f" , (celcius*9/5)+32 );
    return 0;
}