#include<stdio.h>
// Find Average by use of Functions ..
float average(float x,float y,float z);

int main()
{
    int a,b,c,avg;
    printf("Enter any three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    avg= printf("The average of three numbers are %f ", average(a,b,c));
    return 0;
}
float average(float x,float y,float z){
    float avg;
    avg = (float)(x+y+z)/3;
    return avg;
}
