#include <stdio.h>

int main() {
  int year;
  printf("Enter any year to check wheater its Leap year or not = ");
  scanf("%d", &year);

  if (year % 400 == 0){ // Exactly divisible by 400 e.g. 1600, 2000
    printf("%d is a leap year.\n", year);
  }
  else if (year % 100 == 0){ // Exactly divisible by 100 and not by 400 e.g. 1900, 2100
    printf("%d isn't a leap year.\n", year);
  }
  else if (year % 4 == 0){ // Exactly divisible by 4 and neither by 100 nor 400// e.g. 2016, 2020
    printf("%d is a leap year.\n", year);
  }
  else {     // Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019
    printf("%d isn't a leap year.\n", year);
  }
  return 0;
}


//* IN PYTHON 

// def is_leap(year):
//     return year % 4 == 0 and (year % 400 == 0 or year % 100 != 0)

// year=1990
// print(is_leap(year))

// Leap == True
// Not Leap Year == False