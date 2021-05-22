// Question 1 :-

#include <stdio.h>

int main()
{
    int length,breadth;
    // scanf("%d %d" , &length, &breadth);
    printf("Enter lenght consist of any values = ");
    scanf("%d" , &length);
    printf("Enter breadth consist of any values = ");
    scanf("%d", &breadth);
    printf("Area of rectangle is %d cm" , length*breadth);
    return 0;
}
