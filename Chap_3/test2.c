#include<stdio.h>

// Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. 
// Assume 3 subjects and take marks as an input from the user.
int main()
{
    int p,c,m;
    float total;
    printf("Enter your physics marks = ");
    scanf("%d", &p);
    printf("Enter your Chemistry marks = ");
    scanf("%d", &c);
    printf("Enter your Maths marks = ");
    scanf("%d", &m);
    total=(p+c+m)/3.0;
    if(total<=40 || p<=33 || c<=33 || m<=33 ){
        printf("You are 'fail' ur percentage is %f", total);
    }
    else{
        printf("You are 'pass' ur percentage is %f", total);
    }
    return 0;
}