#include<stdio.h>

int main()
{
    int deg, n, i;
    float rad, sum, t;
    printf(" Enter the value for x in degree: ");
    scanf("%d",&deg);
    printf(" Enter the value for n : ");
    scanf("%d",&n);

    rad=deg*3.14159/180;
    t=rad;
    sum=rad;
    
    for(i=1;i<=n;i++){
        t=(t*(-1)*rad*rad)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf(" The value of Sin(%f) = %.4f",rad,sum);
    return 0;
}