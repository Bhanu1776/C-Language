#include <stdio.h>
#include <string.h>
                        // * Two ways to take string input from users, by %s and %c ..
int main() {
  char n[20];
  printf("Enter your First Name :- ");
  scanf("%s", n);

  char m[5];            //! Complex AF !!
  char c;
  int i = 0;
  printf("Enter your First Name Character by character :- ");

  while (c != '\n') {
    fflush(stdin);     //* New Stuff, Google it :)
    scanf("%c", m);
    m[i] = c;
    i++;
  }
  m[i - 1] = '\0';

  printf("Your First Name is %s\n", n);
  printf("Your First Name by 2nd method is %s\n", m);
  int compare = strcmp(n, m);
  printf("%d", compare);

  return 0;
}

//! Flaws in This program ..