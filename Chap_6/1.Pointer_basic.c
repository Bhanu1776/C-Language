#include<stdio.h>

// Note :- Confusing chap, Read carefully !!
int main()
{
    int i = 17;
    int *j = &i;  // j will now store the address of i //

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n\n", *j);  // '*' helps to change pointer to integer,char,float,etc .. IMP

    printf("The address of i is %u\n", j);
    printf("The address of i is %u\n\n", &i); // Address of I variable 

    printf("The address of j is %u\n\n", &j); // Address of J variable

//  printf("The address of i is %u\n\n", *j); // Wrong syntax ! Format specifier is different

    printf("The value of j is %u\n\n", *(&j)); // This will print the address of i , 
                                             // bcoz in line 6, we assigned address of i to j ..

//  printf("The value of j is %d", j); // Wrong statement, this will print garbage value !!
                                       // bcoz we haven't assigned any value of j

// ### POINTER TO A POINTER ###

    int **k = &j;
    printf("The value of k is %d\n", k);   // This will print valur of k that is the address of j which is assigned in line 26 ..
    printf("The address of k is %u\n\n", &k);  //This will print address of k
    return 0;

    // **** TYPES OF FUNCTION CALL ****

    // 1] Call By Value == Only value is called 
    // 2] Call By Reference == Only address is called 
}