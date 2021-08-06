#include <stdio.h>

int convert(int);
int main() {
  int D, B;
  printf("Enter a decimal number: ");
  scanf("%d", &D);
  B = convert(D);
  printf("The binary equivalent of %d is %d.\n", D, B);
  return 0;
}
int convert(int D) {
  if (D == 0) {
    return 0;
  } else {
    return (D % 2 + 10 * convert(D / 2));
  }
}
