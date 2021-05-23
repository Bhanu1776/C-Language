// #### LOGICAL OPERATORS ####

/*     &&, ||, and ! are the three logical operators in C. 
       These are read as “and”, ”or”, and “not”. They are used to provide logic to our c programs.  */

#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    
    if(age>18 && age<30){       // In the place of && we can use ||, ! operations .. Read Note !!
        printf("You can Drive !!");
    }
    else{
        printf("You cannot Drive !!");
    }
    return 0;
}