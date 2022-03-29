#include <stdio.h>
int main(int argc, char *argv[]) {
  char ch;
  FILE *fs, *fd;
  fs = fopen("f2", "r");
  fd = fopen("f5", "w");
  ch = fgetc(fs);
  while (ch != EOF) {
    fputc(ch, fd);
    ch = fgetc(fs);
  }
  fclose(fs);
  fclose(fd);
  return 0;
}
