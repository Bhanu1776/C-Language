#include <stdio.h>

int main() 
{
  int n, reverse = 0, rem;
  printf("Enter any number = ");
  scanf("%d", &n);
  
  while (n != 0)
  {
    rem=n%10;    // To Find Remainder ..
    reverse=reverse*10+rem;    
    n/=10;       // To Find Quotient ..
  }    
  printf("Reversed Number = %d",reverse);
  
    return 0;
} 