#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {
  pid_t pid, pid1,pid2;
  pid = fork();

  printf("Hello SEIT\n");
  if (pid < 0) {
    fprintf(stderr, "fork failed");
    return 1;
  } else if (pid == 0) {
    pid1 = getpid();
    printf("I am in child process\n");
    printf("child :pid=%d\n", pid);
    printf("child pid1 =%d\n", pid1);
  } else {
    pid2 = getpid();
    printf("\n I am in parent process\n");
    printf("parent :pid=%d", pid);
    printf("parent :pid1=%d", pid2);
    wait(NULL);
  }

  return 0;
}
