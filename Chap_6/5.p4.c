#include<stdio.h>   // Tricky problem ..

int main()
{
    int a, b;
    a=7,b=3;
    int sum;
    float avg;
    
    sumAndAvg(a,b,&sum,&avg);
    printf("The sum of a and b is %d \n",sum);
    printf("The avg of a and b is %f\n", avg);

    return 0;
}
int sumAndAvg(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(a+b)/2;
    return *sum,*avg;
}