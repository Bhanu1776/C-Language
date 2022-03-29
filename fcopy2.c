#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#define PERROR -1
int main(int argc, char *argv[]) {

  link(argv[1], argv[2]);

  unlink(argv[1]);

  return 1;
}
