#include<stdio.h>
// More than one function can be executed in a program ..
// Function can be executed inside another function ..
// Types of functions :-
// 1) User defined functions = printf()
// 2) Library functions = prestored functions as we used to develope game :)
// * Parameter = The function which accepts value 
// * Return value = The function which gives values ..

void function(); // Function prototype 

int main()
{
    printf("Good Morning \n");
    function();    // Function call
    printf("Good Night");
    return 0;
}

// Functional Defination
void function(){     
    printf("Good Evening \n");
}
