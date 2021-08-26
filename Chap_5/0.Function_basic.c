#include<stdio.h>

// More than one function can be executed in a program ..
// Function can be executed inside another function ..
// Types of functions :-
// 1) User defined functions = Functions defined by user..
// 2) Library functions = "prestored functions" as we used to develope game,  printf too :)
// * Parameter = The function which accepts value 
// * Return value = The function which gives values ..
// Tip:-- For no arguments and no return value using void function only !! Else use int function ..

void function(); // Function prototype or Declaration

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
