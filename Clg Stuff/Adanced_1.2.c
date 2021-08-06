#include <stdio.h>
int main() {
  int i, j, k;
  for (i = 1; i <= 5; i++) {
    k = i;
    for (j = i; j <= 5; j++)
      printf(" ");
    for (j = 1; j <= i; j++, k++) {
      printf("%3d", k);
    }
    k--;
    k--;
    for (j = i - 1; j > 0; j--, k--) {
      printf("%3d", k);
    }
    printf("\n");
  }

  for (i = 5 - 1; i >= 1; i--) {
    k = i;
    for (j = i; j <= 5; j++)
      printf(" ");
    for (j = 1; j <= i; j++, k++) {
      printf("%3d", k);
    }
    k--;
    k--;
    for (j = i - 1; j > 0; j--, k--) {
      printf("%3d", k);
    }
    printf("\n");
  }
  return 0;
}