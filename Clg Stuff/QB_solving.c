// Q3 Explain different data types in C .   slide no.=25



//  Q4 Give the difference between identifier and keyword.
// https://www.geeksforgeeks.org/difference-between-keyword-and-identifier/#:~:text=A%20keyword%20contains%20only%20alphabetical,alphabetical%20characters%2C%20digits%20and%20underscores.&text=They%20help%20to%20identify%20a,defined%20along%20with%20a%20keyword.



/* Q5 Implement an algorithm and flowchart to swap values
    of two variables without using temporary variables.
  Ans :--
1. Start
2. Get inputs a and b.
3. Find a=a+b
4. Find b=a-b
5. Find a=a-b.
6. Print the result ‘a’ and ‘b’.
7. Stop
Flow chart draw by own !! */


/* Q6 Implement an algorithm and flowchart to find the
      greatest of three integers given by the user.
 ALGO :-
1. Start
2. Declare variables a, b and c.
3. Step 3: Read variables a, b and c.
4. If a>b
If a>c
Display a is the largest number.
Else
Display c is the largest number.
Else
If b>c
Display b is the largest number.
Else
Display c is the greatest number.
5. Stop */


/* Q7 implement a C program to swap values of two
      variables without using temporary variables. */

#include<stdio.h>
int main()
{
    int a=5, b=6;
    a=a+b; //11
    b=a-b; //5
    a=a-b; //6
    printf("a=%d , b=%d",a,b);
    return 0;
} 



/* Q8 Implement a C program to find the reverse of a two
     digit number. */

#include <stdio.h>
int main() 
{
  int n, reverse = 0, rem;
  printf("Enter two digit number = ");
  scanf("%d", &n);
  while (n != 0)
  {
    rem=n%10;    
    reverse=reverse*10+rem;    
    n/=10;
  }    
  printf("Reversed Number = %d",reverse);
  
    return 0;
} 


/* Q9 Draw flowchart and write an algorithm to determine
      whether the year entered by the user is leap or not.
ALGO :--
1. Start
2. Declare variables year.
3. Get the value of year .
4. Check if(year%400==0){
    print Leap year..}
    else if (year%100==0){
    print Isn't a leap year.}
    else if (year%4==0){
    print Leap year.}
    else {
    print Isn't leap year}
5. Stop */



/* Q10 Draw flowchart and write an algorithm to find the
       greatest of four numbers.
    ALGO :--
1.Start
2.Declare variable a,b,c,d;
3. Get input values of a,b,c,d;
4. if(a>b,a>c,a>d){
    print "a is greater"}
    else if (b>c,b>d){
        print "b is greater"}
    else if (c>d){
        print "c is greater"}
    else { print "d is greater"}
5. Stop   */



/* Q11 Implement a program that accepts two numbers, if
       the first number is greater than second, then print the
       sum of these numbers else print the difference. */
// Code :--

#include<stdio.h>
int main()
{
    int first,second;
    printf("Enter the value of first and second = ");
    scanf("%d %d", &first,&second);
    if(first>second){
        printf("Sum of %d and %d is %d", first,second,first+second);
    }
    else{
        printf("Difference of %d and %d is %d", first,second,first-second);
    }
    return 0;
} 



/* Q10B  Rules for identifiers.

(1)) The name should consist of only alphabets (both upper and lower case), digits and underscore
     sign( _ ).
(2) First character should be an alphabet or underscore.
(3) The name should not be a keyword.
(4) Since C is case sensitive, the uppercase and lowercase letters are considered different. For example
    code, Code and CODE are three different identifiers.
(5) An identifier name may be arbitrarily long. Some implementations of C recognize only the first
    eight characters, though most implementations recognize 31 characters. ANSI standard compilers
    recognIze 31 characters. Members  */



/* Q12 Write a program that converts temperature from
    Celsius to Fahrenheit and vice versa. */

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temp in Celcius = ");
    scanf("%f",&c);
    f=(1.8*c) +32;
    printf("Temp in Farhenheit is %f\n\n",f);

    printf("Enter the Temp in Farhrenheit = ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Temp in Celcius is %f",c);
    return 0;
} 



/* Q15 Write a program to print all the Armstrong numbers
from 100 to 999. */

#include<stdio.h>
int main()
{
    int i = 100, rem, sum, temp, tnum;

    printf("The 3-digit Armstrong numbers are : ");

    for ( ; i <= 999; i++)
    {
        tnum = i;
        sum = 0;
        while (tnum > 0)
        {
            rem = tnum % 10;
            temp = rem * rem * rem;
            sum = temp + sum;
            tnum = tnum / 10;
        }
        if (i == sum)
            printf("%d\n", sum);
    }
    return 0;
}



/* Q17 Write a program to print all the prime numbers
       between 1 to 100. */

#include<stdio.h>
int main()
{
    int i, Number, count; 
  
  printf(" Prime Number from 1 to 100 are: \n"); 

  for(Number = 1; Number <= 100; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }  
  }
    return 0;
}

